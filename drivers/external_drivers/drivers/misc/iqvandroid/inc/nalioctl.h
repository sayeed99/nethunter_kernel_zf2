/*

  This file is provided under a dual BSD/GPLv2 license.  When using or
  redistributing this file, you may do so under either license.

  GPL LICENSE SUMMARY

  Copyright(c) 1999 - 2013 Intel Corporation. All rights reserved.

  This program is free software; you can redistribute it and/or modify
  it under the terms of version 2 of the GNU General Public License as
  published by the Free Software Foundation.

  This program is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St - Fifth Floor, Boston, MA 02110-1301 USA.
  The full GNU General Public License is included in this distribution
  in the file called LICENSE.GPL.

  Contact Information:
  e1000-devel Mailing List <e1000-devel@lists.sourceforge.net>
  Intel Corporation, 5200 N.E. Elam Young Parkway, Hillsboro, OR 97124-6497

  BSD LICENSE

  Copyright(c) 1999 - 2013 Intel Corporation. All rights reserved.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the
      distribution.
    * Neither the name of Intel Corporation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

/*
 *
 * Module Name:
 *   nalioctl.h
 *
 * Abstract:
 *   Contains the ioctl values for sharing between the user mode app
 *   and the nal driver. This file is shared by all protected mode
 *   operating system NAL implementations.
 *
 */


#ifndef __NALIOCTL_H__
#define __NALIOCTL_H__

#include "naltypes.h"
#include "nalcodes.h"
#include "os_i.h"
#include "hwbus_t.h"

#define NAL_MAX_DEBUG_PRINT_LENGTH 200
#define RETURN

#define IOCTL_NAL_OSI NAL_MAKE_IOCTL(0)
#define IOCTL_NAL_HW_BUS NAL_MAKE_IOCTL(1)
#define IOCTL_NAL_NDI NAL_MAKE_IOCTL(2)
#define IOCTL_NAL_OS_SPECIFIC NAL_MAKE_IOCTL(3)

#define NAL_READPORT8_FUNCID 1
#define NAL_READPORT16_FUNCID 2
#define NAL_READPORT32_FUNCID 3
#define NAL_WRITEPORT8_FUNCID 7
#define NAL_WRITEPORT16_FUNCID 8
#define NAL_WRITEPORT32_FUNCID 9
#define NAL_READREGISTER8_FUNCID 13
#define NAL_READREGISTER16_FUNCID 14
#define NAL_READREGISTER32_FUNCID 15
#define NAL_WRITEREGISTER8_FUNCID 19
#define NAL_WRITEREGISTER16_FUNCID 20
#define NAL_WRITEREGISTER32_FUNCID 21
#define NAL_MMAPADDRESS_FUNCID 25
#define NAL_UNMAPADDRESS_FUNCID 26
#define NAL_GETTIMESTAMP_FUNCID 27
#define NAL_GETTIMESTAMPSPERMICROSECOND_FUNCID 28
#define NAL_REGISTERTIMERCALLBACK_FUNCID 33
#define NAL_UNREGISTERTIMERCALLBACK_FUNCID 34
#define NAL_DELAYMILLISECONDS_FUNCID 35
#define NAL_DELAYMICROSECONDS_FUNCID 36
#define NAL_GETPHYSICALMEMORYADDRESS_FUNCID 37
#define NAL_ALLOCATEMEMORYNONPAGED_FUNCID 38
#define NAL_FREEMEMORYNONPAGED_FUNCID 39
#define NAL_ATOMICINCREMENT32_FUNCID 40
#define NAL_ATOMICDECREMENT32_FUNCID 41
#define NAL_ATOMICTESTSET32_FUNCID 42
#define NAL_ACQUIRESPINLOCK_FUNCID 43
#define NAL_RELEASESPINLOCK_FUNCID 44
#define NAL_INITIALIZESPINLOCK_FUNCID 45
#define NAL_CHECKSECURITY_FUNCID 46
#define NAL_DEBUGPRINT_FUNCID 47
#define NAL_KMEMSET_FUNCID 48
#define NAL_KUMEMCPY_FUNCID 49
#define NAL_KKMEMCPY_FUNCID 50
#define NAL_UKMEMCPY_FUNCID 51
#define NAL_ENABLE_DEBUG_PRINT_FUNCID 54
#define NAL_ALLOCATEMEMORYNONPAGEDEX_FUNCID 55
#define NAL_FREEMEMORYNONPAGEDEX_FUNCID 56
#define NAL_MMAPADDRESSEX_FUNCID 57
#define NAL_UNMAPADDRESSEX_FUNCID 58
#define NAL_GETPHYSICALMEMORYADDRESSEX_FUNCID 59

