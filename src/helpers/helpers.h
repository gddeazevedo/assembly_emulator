#ifndef HELPERS_H
#define HELPERS_H

#include <stdlib.h>
#include <stdio.h>
#include "../opcodes.h"
#include "../types.h"
#include "../control/control.h"
#include "../data_processing/data_processing.h"
#include "../data_storage/data_storage.h"

void process_instructions(Instruction* program, byte* mem, byte* acc, byte pc);
void load_program(Instruction* program, char* file_name);

#endif