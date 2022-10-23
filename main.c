#include <stdio.h>
#include <stdlib.h>

#include "src/types.h"
#include "src/control/control.h"
#include "src/data_processing/data_processing.h"
#include "src/data_storage/data_storage.h"

byte mem[256]; // variables
Instruction program[256];


// Registers
byte pc = 0;
byte acc;
byte stat;


int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Error! Command accepts only one parameter! ./assembly_emulator <bin_file>\n");
        return 1;
    }

    printf("SHORT: %ld bytes\n", sizeof(short));
    return 0;
}
