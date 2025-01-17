/*
 * Copyright(c) 2021 Intel Corporation.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef BF_PORT_IF_H_INCLUDED
#define BF_PORT_IF_H_INCLUDED

/* Allow the use in C++ code.  */
#ifdef __cplusplus
extern "C" {
#endif

#include <bf_types/bf_types.h>

#include "port_mgr/dpdk/bf_dpdk_port_if.h"

/**
 * @file bf_port_if.h
 * \brief Details Port-level APIs.
 *
 */

/** \brief   Enumeration of supported port direction configuration modes.
 */
typedef enum {
  BF_PORT_DIR_DUPLEX = 0,
  BF_PORT_DIR_TX_ONLY,
  BF_PORT_DIR_RX_ONLY,
  BF_PORT_DIR_MAX
} bf_port_dir_e;

/**
 * Port Info Structure
 */
typedef struct port_info_t {
  bf_dev_port_t dev_port;               /*!< Port ID */
  port_attributes_t port_attrib;        /*!< Port Attributes */
} port_info_t;

bf_status_t bf_port_mgr_init(void);

#ifdef __cplusplus
}
#endif /* C++ */

#endif  // BF_PORT_IF_H_INCLUDED
