/* Copyright (c) 2015-2018, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

/**
 * @file
 *
 * ODP alignments
 */

#ifndef ODP_ABI_ALIGN_H_
#define ODP_ABI_ALIGN_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <odp/api/abi/cpu.h>

/** @ingroup odp_compiler_optim
 *  @{
 */

#ifdef __GNUC__

#define ODP_ALIGNED(x) __attribute__((__aligned__(x)))

#define ODP_PACKED __attribute__((__packed__))

#define ODP_OFFSETOF(type, member) __builtin_offsetof(type, member)

#define ODP_FIELD_SIZEOF(type, member) sizeof(((type *)0)->member)

#else
#error Non-gcc compatible compiler
#endif

/* ODP_CACHE_LINE_SIZE is defined in odp/api/abi/cpu.h */

#define ODP_PAGE_SIZE       4096

#define ODP_ALIGNED_CACHE   ODP_ALIGNED(ODP_CACHE_LINE_SIZE)

#define ODP_ALIGNED_PAGE    ODP_ALIGNED(ODP_PAGE_SIZE)

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
