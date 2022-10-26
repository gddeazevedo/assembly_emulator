#include "data_processing.h"

void Add(byte* acc, byte value, byte* stat) {
    if ((int) (*acc + value) > 255) {
        *stat |= CARRY;
    }

    *acc += value;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void Sub(byte* acc, byte value, byte* stat) {
    if ((int)(*acc - value) < 0) {
        *stat |= CARRY;
    }

    *acc -= value;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void Mul(byte* acc, byte value, byte* stat) {
    if ((int)(*acc * value) > 255) {
        *stat |= OVERFLOW;
    }

    *acc *= value;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void Div(byte* acc, byte value, byte* stat) {
    *acc /= value;

    if (*acc == 0) {
        *stat = ZERO_ACC;
    }
}

void Inc(byte* acc, byte* stat) {
    if ((int)(*acc + 1) > 255) {
        *stat |= CARRY;
    }

    *acc += 1;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void Dec(byte* acc, byte* stat) {
    if ((int)(*acc - 1) < 0) {
        *stat |= CARRY;
    }

    *acc -= 1;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void And(byte* acc, byte value, byte* stat) {
    *acc &= value;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void Or(byte* acc, byte value, byte* stat) {
    *acc |= value;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}

void Not(byte* acc, byte* stat) {
    *acc = ~*acc;

    if (*acc == 0) {
        *stat |= ZERO_ACC;
    }
}
