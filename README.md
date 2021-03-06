# BizCardBF
Portable C interpreter for Brainf*** for my business card 

## Features 
* Interpreter with all Brainf*** features
* Loop depth of 256
* about 65,536 cells (unsigned short)
* max program/input size of about 65,536 characters
* Cell width of 1 byte(char)
* Error Reporting

## Compilation/Minification
You may use any C compiler you want on any platform but the build script runs GCC

**On Linux, you can easily compile and minify by running the following script:**

    chmod 777 build.sh
    ./build.sh

This build script will:
* Download a C minifier from Github (https://github.com/Scylardor/cminify)
* Minify bf.c, storing the output to bf.min.c
* Remove the minifier afterwards
* Compile bf.c with GCC with compiler optimizations, leaving you with the executable "bf"
Compiler optimizations have been shown to reduce runtimes to about a third of what they were.

This was tested by running a brainf*** mandelbrot program by Erik Bosman and using the linux time command.
In the test, the program was first compiled without optimizations and took about 1m 32s seconds to run the program.
Then it was compiled with the `-O3` argument in GCC, providing the highest level optimizations
possible. This took about 35s to run, showing a massive speed increase.

## Usage

    ./bf "program" "input"
For example, here is a "cat" program that outputs the input:

    ./bf "+[,.]" "Hello World"
On Windows, it would just be:

    bf "+[,.]" "Hello World"
### Advanced Bash Usage
If you would like to read the program or input from a file,
use this format:

    "$(cat program.bf)"
This will place the file contents (from "cat") in place of one of the inputs.

For example, you could run:

    ./bf "$(cat program.bf)" "$(cat program.in)"

If you would like to store the output as well, you can run it like this:

    ./bf "$(cat program.bf)" "$(cat program.in)" > program.out
**Keep in mind: The first line will always be the credits and, if there is an error, it will be on the third line.**
## Implementation Details
Cells:
* 1 byte cell width
* As many cells as the maximum size of the "short" type
* Over/underflow on cell values/pointers

Input/Output:
* Output is printed to "stdout" with two lines of credits before it
* Input can be as long as the max value of the "short" type

Loops:
* Stack depth of 255
* Current stack position stored in char
* Stores current stack depth and the next one to run. This is used to prevent execution of code witin untriggered loops

Program:
* Used command arguments as input
* First and second line are used for credits
* Third line is where output starts/error is printed
* Prints error if it is missing arguments
* Prints error if loop brackets are unbalanced

## Samples/Tests
Samples and tests can be found in the `tests` folder.
All credit to their original authors.

To test execution speed, run the program with the `time` command.
## License
This program is licensed under the MIT license. 

For more information, open the [LICENSE](https://github.com/UDXS/BizCardBF/blob/master/LICENSE) file.
## Credits
Made By Davit Markarian (UDXS) @ udxs.me

Thanks to [rdebath](https://github.com/rdebath) for helping me find issues and [Scylardor]() for his c minifier - [cminify](https://github.com/Scylardor/cminify)

As well as the creators of the various test programs I used.