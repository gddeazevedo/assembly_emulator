#include "data_storage.h"


void Load(byte* acc, byte value) {
    *acc = value;
}

void Store(byte* mem, byte address, byte acc) {
    mem[address] = acc;
}