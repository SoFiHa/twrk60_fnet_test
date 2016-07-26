/**************************************************************************
*
* Copyright 2016 by Andrey Butok. FNET Community.
*
***************************************************************************
*
*  Licensed under the Apache License, Version 2.0 (the "License"); you may
*  not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*  http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
*  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
**********************************************************************/
/*!
*
* @file fapp_autoip.h
*
* @author Andrey Butok
*
* @brief FNET Application Demo (Auto-IP).
*
***************************************************************************/


/************************************************************************
*     Private Definitions.
*************************************************************************/
#ifndef _FAPP_AUTOIP_H_

#define _FAPP_AUTOIP_H_

#if FAPP_CFG_AUTOIP_CMD && FNET_CFG_AUTOIP && FNET_CFG_IP4

#if defined(__cplusplus)
extern "C" {
#endif

void fapp_autoip_cmd( fnet_shell_desc_t desc, fnet_index_t argc, fnet_char_t **argv );
void fapp_autoip_info(fnet_shell_desc_t desc);
void fapp_autoip_release(void);

#if defined(__cplusplus)
}
#endif

#endif /* FAPP_CFG_AUTOIP_CMD && FNET_CFG_AUTOIP && FNET_CFG_IP4 */

#endif /* _FAPP_AUTOIP_H_ */
