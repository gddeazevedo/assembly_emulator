#include "helpers.h"


void load_program(Instruction* program, char* file_name) {
    FILE* file = fopen(file_name, "rb");

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

    fclose(file);
}

void run_program(Instruction* program, byte* mem, byte* acc, byte* pc, byte* stat) {
    while (1) {
        process_instructions(program, mem, acc, pc, stat);
    }
}

void process_instructions(Instruction* program, byte* mem, byte* acc, byte* pc, byte* stat) {
    Instruction instruction = program[*pc];
    process_control_instructions(instruction, mem, acc, pc, stat);
    process_data_processing_instructions(instruction, mem, acc, pc, stat);
    process_data_storage_instructions(instruction, mem, acc, pc, stat);
}

void process_control_instructions(Instruction instruction, byte* mem, byte* acc, byte* pc, byte* stat) {
    switch (instruction.opcode) {
        case JMP:
            Jmp(pc, instruction.operand, stat);
            break;
        case JZ:
            Jz(pc, instruction.operand, *acc, stat);
            break;
        case JNZ:
            Jnz(pc, instruction.operand, *acc, stat);
            break;
        case JG:
            Jg(pc, instruction.operand, *acc,  stat);
            break;
        case JL:
            Jl(pc, instruction.operand, *acc, stat);
            break;
        case JGE: 
            Jge(pc, instruction.operand, *acc, stat);
            break;
        case JLE:
            Jle(pc, instruction.operand, *acc, stat);
            break;
        case HLT:
            Hlt(acc, stat);
            break;
        default:
            break;
    }
}

void process_data_processing_instructions(Instruction instruction, byte* mem, byte* acc, byte* pc, byte* stat) {
    switch (instruction.opcode) {
        case ADD:
            Add(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case SUB:
            Sub(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case MUL:
            Mul(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case DIV:
            Div(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case INC:
            Inc(acc, stat);
            *pc += 1;
            break;
        case DEC:
            Dec(acc, stat);
            *pc += 1;
            break;
        case AND:
            And(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case OR:
            Or(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case NOT:
            Not(acc, stat);
            *pc += 1;
            break;
        default:
            break;
    }
}

void process_data_storage_instructions(Instruction instruction, byte* mem, byte* acc, byte* pc, byte* stat) {
    switch (instruction.opcode) {
        case LOADm:
            Load(acc, mem[instruction.operand], stat);
            *pc += 1;
            break;
        case LOADv:
            Load(acc, instruction.operand, stat);
            *pc += 1;
            break;
        case STORE:
            Store(mem, instruction.operand, *acc);
            *pc += 1;
            break;
        default:
            break;
    }
}
