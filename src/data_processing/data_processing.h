#ifndef DATA_PROCESSING_H
#define DATA_PROCESSING_H

#include "../types.h"
#include <stdio.h>

void Add(byte* acc, byte value);
void Sub(byte* acc, byte value);
void Mul(byte* acc, byte value);
void Div(byte* acc, byte value);
void Inc(byte* acc);
void Dec(byte* acc);

void And(byte* acc, byte value);
void Or(byte* acc, byte value);
void Not(byte* acc);

#endif