// Copyright (c) 2015-2018, Satoshi Tanda. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

/// @file
/// Declares interfaces to FU functions.

#ifndef FU_HYPERVISOR_FU_HYPERVISOR_H_
#define FU_HYPERVISOR_FU_HYPERVISOR_H_

#include <fltKernel.h>

extern "C" {
////////////////////////////////////////////////////////////////////////////////
//
// macro utilities
//

////////////////////////////////////////////////////////////////////////////////
//
// constants and macros
//

////////////////////////////////////////////////////////////////////////////////
//
// types
//

struct EptData;
struct ProcessorFakePageData;
struct SharedFakePageData;

////////////////////////////////////////////////////////////////////////////////
//
// prototypes
//

_IRQL_requires_max_(PASSIVE_LEVEL) EXTERN_C NTSTATUS FuInitialization();

_IRQL_requires_max_(PASSIVE_LEVEL) EXTERN_C void FuTermination();

////////////////////////////////////////////////////////////////////////////////
//
// variables
//

////////////////////////////////////////////////////////////////////////////////
//
// implementations
//

}  // extern "C"

#endif  // FU_HYPERVISOR_FU_HYPERVISOR_H_
