/* Copyright (c) 2015, Linaro Limited
 * All rights reserved.
 * Copyright 2017 NXP
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */


/**
 * @file
 *
 * ODP shared memory
 */

#ifndef ODP_SHARED_MEMORY_TYPES_H_
#define ODP_SHARED_MEMORY_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <odp/api/std_types.h>
#include <odp/api/plat/sdk/rts/dpaa2_memzone.h>
#include <odp/api/plat/strong_types.h>

#define MAP_HUGETLB	0x40000		/* create a huge page mapping */

/** @addtogroup odp_shared_memory ODP SHARED MEMORY
 *  Operations on shared memory.
 *  @{
 */

typedef struct dpaa2_memzone *odp_shm_t;

#define ODP_SHM_INVALID _odp_cast_scalar(odp_shm_t, 0)
#define ODP_SHM_NULL ODP_SHM_INVALID

/** Get printable format of odp_shm_t */
static inline uint64_t odp_shm_to_u64(odp_shm_t hdl)
{
	return _odp_pri(hdl);
}

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
