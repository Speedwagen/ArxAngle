/*
 * Copyright 2012-2019 Arx Libertatis Team (see the AUTHORS file)
 *
 * This file is part of Arx Libertatis.
 *
 * Arx Libertatis is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Arx Libertatis is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Arx Libertatis.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ARX_IO_FS_PATHCONSTANTS_H
#define ARX_IO_FS_PATHCONSTANTS_H

// Data directories

namespace fs {

#define ARX_GET_STR(str) (((str)[0] != '\0') ? (str) : NULL)

typedef const char * const str_t;

static str_t data_dir = ARX_GET_STR("");

static str_t user_dir = ARX_GET_STR("Arx Libertatis");

static str_t config_dir = ARX_GET_STR("");

static str_t data_dir_prefixes = ARX_GET_STR("");

static str_t user_dir_prefixes = ARX_GET_STR("");

static str_t config_dir_prefixes = ARX_GET_STR("");

static str_t ignore_exe_dir = ARX_GET_STR("");

static str_t libexec_dir = ARX_GET_STR("C:/Program Files/ArxWindows/libexec");

static str_t relative_data_dir = ARX_GET_STR(".");

#undef ARX_GET_STR

} // namespace fs

#endif // ARX_IO_FS_PATHCONSTANTS_H
