# Simple Processor 1 Emulator

## Authors: Gabriel Dias e Nícolas Henriques

> Simple processor 1 emulator emulates an 8 bits architecture processor with three registers
> 
> Its Assembly type is the accumulator type
>
> Its registers are:
>
> - program counter
> - accumulator
> - status

## To create the assembler executable

```shell
$ cd ./SP1Assembler
$ make
```

## To assemble the Assembly program

```shell
$ ./SP1Assembler/sp1a <file_name> -o <binary_file_name>
```

## To run the emulator

```shell
$ make
$ sp1_run <binary_file_name>
```
