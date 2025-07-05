// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include_next <mcuconf.h>

#undef RP_SERIAL_USE_USART1
#define RP_SERIAL_USE_USART1 TRUE
