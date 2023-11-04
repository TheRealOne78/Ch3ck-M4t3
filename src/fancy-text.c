/*
 * copyright (c) 2023 therealone78 <bajcsielias78@gmail.com>
 *
 * this file is part of the ch3ck-m4t3 project
 *
 * ch3ck-m4t3 is free software: you can redistribute it and/or modify
 * it under the terms of the gnu lesser general public license as published by
 * the free software foundation, either version 3 of the license, or
 * (at your option) any later version.
 *
 * ch3ck-m4t3 is distributed in the hope that it will be useful,
 * but without any warranty; without even the implied warranty of
 * merchantability or fitness for a particular purpose.  see the
 * gnu general public license for more details.
 *
 * you should have received a copy of the gnu lesser general public license
 * along with ch3ck-m4t3. if not, see <http://www.gnu.org/licenses/>.
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
