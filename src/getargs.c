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

#include <stdlib.h>
#include <getopt.h>

#include "getargs.h"
#include "help-version.h"

int getargs(int argc, char *argv[]) {
  static struct option long_options [] = {
    { "help"                , no_argument      , NULL , 'h' },
    { "version"             , no_argument      , NULL , 'v' },
    //{ "debug"               , no_argument      , NULL , 'D' },
    { NULL                  , 0                , NULL , 0   }
  };
  /* And check for arguments */
  while(1) {
    int c = getopt_long(argc, argv, "ht:vDf:d:c:S:", long_options, NULL);
    /* Detect the end of the options. */
    if (c == -1)
      break;

    switch(c) {
      /* help */
      case 'h':
        help();
        exit(0);
        break;

      /* version */
      case 'v':
        version();
        exit(0);
        break;

      /* debug */
      //case 'D':
      //  if(!_DEBUG)
      //    _DEBUG = true;
      //  if(_DEBUG)
      //    fprintf(stdout, DEBUG_TEXT_PUTS": Enabled debug\n");
      //  break;

      case '?':
        /* No need to print and error message because
           getopt_long did that already. */
        exit(EXIT_FAILURE);
        break;

      default:
        abort();
    }
  }

  return 0;
}
