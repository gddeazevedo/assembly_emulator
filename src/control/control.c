#include "control.h"

void Jmp(byte* pc, byte label, byte* stat) {
    *pc = label;
}

void Jz(byte* pc, byte label, byte acc, byte* stat) {
    if (acc == 0) {
        *pc = label;
    } else {
        *pc += 1;
    }
}

void Jnz(byte* pc, byte label, byte acc, byte* stat) {
    if (acc != 0) {
        *pc = label;
    } else {
        *pc += 1;
    }
}

void Jg(byte* pc, byte label, byte acc, byte* stat) {
    if (acc > 0) {
        *pc = label;
    } else {
        *pc += 1;
    }
}

void Jl(byte* pc, byte label, byte acc, byte* stat) {
    if (acc < 0) {
        *pc = label;
    } else {
        *pc += 1;
    }
}

void Jge(byte* pc, byte label, byte acc, byte* stat) {
    if (acc >= 0) {
        *pc = label;
    } else {
        *pc += 1;
    }
}

void Jle(byte* pc, byte label, byte acc, byte* stat) {
    if (acc <= 0) {
        *pc = label;
    } else {
        *pc += 1;
    }
}

void Hlt(byte* acc, byte* stat) {
    printf("ACC: %d\n", *acc);
    printf("STAT: %d\n", *stat);
    exit(0);
}
