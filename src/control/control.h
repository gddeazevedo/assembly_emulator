#ifndef CONTROL_H
#define CONTROL_H

#include <stdio.h>
#include <stdlib.h>
#include "../types.h"

void Jmp(byte* pc, byte label, byte* stat); // Jump
void Jz(byte* pc, byte label, byte acc, byte* stat);  // Jump if zero
void Jnz(byte* pc, byte label, byte acc, byte* stat); // Jump if not zero
void Jg(byte* pc, byte label, byte acc, byte* stat);  // Jump if greater
void Jl(byte* pc, byte label, byte acc, byte* stat);  // Jump if less
void Jge(byte* pc, byte label, byte acc, byte* stat); // jump if greater or equal
void Jle(byte* pc, byte label, byte acc, byte* stat); // Jump if less or equal
void Hlt(byte* pc, byte* stat); // end of program

#endif