/**********************************************************************
   Copyright [2014] [Cisco Systems, Inc.]
 
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
 
       http://www.apache.org/licenses/LICENSE-2.0
 
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
**********************************************************************/


/**********************************************************************

    module:	bbhm_download_global.h

        For Broadband Home Manager Model Implementation (BBHM),
        BroadWay Service Delivery System

    ---------------------------------------------------------------

    copyright:

        Cisco Systems, Inc.
        All Rights Reserved.

    ---------------------------------------------------------------

    description:

        This header file includes all the header files required by
        the Bbhm Download Diagnostics object implementation.

        Bbhm Diagnostics are defined in TR143

    ---------------------------------------------------------------

    environment:

        platform independent

    ---------------------------------------------------------------

    author:

       Jinghua Xu

    ---------------------------------------------------------------

    revision:

        06/01/2011    initial revision.

**********************************************************************/


#ifndef  _BBHM_DOWNLOAD_GLOBAL_
#define  _BBHM_DOWNLOAD_GLOBAL_


#include "ansc_platform.h"
#include "ansc_crypto_interface.h"
#include "ansc_crypto_external_api.h"
#include "ansc_tso_interface.h"
#include "ansc_tso_external_api.h"
#include "ansc_ssto_interface.h"
#include "ansc_ssto_external_api.h"

#include "bbhm_co_oid.h"
#include "bbhm_co_name.h"
#include "bbhm_co_type.h"
/*#include "bbhm_properties.h"*/

#include "bbhm_diageo_interface.h"
#include "bbhm_diageo_exported_api.h"

#include "bbhm_download_interface.h"
#include "bbhm_download_exported_api.h"
#include "bbhm_download_internal_api.h"

/*
#include "bbhm_srvco_interface.h"
#include "bbhm_srvco_exported_api.h"
#include "bbhm_sysco_interface.h"
#include "bbhm_sysco_exported_api.h"
*/

#include "dslh_co_oid.h"
#include "dslh_co_name.h"
#include "dslh_co_type.h"
#include "dslh_properties.h"

#include "dslh_cpeco_interface.h"
#include "dslh_cpeco_exported_api.h"

#include "dslh_ifo_mpr.h"
/*#include "dslh_ifo_mso.h"*/

#include "slap_definitions.h"
#include "sys_definitions.h"

#include "http_properties.h"

#include "http_ifo_bsp.h"
#include "http_ifo_hfp.h"

#include "ansc_string_util.h"

#endif
