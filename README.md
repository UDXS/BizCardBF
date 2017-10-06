# BizCardBF
Portable C interpreter for Brainf*** for my business card 

## Features
* Interpreter with all Brainf*** features
* Loop depth of 256
* about 65,536 cells (unsigned short)
* max program/input size of about 65,536 characters
* Cell width of 1 byte(char)
* Error Reporting

## Usage
    ./bf "program" "input"
    
## Compilation
You may use any C compiler you want but I recommend (and have tested with) GCC

Simply Run:

    gcc -o bf bf.c