#define NAL_READPCIDEVICECOUNT_FUNCID 1
#define NAL_READPCIDEVICE_FUNCID 2
#define NAL_FILLPCICONFIGSPEC_FUNCID 3
#define NAL_OSREADPCICONFIG32_FUNCID 4
#define NAL_OSWRITEPCICONFIG32_FUNCID 5
#define NAL_OSWRITEPCICONFIGVARIABLE_FUNCID 6
#define NAL_ENABLEPCIDEVICE_FUNCID 7

#define NAL_INITIALIZEINTERRUPTS_FUNCID 1
#define NAL_HASINTERRUPTOCCURRED_FUNCID 2
#define NAL_UNINITIALIZEINTERRUPTS_FUNCID 3

#define NAL_WIN_GET_PDO_POINTER_FUNCID 1
#define NAL_WIN_GET_SYMBOLIC_NAME_FUNCID 2
#define NAL_WIN_ALLOC_DEV_CONTEXT_FUNCID 3
#define NAL_WIN_FREE_DEV_CONTEXT_FUNCID 4
#define NAL_WIN_OS_DEVICE_FUNCID 5
#define NAL_WIN_DRIVER_GET_REF_COUNT_FUNCID 6
#define NAL_WIN_ADAPTER_IN_USE_FUNCID 7
#define NAL_WIN_IS_ADAPTER_IN_USE_FUNCID 8

#define NAL_LINUX_IS_ADAPTER_IN_USE_FUNCID 1
#define NAL_LINUX_ADAPTER_IN_USE_FUNCID 2
#define NAL_LINUX_REQUEST_REGIONS_FUNCID 3
#define NAL_LINUX_RELEASE_REGIONS_FUNCID 4
#define NAL_LINUX_GET_DRIVER_REFCOUNT_FUNCID 5
#define NAL_LINUX_INC_DRIVER_REFCOUNT_FUNCID 6
#define NAL_LINUX_DEC_DRIVER_REFCOUNT_FUNCID 7
#define NAL_LINUX_FILL_DEVICE_RESOURCE_FUNCID 8
#define NAL_LINUX_DRIVER_GET_VERSION 9
#define NAL_LINUX_ALLOCATEMEMORYNONPAGEDPCI_FUNCID 10
#define NAL_LINUX_FREEMEMORYNONPAGEDPCI_FUNCID 11
#define NAL_LINUX_READPCIEXBYTE_FUNCID 12
#define NAL_LINUX_WRITEPCIEXBYTE_FUNCID 13
#define NAL_LINUX_GET_RUN_DOMAIN_FUNCID 14

#define NAL_SOLARIS_IS_ADAPTER_IN_USE_FUNCID 1
#define NAL_SOLARIS_ADAPTER_IN_USE_FUNCID 2
#define NAL_SOLARIS_REQUEST_REGIONS_FUNCID 3
#define NAL_SOLARIS_RELEASE_REGIONS_FUNCID 4
#define NAL_SOLARIS_GET_DRIVER_REFCOUNT_FUNCID 5
#define NAL_SOLARIS_DRIVER_GET_VERSION 9
#define NAL_SOLARIS_ALLOCATEMEMORYNONPAGEDPCI_FUNCID 10
#define NAL_SOLARIS_FREEMEMORYNONPAGEDPCI_FUNCID 11

