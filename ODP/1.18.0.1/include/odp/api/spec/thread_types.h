/* Copyright (c) 2018-2018, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

/**
 * @file
 *
 * ODP thread API types
 */

#ifndef ODP_API_SPEC_THREAD_TYPES_H_
#define ODP_API_SPEC_THREAD_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

/** @ingroup odp_thread ODP THREAD
 *  @{
 */

/**
 * Thread type
 */
typedef enum odp_thread_type_e {
	/**
	 * Worker thread
	 *
	 * Worker threads do most part of ODP application packet processing.
	 * These threads provide high packet and data rates, with low and
	 * predictable latency. Typically, worker threads are pinned to isolated
	 * CPUs and packets are processed in a run-to-completion loop with very
	 * low interference from the operating system.
	 */
	ODP_THREAD_WORKER = 0,

	/**
	 * Control thread
	 *
	 * Control threads do not participate the main packet flow through the
	 * system, but e.g. control or monitor the worker threads, or handle
	 * exceptions. These threads may perform general purpose processing,
	 * use system calls, share the CPU with other threads and be interrupt
	 * driven.
	 */
	ODP_THREAD_CONTROL
} odp_thread_type_t;

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
