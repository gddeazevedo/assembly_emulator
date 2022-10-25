#include "src/cpu/cpu.h"


int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Error! Command accepts only one parameter! ./assembly_emulator <bin_file>\n");
        exit(1);
    }

    byte mem[256]; // variables
    Instruction program[256];

    // Registers
    byte acc  = 0; // acumulador
    byte pc   = 0; // program counter
    byte stat = 0; // status

    load_program(program, argv[1]);
    run_program(program, mem, &acc, &pc, &stat);

    return 0;
}