typedef union _NAL_UNSIGNED_UNION
{
    UINT8 Uint8;
    UINT16 Uint16;
    UINT32 Uint32;
    UINT64 Uint64;
} NAL_UNSIGNED_UNION;

typedef struct _NAL_WIN_DRIVER_GET_REF_COUNT_FUNC
{
    OUT UINT32 RefCount;
} NAL_WIN_DRIVER_GET_REF_COUNT_FUNC;

typedef struct _NAL_ADAPTER_IN_USE_FUNC
{
    IN NAL_DEVICE_LOCATION NalDevice;
    OUT BOOLEAN CanBeUsed;
    OUT BOOLEAN Locked;
} NAL_WIN_ADAPTER_IN_USE_FUNC,
  NAL_LINUX_ADAPTER_IN_USE_FUNC,
  NAL_SOLARIS_ADAPTER_IN_USE_FUNC;

typedef struct _NAL_IS_ADAPTER_IN_USE_FUNC
{
    IN NAL_DEVICE_LOCATION NalDevice;
    OUT BOOLEAN IsInUse;
} NAL_WIN_IS_ADAPTER_IN_USE_FUNC,
  NAL_LINUX_IS_ADAPTER_IN_USE_FUNC,
  NAL_SOLARIS_IS_ADAPTER_IN_USE_FUNC;

typedef struct _NAL_ENABLE_DEBUG_PRINT_FUNC
{
    IN BOOLEAN Enable;
} NAL_ENABLE_DEBUG_PRINT_FUNC;

typedef struct _NAL_WIN_GET_PDO_POINTER_FUNC
{
    IN OUT KVOID* DeviceContext;
    IN NAL_DEVICE_LOCATION PciLocation;
} NAL_WIN_GET_PDO_POINTER_FUNC;

typedef struct _NAL_WIN_GET_SYMBOLIC_NAME_FUNC
{
    IN KVOID* DeviceContext;
    OUT CHAR SymbolicName[260];
} NAL_WIN_GET_SYMBOLIC_NAME_FUNC;

typedef struct _NAL_WIN_ALLOC_DEV_CONTEXT_FUNC
{
    RETURN KVOID* ReturnValue;
} NAL_WIN_ALLOC_DEV_CONTEXT_FUNC;

typedef struct _NAL_WIN_FREE_DEV_CONTEXT_FUNC
{
    IN KVOID* DeviceContext;
} NAL_WIN_FREE_DEV_CONTEXT_FUNC;

typedef struct _NAL_LINUX_DEVICERESOURCE_FUNCS
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION DeviceLocation;
    OUT NAL_IO_RESOURCE NalIoResource[NAL_MAX_BARS];
    OUT KVOID* Pdev;
} NAL_LINUX_DEVICERESOURCE_FUNC,
  NAL_SOLARIS_REGION_FUNCS;

typedef struct _NAL_LINUX_REFCOUNT_FUNCS
{
    RETURN UINT32 ReturnValue;
} NAL_LINUX_REFCOUNT_FUNCS,
  NAL_SOLARIS_REFCOUNT_FUNCS;

typedef struct _NAL_LINUX_DRIVER_GET_VERSION_FUNCS
{
    OUT CHAR Version[32];
} NAL_LINUX_DRIVER_GET_VERSION_FUNCS,
  NAL_SOLARIS_DRIVER_GET_VERSION_FUNCS;

typedef struct _NAL_OS_DEVICE_FUNC
{
    IN NAL_MAC_TYPE MacType;
    IN NAL_DEVICE_LOCATION DeviceLocation;
    IN NAL_PHYSICAL_ADDRESS PhysicalAddress;
    IN KVOID* VirtualAddress;
    IN PORT_ADDR PortAddress;
    IN BOOLEAN IsDriverLoaded;
    IN OUT KVOID* DeviceContext;
    RETURN NAL_STATUS NalStatus;
} NAL_OS_DEVICE_FUNC;

