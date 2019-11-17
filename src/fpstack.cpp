#include "fpstack.h"

Fpstack::Fpstack() {
    val = -1;
}

Fpstack::Fpstack(int fp) {
    val = fp;
}

Fpstack::~Fpstack() {
}

// Add in necessary method related to frame pointer stack
