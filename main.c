#include <stdio.h>
#include <stdlib.h>





int main(int argc, char** argv) {
    if (argc != 2) {
        fprintf(stderr, "Error! Command accepts only one parameter! ./assembly_emulator <bin_file>\n");
        return 1;
    }

    printf("%s\n", argv[1]);
    unsigned int acc = 0;
    printf("INT: %d bytes\n", sizeof(int));
    printf("CHAR: %d bytes\n", sizeof(char));
    printf("SHORT: %d bytes\n", sizeof(short));

    return 0;
}
