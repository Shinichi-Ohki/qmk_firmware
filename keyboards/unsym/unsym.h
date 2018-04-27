/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef UNSYM_H
#define UNSYM_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
    L00, L01, L02, L03, L04, L05, L06, L07, R00, R01, R02, R03, R04, R05, R06, R07, \
    L10, L11, L12, L13, L14, L15, L16, L17, R10, R11, R12, R13, R14, R15, R16, R17, \
    L20, L21, L22, L23, L24, L25, L26,      R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35, L36, L37, R30, R31, R32, R33, R34, R35, R36, R37, \
    L40, L41, L42, L43, L44, L45, L46,      R40, R41, R42, R43, R44, R45, R46 \
) \
{ \
    { L00, L10, L20, L30, L40}, \
    { L01, L11, L21, L31, L41}, \
    { L02, L12, L22, L32, L42}, \
    { L03, L13, L23, L33, L43}, \
    { L04, L14, L24, L34, L44}, \
    { L05, L15, L25, L35, L45}, \
    { L06, L16, L26, L36, L46}, \
    { L07, L17,      L37     }, \
    { R00, R10, R20, R30, R40 }, \
    { R01, R11, R21, R31, R41 }, \
    { R02, R12, R22, R32, R42 }, \
    { R03, R13, R23, R33, R43 }, \
    { R04, R14, R24, R34, R44 }, \
    { R05, R15, R25, R35, R45 }, \
    { R06, R16, R26, R36, R46 }, \
    { R07, R17,      R37      } \
}

#endif
