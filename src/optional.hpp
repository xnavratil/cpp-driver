/*
 * Copyright (C) 2020 ScyllaDB 
 *
 * This file is part of Scylla.
 *
 * Scylla is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Scylla is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Scylla.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DATASTAX_INTERNAL_OPTIONAL_HPP
#define DATASTAX_INTERNAL_OPTIONAL_HPP

#include "driver_config.hpp"

#if CASS_CPP_STANDARD >= 17
  #include "optional/optional_std.hpp"
#else
  #include "optional/optional_akrzemi.hpp"
#endif

#endif /* DATASTAX_INTERNAL_OPTIONAL_HPP */
