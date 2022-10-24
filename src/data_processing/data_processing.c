#include "data_processing.h"

void Add(byte* acc, byte value) {
    *acc += value;
}

void Sub(byte* acc, byte value) {
    *acc -= value;
}

void Mul(byte* acc, byte value) {
    *acc *= value;
}

void Div(byte* acc, byte value) {
    *acc /= value;
}

void Inc(byte* acc) {
    *acc += 1;
}

void Dec(byte* acc) {
    *acc -= 1;
}

void And(byte* acc, byte value) {
    *acc &= value;
}

void Or(byte* acc, byte value) {
    *acc |= value;
}

void Not(byte* acc) {
    *acc = ~*acc;
}