typedef struct _NAL_INTERRUPT_FUNCS
{
    RETURN NAL_STATUS ReturnValue;
    RETURN BOOLEAN Triggered;
    IN KVOID* NalOsDevice;
} NAL_INTERRUPT_FUNCS;

typedef struct _NAL_READPORT_FUNCS
{
    NAL_UNSIGNED_UNION ReturnValue;
    PORT_ADDR Port;
} NAL_READPORT_FUNCS;

typedef struct _NAL_WRITEPORT_FUNCS
{
    RETURN BOOLEAN ReturnValue;
    IN PORT_ADDR Port;
    IN NAL_UNSIGNED_UNION Value;
} NAL_WRITEPORT_FUNCS;

typedef struct _NAL_READREGISTER_FUNCS
{
    RETURN NAL_UNSIGNED_UNION ReturnValue;
    IN KVOID* Address;
} NAL_READREGISTER_FUNCS;

typedef struct _NAL_READREGISTER_FUNCS_Ex
{
    RETURN NAL_UNSIGNED_UNION ReturnValue;
    IN KVOID* Address;
    IN NAL_DEVICE_LOCATION DeviceLocation;
} NAL_READREGISTER_FUNCS_Ex;

typedef struct _NAL_WRITEREGISTER_FUNCS
{
    RETURN BOOLEAN ReturnValue;
    IN KVOID* Address;
    IN NAL_UNSIGNED_UNION Value;
} NAL_WRITEREGISTER_FUNCS;
typedef struct _NAL_WRITEREGISTER_FUNCS_Ex
{
    RETURN BOOLEAN ReturnValue;
    IN KVOID* Address;
    IN NAL_UNSIGNED_UNION Value;
    IN NAL_DEVICE_LOCATION DeviceLocation;
} NAL_WRITEREGISTER_FUNCS_Ex;

typedef struct _NAL_MEMMAP_FUNCS
{
    RETURN NAL_STATUS ReturnValue;
    OUT KVOID* VirtualAddress;
    IN NAL_PHYSICAL_ADDRESS PhysicalAddress;
    IN OUT UINT32 Length;
    IN UINTN ProcessId;
} NAL_MEMMAP_FUNCS;

typedef struct _NAL_TIMESTAMP_FUNCS
{
    RETURN UINT64 ReturnValue;
} NAL_TIMESTAMP_FUNCS;

typedef struct _NAL_REGISTERTIMERCALLBACK_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_TIMER_CALLBACK TimerCallback;
    IN OUT UINT32 TimerInterval;
    IN UINTN Context;
    OUT UINT32 CallbackId;
} NAL_REGISTERTIMERCALLBACK_FUNC;

typedef struct _NAL_UNREGISTERTIMERCALLBACK_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN UINT32 CallbackId;
} NAL_UNREGISTERTIMERCALLBACK_FUNC;

typedef struct _NAL_DELAY_FUNCS
{
    IN UINT32 Delay;
} NAL_DELAY_FUNCS;

typedef struct _NAL_GETPHYSICALMEMORYADDRESS_FUNC
{
    RETURN NAL_PHYSICAL_ADDRESS ReturnValue;
    IN KVOID* VirtualAddress;
    IN UINTN ProcessId;
} NAL_GETPHYSICALMEMORYADDRESS_FUNC;

typedef struct _NAL_ALLOCATEMEMORYNONPAGED_FUNC
{
    RETURN KVOID* ReturnValue;
    IN UINT32 ByteCount;
    IN UINT32 Alignment;
    OUT NAL_PHYSICAL_ADDRESS PhysicalAddress;
    IN UINTN ProcessId;
} NAL_ALLOCATEMEMORYNONPAGED_FUNC;

typedef struct _NAL_LINUX_ALLOCATEMEMORYNONPAGEDPCI_FUNC
{
    IN KVOID* PDev;
    RETURN KVOID* ReturnValue;
    IN UINT32 ByteCount;
    IN UINT32 Alignment;
    OUT NAL_PHYSICAL_ADDRESS PhysicalAddress;
    IN UINTN ProcessId;
} NAL_LINUX_ALLOCATEMEMORYNONPAGEDPCI_FUNC,
    NAL_SOLARIS_ALLOCATEMEMORYNONPAGEDPCI_FUNC;

