/**************************************************************************/
/*                                                                        */
/*       Copyright (c) Microsoft Corporation. All rights reserved.        */
/*                                                                        */
/*       This software is licensed under the Microsoft Software License   */
/*       Terms for Microsoft Azure RTOS. Full text of the license can be  */
/*       found in the LICENSE file at https://aka.ms/AzureRTOS_EULA       */
/*       and in the root directory of this software.                      */
/*                                                                        */
/**************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */
/** FileX Component                                                       */
/**                                                                       */
/**   Directory                                                           */
/**                                                                       */
/**************************************************************************/
/**************************************************************************/

#define FX_SOURCE_CODE


/* Include necessary system files.  */

#include "fx_api.h"
#include "fx_directory.h"

FX_CALLER_CHECKING_EXTERNS


/**************************************************************************/
/*                                                                        */
/*  FUNCTION                                               RELEASE        */
/*                                                                        */
/*    _fxe_directory_first_full_entry_find                PORTABLE C      */
/*                                                           6.0          */
/*  AUTHOR                                                                */
/*                                                                        */
/*    William E. Lamie, Microsoft Corporation                             */
/*                                                                        */
/*  DESCRIPTION                                                           */
/*                                                                        */
/*    This function checks for errors in the directory find first full    */
/*    entry call.                                                         */
/*                                                                        */
/*  INPUT                                                                 */
/*                                                                        */
/*    media_ptr                             Media control block pointer   */
/*    directory_name                        Destination for directory     */
/*                                            name                        */
/*    attributes                            Destination for attributes    */
/*    size                                  Destination for size          */
/*    year                                  Destination for year          */
/*    month                                 Destination for month         */
/*    day                                   Destination for day           */
/*    hour                                  Destination for hour          */
/*    minute                                Destination for minute        */
/*    second                                Destination for second        */
/*                                                                        */
/*  OUTPUT                                                                */
/*                                                                        */
/*    return status                                                       */
/*                                                                        */
/*  CALLS                                                                 */
/*                                                                        */
/*    _fx_directory_first_full_entry_find   Actual first find service     */
/*                                                                        */
/*  CALLED BY                                                             */
/*                                                                        */
/*    Application Code                                                    */
/*                                                                        */
/*  RELEASE HISTORY                                                       */
/*                                                                        */
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  05-19-2020     William E. Lamie         Initial Version 6.0           */
/*                                                                        */
/**************************************************************************/
UINT  _fxe_directory_first_full_entry_find(FX_MEDIA *media_ptr,
                                           CHAR *directory_name, UINT *attributes, ULONG *size,
                                           UINT *year, UINT *month, UINT *day, UINT *hour, UINT *minute, UINT *second)
{

UINT status;


    /* Check for a null media pointer.  */
    if (media_ptr == FX_NULL)
    {
        return(FX_PTR_ERROR);
    }

    /* Check for a valid caller.  */
    FX_CALLER_CHECKING_CODE

    /* Call actual directory find first full entry service.  */
    status =  _fx_directory_first_full_entry_find(media_ptr, directory_name,
                                                  attributes, size, year, month, day, hour, minute, second);

    /* Return status to the caller.  */
    return(status);
}

