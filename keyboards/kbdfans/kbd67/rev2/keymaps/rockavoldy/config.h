/* Copyright 2020 Rockavoldy
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

#pragma once

#include "config_common.h"

#undef VENDOR_ID
#undef PRODUCT_ID
#undef MANUFACTURER
#undef PRODUCT
#undef DESCRIPTION

#define VENDOR_ID 0x4B42
#define PRODUCT_ID 0x6067
#define DEVICE_VER 0x0002
#define MANUFACTURER Potato Inc.
#define PRODUCT Rusty KB
#define DESCRIPTION Look, a Keyboard !

#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61

#undef BACKLIGHT_PIN
#undef RGB_DI_PIN
