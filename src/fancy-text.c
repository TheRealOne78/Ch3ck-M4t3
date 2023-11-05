/*
 * SPDX-License-Identifier: LGPL-3.0-or-later
 *
 * Copyright (C) 2023 TheRealOne78 <bajcsielias78@gmail.com>
 *
 * This file is part of the Ch3ck-M4t3 project
 *
 * Ch3ck-M4t3 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Ch3ck-M4t3 is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Ch3ck-M4t3. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>

#include "info.h"
#include "fancy-text.h"

void puts_logo(void) {
    printf("\n"
           "\t██▒▒██▒▒██▒▒██▒▒\n"
           "\t▒▒██▒▒██▒▒██▒▒██\n"
           "\t██▒▒██▒▒██▒▒██▒▒\n"
           "\t▒▒██▒▒██▒▒██▒▒██\t Ch3ck-M4t3\n"
           "\t██▒▒██▒▒██▒▒██▒▒\t Version %s\n"
           "\t▒▒██▒▒██▒▒██▒▒██\n"
           "\t██▒▒██▒▒██▒▒██▒▒\n"
           "\t▒▒██▒▒██▒▒██▒▒██\n\n"
    , VERSION);
    fflush(stdout);
}
