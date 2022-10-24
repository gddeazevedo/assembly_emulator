#include "helpers.h"


void process_instructions(Instruction* program, byte* mem, byte* acc, byte pc) {
    Instruction instruction = program[pc];

    switch (instruction.opcode) {
        case LOADm: Load(acc, mem[instruction.operand]); break;
        case LOADv: Load(acc, instruction.operand); break;
        case STORE: Store(mem, instruction.operand, *acc); break;
        case ADD: Add(acc, mem[instruction.operand]); break;
        case SUB: Sub(acc, mem[instruction.operand]); break;
        case MUL: Mul(acc, mem[instruction.operand]); break;
        case DIV: Div(acc, mem[instruction.operand]); break;
        case INC: Inc(acc); break;
        case DEC: Dec(acc); break;
        case AND: And(acc, mem[instruction.operand]); break;
        case OR: Or(acc, mem[instruction.operand]); break;
        case NOT: Not(acc); break;
        case JMP: break;
        case JZ: break;
        case JNZ: break;
        case JG: break;
        case JL: break;
        case JGE: break;
        case JLE: break;
        case HLT: break;
        default: break;
    }
}


void store_file_in_program(Instruction* program, FILE* file) {
    if (file == NULL) {
        fprintf(stderr, "Error in opening file!\n");
        exit(1);
    }

    byte buffer[2];
    int index = 0;

    while (!feof(file)) {
        fread(buffer, sizeof(byte), 2, file);
        program[index].opcode = buffer[0];
        program[index].operand = buffer[1];
        index++;
    }
}