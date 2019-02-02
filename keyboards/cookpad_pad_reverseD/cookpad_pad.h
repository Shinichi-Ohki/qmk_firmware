#ifndef COOKPAD_PAD_H
#define COOKPAD_PAD_H

#include "quantum.h"

#define LAYOUT( \
    K01, K02, \
    K11, K12, \
    K21, K22  \
) \
{ \
    { K01, K02 }, \
    { K11, K12 }, \
    { K21, K22 }, \
}


#define LAYOUT_kc( \
    A1, A2, \
    B1, B2, \
    C1, C2 \
  ) \
  LAYOUT( \
    KC_##A1, KC_##A2, \
    KC_##B1, KC_##B2,  \
    KC_##C1, KC_##C2  \
  )

#endif
