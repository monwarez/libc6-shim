#include <assert.h>
#include <stdio.h>
#include <ctype.h>
#include "../shim.h"

const unsigned short* shim___ctype_b = (void*)0x4242; // ?

size_t shim___ctype_get_mb_cur_max_impl() {
  UNIMPLEMENTED();
}
