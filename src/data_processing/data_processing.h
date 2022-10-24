#ifndef DATA_PROCESSING_H
#define DATA_PROCESSING_H

#include "../types.h"
#include "../stats_values.h"
#include <stdio.h>

void Add(byte* acc, byte value, byte* stat);
void Sub(byte* acc, byte value, byte* stat);
void Mul(byte* acc, byte value, byte* stat);
void Div(byte* acc, byte value, byte* stat);
void Inc(byte* acc, byte* stat);
void Dec(byte* acc, byte* stat);

void And(byte* acc, byte value, byte* stat);
void Or(byte* acc, byte value, byte* stat);
void Not(byte* acc, byte* stat);

#endif