typedef unsigned char byte;

typedef struct {
    byte opcode;
    byte operand;
} Instruction;

enum Instructions {
    LOADm = 0,
    LOADv = 1,
    STORE = 2,
    ADD   = 3,
    SUB   = 4,
    MUL   = 5,
    DIV   = 6,
    INC   = 7,
    DEC   = 8,
    AND   = 9,
    OR    = 10,
    NOT   = 11,
    JMP   = 12,
    JZ    = 13,
    JNZ   = 14,
    JG    = 15,
    JL    = 16,
    JGE   = 17,
    JLE   = 18,
    HLT   = 19
};
