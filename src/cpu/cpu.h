#ifndef CPU_H
#define CPU_H

#include <stdlib.h>
#include <stdio.h>
#include "../stats_values.h"
#include "../opcodes.h"
#include "../types.h"
#include "../control/control.h"
#include "../data_processing/data_processing.h"
#include "../data_storage/data_storage.h"

void run_program(Instruction* program, byte* mem, byte* acc, byte* pc, byte* stat);
void process_instructions(Instruction* program, byte* mem, byte* acc, byte* pc, byte* stat);
void load_program(Instruction* program, char* file_name);

#endif