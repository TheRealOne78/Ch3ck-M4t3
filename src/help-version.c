/*
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
#include "help-version.h"
#include "fancy-text.h"

void help(void) {
    printf("\n"
           "Ch3ck-M4t3 - A free chess daemon"                                               "\n"
           "\n"
           "Usage: Ch3ck-M4t3 [options]"                                                    "\n"
           "\n"
           "Options:"                                                                       "\n"
           "-h, --help\t\t\t"              "Output this help list and exit"                 "\n"
           "-v, --version\t\t\t"           "Output version information and license and exit""\n"
           //"-D, --debug\t\t\t"             "Output the debug log"                           "\n"
    );
    fflush(stdout);
}

void version(void) {
    puts_logo();
    printf(                                                                                 "\n"
           "Copyright (C) 2023 TheRealOne78"                                                "\n"
           "License LGPLv3+: GNU LGPL version 3 or later <https://gnu.org/licenses/gpl.html>.\n"
           "This is free software: you are free to change and redistribute it."             "\n"
           "There is NO WARRANTY, to the extent permitted by law."                          "\n"
           "\n"
    );
    fflush(stdout);
}
