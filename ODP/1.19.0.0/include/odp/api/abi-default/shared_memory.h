/* Copyright (c) 2017-2018, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#ifndef ODP_ABI_SHM_H_
#define ODP_ABI_SHM_H_

#ifdef __cplusplus
extern "C" {
#endif

/** @internal Dummy type for strong typing */
typedef struct { char dummy; /**< @internal Dummy */ } _odp_abi_shm_t;

/** @ingroup odp_shared_memory
 *  @{
 */

typedef _odp_abi_shm_t *odp_shm_t;

#define ODP_SHM_INVALID   ((odp_shm_t)0)
#define ODP_SHM_NULL      ODP_SHM_INVALID
#define ODP_SHM_NAME_LEN  32

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
