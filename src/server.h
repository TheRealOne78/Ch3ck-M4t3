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

#ifndef __SERVER_H__
#define __SERVER_H__

#include <stdint.h>

enum row : int8_t {
    _1 = 0,
    _2 = 1,
    _3 = 2,
    _4 = 3,
    _5 = 4,
    _6 = 5,
    _7 = 6,
    _8 = 7
};

enum column : int8_t {
    _A = 0,
    _B = 1,
    _C = 2,
    _D = 3,
    _E = 4,
    _F = 5,
    _G = 6,
    _H = 7
};

enum piece : int8_t {
    _Empty  = 0,
    _Pawn   = 1,
    _Knight = 2,
    _Bishop = 3,
    _Rook   = 4,
    _Queen  = 5,
    _King   = 6
};

typedef struct Chess {

    /*
     * A typical chess board is made out of 64 squares, with 8 rows by 8
     * columns:
     *
     *   A B C D  E F G H
     * 1 ██▒▒██▒▒██▒▒██▒▒ 1
     * 2 ▒▒██▒▒██▒▒██▒▒██ 2
     * 3 ██▒▒██▒▒██▒▒██▒▒ 3
     * 4 ▒▒██▒▒██▒▒██▒▒██ 4
     * 5 ██▒▒██▒▒██▒▒██▒▒ 5
     * 6 ▒▒██▒▒██▒▒██▒▒██ 6
     * 7 ██▒▒██▒▒██▒▒██▒▒ 7
     * 8 ▒▒██▒▒██▒▒██▒▒██ 8
     *   A B C D  E F G H
     *
     * In real life, rows are represented by numbers from 0 to 7 (0 - 7) and
     * colums are rows by characters from 'A' to 'H' ('A' - 'H'). However since
     * it's way easier to refference arrays with numbers rather than characters,
     * each having it's own numerical ID, from 0 to 7:
     * +----------------------------------+
     * | A = 0    B = 1    C = 2    D = 3 |
     * | E = 4    F = 5    G = 6    H = 7 |
     * +----------------------------------+
     * You can also use the `row' and `column' enums defined in this header file.
     *
     * The colums are the represented by first dimension array and the rows are
     * represented by the second dimension array (I.E.: Position `D5' is
     * `board[3][4]' (remember that arrays start from zero)).
     *
     * Each position has a value representing it's chess piece:
     * +--------------------+------------+
     * | Empty  = 0 / NULL  | Pawn   = 1 |
     * | Knight = 2         | Bishop = 3 |
     * | Rook   = 4         | Queen  = 5 |
     * | King   = 6         |            |
     * +--------------------+------------+
     * You can also use the `piece' enums defined in this header file.
     *
     * To differentiate the white pieces from black pieces, all white pieces are
     * positive while black pieces are negative (I.E.: White King is represented
     * with `7' and Black King with `-7').
     */

    int8_t board[8][8];

    /*
     * The `checkpos' variable is used to tell when a player is in a check move
     * and the position of the King.
     *
     * If there isn't any check move, checkpos[0] will have the value 0.
     *
     * Else, the first dimension array must have the column position of the King
     * and the second dimension array must have the row position of the King
     * (I.E.: If King is at `C6', then checkpos[0] = (+/-)2 and checkpos[1] =
     * (+/-)6).
     * NOTE that checkpos[] values must be incremented by one when using it for
     * saving King's position, since 0 is already occupied and 0 can't be
     * negative.
     *
     * To tell the color of the King in the check move, the first dimension
     * array will have a positive value for the White King and a negative value
     * for the Black King (I.E. If the Black King is at position `F2', then
     * checkpos[0] = -5 and checkpos[1] = -2).
     *
     * If the King is in a Checkmate position, checkpos[1] must be a negative
     * value of the row position of the Checkmated King.
     *
     * In case of a draw state (only the King pieces are left on the board),
     * checkpos[0] will have a value of 127.
     *
     * In case of reaching the time limit, checkpos[0] will have a value of
     * -128.
     */
    int8_t checkpos[2];

} chess;

#endif // __SERVER_H__
