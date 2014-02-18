/*
    This file is part of VK/KittenDB-Engine.

    VK/KittenDB-Engine is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    VK/KittenDB-Engine is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with VK/KittenDB-Engine.  If not, see <http://www.gnu.org/licenses/>.

    This program is released under the GPL with the additional exemption 
    that compiling, linking, and/or using OpenSSL is allowed.
    You are free to remove this exemption from derived works.

    Copyright 2011-2013 Vkontakte Ltd
              2011-2013 Vitaliy Valtman
*/

#ifndef __VKEXT_ICONV_H__
#define __VKEXT_ICONV_H__

extern int utf8_to_win_convert_0x400 [256];
extern int utf8_to_win_convert_0x2000 [256];
extern int utf8_to_win_convert_0xff00 [256];
extern int utf8_to_win_convert_0x2100 [256];
extern int utf8_to_win_convert_0x000 [256];
extern int win_to_utf8_convert[256];


#endif