typedef struct _NAL_FREEMEMORYNONPAGED_FUNC
{
    IN KVOID* Address;
    IN UINTN ProcessId;
} NAL_FREEMEMORYNONPAGED_FUNC;

typedef struct _NAL_LINUX_FREEMEMORYNONPAGEDPCI_FUNC
{
    IN KVOID* PDev;
    IN KVOID* Address;
    IN NAL_PHYSICAL_ADDRESS PhysicalAddress;
    IN UINT32 Size;
} NAL_LINUX_FREEMEMORYNONPAGEDPCI_FUNC,
    NAL_SOLARIS_FREEMEMORYNONPAGEDPCI_FUNC;

typedef struct _NAL_ATOMIC_FUNCS
{
    RETURN UINT32 ReturnValue;
    IN OUT UINT32* Address;
} NAL_ATOMIC_FUNCS;

typedef struct _NAL_ATOMICTESTSET32_FUNC
{
    RETURN UINT32 ReturnValue;
    IN OUT UINT32* Address;
    IN UINT32 Test;
    IN UINT32 Set;
} NAL_ATOMICTESTSET32_FUNC;

typedef struct _NAL_SPINLOCK_FUNCS
{
    NAL_SPIN_LOCK SpinLock;
} NAL_SPINLOCK_FUNCS;

typedef struct _NAL_CHECKSECURITY_FUNC
{
    RETURN NAL_STATUS ReturnValue;
} NAL_CHECKSECURITY_FUNC;

typedef struct _NAL_DEBUGPRINT_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN CHAR Message[NAL_MAX_DEBUG_PRINT_LENGTH];
} NAL_DEBUGPRINT_FUNC;

typedef struct _NAL_READPCIDEVICECOUNT_FUNC
{
    RETURN UINT16 ReturnValue;
} NAL_READPCIDEVICECOUNT_FUNC;

typedef struct _NAL_READPCIDEVICE_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN UINT16 Count;
    OUT NAL_DEVICE_LOCATION PciLocations[1];
} NAL_READPCIDEVICE_FUNC;

typedef struct _NAL_FILLPCICONFIGSPEC_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION PciLocation;
    IN UINT32 DwordCount;
    OUT PCI_DEVICE PciDevice;
} NAL_FILLPCICONFIGSPEC_FUNC;

typedef struct _NAL_OSREADPCICONFIG32_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION PciLocation;
    IN UINT32 DwordNumber;
    OUT UINT32 Value;
} NAL_OSREADPCICONFIG32_FUNC;

typedef struct _NAL_OSWRITEPCICONFIG32_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION PciLocation;
    IN UINT32 DwordNumber;
    IN UINT32 Data;
} NAL_OSWRITEPCICONFIG32_FUNC;

typedef struct _NAL_OSWRITEPCICONFIGVARIABLE_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION PciLocation;
    IN UINT32 DwordNumber;
    IN UINT8 ByteMask;
    IN UINT32 Data;
} NAL_OSWRITEPCICONFIGVARIABLE_FUNC;

typedef struct _NAL_LINUX_OSREADPCIEXBYTE_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION PciLocation;
    IN UINT32 ByteIndex;
    OUT UINT8 Value;
} NAL_LINUX_READPCIEXBYTE_FUNC;

typedef struct _NAL_LINUX_WRITEPCIEXBYTE_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION PciLocation;
    IN UINT32 ByteIndex;
    IN UINT8 Value;
} NAL_LINUX_WRITEPCIEXBYTE_FUNC;

typedef struct _NAL_KMEM_FUNCS
{
    IN KVOID* Source;
    IN KVOID* Destination;
    IN UINTN Size;
} NAL_KMEM_FUNCS;

typedef struct _NAL_KMEMSET_FUNC
{
    IN int Source;
    IN KVOID* Destination;
    IN UINTN Size;
} NAL_KMEMSET_FUNC;

