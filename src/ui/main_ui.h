#ifndef SKYCOIN_UI_H
#define SKYCOIN_UI_H

#include "os.h"
#include "cx.h"
#include "os_io_seproxyhal.h"

#include "../skycoin-api/skycoin_crypto.h"
#include "../ux.h"

#include "../glyphs.h"

extern ux_state_t ux;

extern int current_offset;
extern int direction;

extern const ux_menu_entry_t menu_main[];
extern const ux_menu_entry_t menu_settings[];

#endif
