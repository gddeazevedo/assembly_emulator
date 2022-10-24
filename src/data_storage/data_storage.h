#ifndef DATA_STORAGE_H
#define DATA_STORAGE_H

#include <stdlib.h>
#include "../types.h"
#include "../stats_values.h"

void Load(byte* acc, byte value, byte* stat);
void Store(byte* mem, byte address, byte acc);

#endif