typedef struct _NAL_ENABLEPCIDEVICE_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    IN NAL_DEVICE_LOCATION DeviceLocation;
} NAL_ENABLEPCIDEVICE_FUNC;

typedef struct _NAL_LINUX_RUN_DOMAIN_FUNC
{
    RETURN NAL_STATUS ReturnValue;
    OUT NAL_OS_RUN_DOMAIN RunDomain;
} NAL_LINUX_RUN_DOMAIN_FUNC;

typedef union _NAL_IOCTL_FUNCTION_DATA
{

    NAL_READPORT_FUNCS NalReadPortFuncs;
    NAL_WRITEPORT_FUNCS NalWritePortFuncs;
    NAL_READREGISTER_FUNCS NalReadRegisterFuncs;
    NAL_WRITEREGISTER_FUNCS NalWriteRegisterFuncs;
    NAL_MEMMAP_FUNCS NalMemmapFuncs;
    NAL_TIMESTAMP_FUNCS NalTimestampFuncs;
    NAL_INTERRUPT_FUNCS NalInterruptFuncs;
    NAL_REGISTERTIMERCALLBACK_FUNC NalRegisterTimerCallbackFunc;
    NAL_UNREGISTERTIMERCALLBACK_FUNC NalUnregisterTimerCallbackFunc;
    NAL_GETPHYSICALMEMORYADDRESS_FUNC NalGetPhysicalMemoryAddressFunc;
    NAL_DELAY_FUNCS NalDelayFuncs;
    NAL_ALLOCATEMEMORYNONPAGED_FUNC NalAllocateMemoryNonPagedFunc;
    NAL_FREEMEMORYNONPAGED_FUNC NalFreeMemoryNonPagedFunc;
    NAL_ATOMIC_FUNCS NalAtomicFuncs;
    NAL_ATOMICTESTSET32_FUNC NalAtomicTestSet32Func;
    NAL_SPINLOCK_FUNCS NalSpinlockFuncs;
    NAL_CHECKSECURITY_FUNC NalCheckSecurityFunc;
    NAL_DEBUGPRINT_FUNC NalDebugPrintFunc;
    NAL_KMEM_FUNCS NalKMemFuncs;
    NAL_KMEMSET_FUNC NalKMemsetFunc;
    NAL_ENABLE_DEBUG_PRINT_FUNC NalEnableDebugPrintFunc;

    NAL_READPCIDEVICECOUNT_FUNC NalReadPciDeviceCountFunc;
    NAL_READPCIDEVICE_FUNC NalReadPciDeviceFunc;
    NAL_FILLPCICONFIGSPEC_FUNC NalFillPciConfigSpecFunc;
    NAL_OSREADPCICONFIG32_FUNC NalOsReadPciConfig32Func;
    NAL_OSWRITEPCICONFIG32_FUNC NalOsWritePciConfig32Func;
    NAL_OSWRITEPCICONFIGVARIABLE_FUNC NalOsWritePciConfigVariableFunc;
    NAL_ENABLEPCIDEVICE_FUNC NalEnablePciDeviceFunc;

#if defined(NAL_WINNT_WDM)

    NAL_WIN_GET_PDO_POINTER_FUNC NalWinGetPdoPointerFunc;
    NAL_WIN_GET_SYMBOLIC_NAME_FUNC NalWinGetSymbolicNameFunc;
    NAL_WIN_ALLOC_DEV_CONTEXT_FUNC NalWinAllocDevContextFunc;
    NAL_WIN_FREE_DEV_CONTEXT_FUNC NalWinFreeDevContextFunc;
    NAL_OS_DEVICE_FUNC NalOsDevice;
    NAL_WIN_DRIVER_GET_REF_COUNT_FUNC NalWinDriverGetRefCountFunc;
    NAL_WIN_ADAPTER_IN_USE_FUNC NalWinAdapterInUseFunc;
    NAL_WIN_IS_ADAPTER_IN_USE_FUNC NalWinIsAdapterInUseFunc;
#endif

#if defined(NAL_LINUX)

    NAL_LINUX_ADAPTER_IN_USE_FUNC NalLinuxAdapterInUseFunc;
    NAL_LINUX_IS_ADAPTER_IN_USE_FUNC NalLinuxIsAdapterInUseFunc;
    NAL_LINUX_REFCOUNT_FUNCS NalLinuxReferenceCountFuncs;
    NAL_LINUX_DEVICERESOURCE_FUNC NalLinuxDeviceResourceFunc;
    NAL_LINUX_DRIVER_GET_VERSION_FUNCS NalLinuxDriverGetVersionFuncs;
    NAL_LINUX_ALLOCATEMEMORYNONPAGEDPCI_FUNC NalLinuxAllocateMemoryNonPagedPciFunc;
    NAL_LINUX_FREEMEMORYNONPAGEDPCI_FUNC NalLinuxFreeMemoryNonPagedPciFunc;
    NAL_LINUX_READPCIEXBYTE_FUNC NalLinuxReadPciExByteFunc;
    NAL_LINUX_WRITEPCIEXBYTE_FUNC NalLinuxWritePciExByteFunc;
    NAL_LINUX_RUN_DOMAIN_FUNC NalLinuxGetRunDomainFunc;
#endif

#if defined(NAL_SOLARIS)

    NAL_READREGISTER_FUNCS_Ex NalReadRegisterFuncsEx;
    NAL_WRITEREGISTER_FUNCS_Ex NalWriteRegisterFuncsEx;

    NAL_SOLARIS_ADAPTER_IN_USE_FUNC NalSolarisAdapterInUseFunc;
    NAL_SOLARIS_IS_ADAPTER_IN_USE_FUNC NalSolarisIsAdapterInUseFunc;
    NAL_SOLARIS_REGION_FUNCS NalSolarisRegionFuncs;
    NAL_SOLARIS_REFCOUNT_FUNCS NalSolarisReferenceCountFuncs;
    NAL_SOLARIS_DRIVER_GET_VERSION_FUNCS NalSolarisDriverGetVersionFuncs;
    NAL_SOLARIS_ALLOCATEMEMORYNONPAGEDPCI_FUNC NalSolarisAllocateMemoryNonPagedPciFunc;
    NAL_SOLARIS_FREEMEMORYNONPAGEDPCI_FUNC NalSolarisFreeMemoryNonPagedPciFunc;

#endif
} NAL_IOCTL_FUNCTION_DATA;

