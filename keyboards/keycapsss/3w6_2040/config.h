// Copyright 2022 Conor Burns (@Conor-Burns)
// Copyright 2023 Ben Roe (@keycapsss)
// Copyright 2023 Tom Barnes (@keyboard-magpie)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1
#define SERIAL_USART_PIN_SWAP
#define SERIAL_USART_SPEED 921600
#define USB_VBUS_PIN GP19

#define SPLIT_POINTING_ENABLE

#define MASTER_RIGHT
#define TAPPING_TERM 300  // Die Zeit in Millisekunden, innerhalb derer ein Tap erkannt wird.
#define PERMISSIVE_HOLD  // Aktiviert permissives Halten, damit das Halten von Modifiern zuverlässiger erkannt wird.
#define TAPPING_FORCE_HOLD
#define POINTING_DEVICE_RIGHT

