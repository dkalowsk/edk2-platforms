/** @file
  This file contains a structure definition for the ACPI 1.0 High Precision Event Timer
  Description Table (HPET).  The contents of this file should only be modified
  for bug fixes, no porting is required.

Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
This program and the accompanying materials are licensed and made available under
the terms and conditions of the BSD License that accompanies this distribution.
The full text of the license may be found at
http://opensource.org/licenses/bsd-license.php.

THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

//
// Statements that include other files
//

#include "Hpet.h"

//
// High Precision Event Timer Table
// Please modify all values in Hpet.h only.
//

EFI_ACPI_HIGH_PRECISION_EVENT_TIMER_TABLE_HEADER Hpet = {
  {
    EFI_ACPI_3_0_HIGH_PRECISION_EVENT_TIMER_TABLE_SIGNATURE,
    sizeof (EFI_ACPI_HIGH_PRECISION_EVENT_TIMER_TABLE_HEADER),
    EFI_ACPI_HIGH_PRECISION_EVENT_TIMER_TABLE_REVISION,

    //
    // Checksum will be updated at runtime
    //
    0x00,

    //
    // It is expected that these values will be updated at runtime
    //
    { ' ', ' ', ' ', ' ', ' ', ' ' },

    0,
    EFI_ACPI_OEM_HPET_REVISION,
    0,
    0
  },

  EFI_ACPI_EVENT_TIMER_BLOCK_ID,
  {
    EFI_ACPI_EVENT_TIMER_BLOCK_ADDRESS_SPACE_ID,
    EFI_ACPI_EVENT_TIMER_BLOCK_BIT_WIDTH,
    EFI_ACPI_EVENT_TIMER_BLOCK_BIT_OFFSET,
    EFI_ACPI_EVENT_TIMER_ACCESS_SIZE,
    EFI_ACPI_EVENT_TIMER_BLOCK_ADDRESS
  },
  EFI_ACPI_HPET_NUMBER,
  EFI_ACPI_MIN_CLOCK_TICK,
  EFI_ACPI_HPET_ATTRIBUTES
};