#include <stdio.h>
#include <stdlib.h>

#include "src/types.h"
// #include "src/control/control.h"
// #include "src/data_processing/data_processing.h"
// #include "src/data_storage/data_storage.h"

byte mem[256]; // variables
Instruction program[256];


// Registers
byte pc = 0;
byte acc;
byte stat;


int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Error! Command accepts only one parameter! ./assembly_emulator <bin_file>\n");
        exit(1);
    }

    char* file_name = argv[1];
    FILE* file = fopen(file_name, "rb");

    if (file == NULL) {
        fprintf(stderr, "Error in opening file!\n");
        exit(1);
    }

    fclose(file);
    
    return 0;
}
