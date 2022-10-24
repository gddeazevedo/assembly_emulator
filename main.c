#include "src/helpers/helpers.h"


int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Error! Command accepts only one parameter! ./assembly_emulator <bin_file>\n");
        exit(1);
    }

    byte mem[256]; // variables
    Instruction program[256];

    // Registers
    byte pc   = 0; // program counter
    byte acc  = 0; // acumulador
    byte stat = 0; // status


    char* file_name = argv[1];
    FILE* file = fopen(file_name, "rb");

    store_file_in_program(program, file);

    while (program[pc].opcode != HLT) {
        process_instructions(program, mem, &acc, pc);
        pc++;
    }

    fclose(file);

    printf("ACC: %d\n", acc);
    return 0;
}
