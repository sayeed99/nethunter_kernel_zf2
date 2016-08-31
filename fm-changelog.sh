#!/bin/sh

sdate=${1}
cdate=`date +"%d_%m_%Y"`
rdir=`pwd`

rm -rf Changelog_*

clear

# Check the date start range is set
if [ -z "$sdate" ]; then
echo""
echo "ATTENTION: Start date not defined ----------------------------------------------------"
    echo""
    echo " >>> Please define a start date in dd/mm/yyyy format ..."
    echo""
    echo "----------------------------------------------------------------------------------"
    read sdate
fi

# Find the directories to log
echo"";echo"";echo""
echo "FlareM Kernel -------------------------------------------------------------------------"
echo""
find $rdir -name .git | sed 's/\/.git//g' | sed 'N;$!P;$!D;$d' | while read line
do
cd $line
    # Test to see if the repo needs to have a changelog written.
    log=$(git log --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit --no-merges --since=$sdate --date-order)
    project="FlareM Kernel"
    if [ -z "$log" ]; then
    echo " >>> Nothing updated on $project changelog, skipping ..."
    else
        # Write the changelog
        echo " >>> Changelog is updated and written for $project ..."
        echo "Project name: $project" >> "$rdir"/Changelog_$cdate.log
        echo "$log" | while read line
        do
echo " $line" >> "$rdir"/Changelog_$cdate.log
        done
echo "" >> "$rdir"/Changelog_$cdate.log
    fi
done
echo""
echo "------------------------------------------------------------------------------------"
echo"";echo"";echo""