typedef struct _NAL_IOCTL
{
    UINT32 IoctlNumber;
    VOID* InputBuffer;
    UINT32 InputBufferSize;
    VOID* OutputBuffer;
    UINT32 OutputBufferSize;
} NAL_IOCTL;

typedef union _NAL_IOCTL_RETURN_DATA
{
    UINT8 Uint8;
    UINT16 Uint16;
    UINT32 Uint32;
    UINT64 Uint64;
    NAL_STATUS NalStatus;
    UINTN VoidPtr;
} NAL_IOCTL_RETURN_DATA;

typedef struct _NAL_IOCTL_INPUT_DATA
{
    UINT64 FunctionId;
    UINT32 Size;
    NAL_IOCTL_FUNCTION_DATA InputBuffer;
} NAL_IOCTL_INPUT_DATA;

#define NAL_IOCTL_INPUTBUFFER_SIZE(IoctlData) (UINT32)((sizeof(UINT64) * 2) + (IoctlData).Size)

NAL_STATUS
NalResolveNdiIoctl(
    IN NAL_IOCTL_INPUT_DATA* NalIoctl
    );

NAL_STATUS
NalResolveOsiIoctl(
    IN NAL_IOCTL_INPUT_DATA* NalIoctl
    );

NAL_STATUS
NalResolveHwBusIoctl(
    IN NAL_IOCTL_INPUT_DATA* NalIoctl
    );

NAL_STATUS
NalResolveOsSpecificIoctl(
    IN NAL_IOCTL_INPUT_DATA* NalIoctl
    );

#endif
