#ifndef CONTROL_H
#define CONTROL_H

#include "../types.h"

void Jz(byte* pc);  // Jump if zero
void Jnz(byte* pc); // Jump if not zero
void Jg(byte* pc);  // Jump if greater
void Jl(byte* pc);  // Jump if less
void Jge(byte* pc); // jump if greater or equal
void Jle(byte* pc); // Jump if less or equal
void Jmp(byte* pc); // Jump
void Hlt(byte* pc); // end of program

#endif