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
#include <stdlib.h>

#include "term-handler.h"
#include "fancy-text.h"

void term_handler(int signum) {

  /* When receiving a SIGTERM or SIGINT, this function will exit gracefully
   * with an informative quit message to the user. */

  fprintf(stdout, "\n"INFO_TEXT_PUTS"Quiting...\n");
  fflush(stdout);

  exit(EXIT_SUCCESS);
}
