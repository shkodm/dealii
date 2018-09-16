// ---------------------------------------------------------------------
//
// Copyright (C) 2018 by the deal.II authors
//
// This file is part of the deal.II library.
//
// The deal.II library is free software; you can use it, redistribute
// it, and/or modify it under the terms of the GNU Lesser General
// Public License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
// The full text of the license can be found in the file LICENSE.md at
// the top level directory of deal.II.
//
// ---------------------------------------------------------------------


#include <deal.II/base/utilities.h>

#include <deal.II/matrix_free/mapping_info.templates.h>

#include <iostream>

DEAL_II_NAMESPACE_OPEN

#include "deal.II/base/config.h"

#include "mapping_info.inst"

template struct internal::MatrixFreeFunctions::FPArrayComparator<double>;
template struct internal::MatrixFreeFunctions::FPArrayComparator<float>;

DEAL_II_NAMESPACE_CLOSE
