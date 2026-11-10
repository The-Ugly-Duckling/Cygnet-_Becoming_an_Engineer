/*
 * C is the programming language that I have chosen as my first programming language.
 * It is a middle-level language developed in 1972 at AT&T Bell Laboratories by
 * Dennis Ritchie.
 *
 * I highly recommend reading about the history and development of C to understand
 * its importance and influence on modern programming languages.
 *
 * C is a compiled language, which means that the source code must go through a
 * compilation process before it can be executed by the computer.
 *
 * Understanding the compilation process and the basic structure of a C program
 * is an important first step for every beginner.
 *
 * The purpose of this program is to print a string to the console (output screen)
 * in the IDE (Integrated Development Environment) where you write, compile,
 * and run your code.
 */

#include <stdio.h>

/*
 * This is a preprocessor directive.
 * A directive is an instruction given to the preprocessor before the actual
 * compilation of the program begins.
 *
 * The #include directive is used to include the contents of another file in
 * the current program.
 *
 * Here, we are including the standard input-output header file, stdio.h.
 * The ".h" extension stands for "header file."
 *
 * The printf() function is declared in stdio.h. Without including this header
 * file, the compiler would not know about printf(), which could lead to
 * compilation warnings or errors.
 */

int main()  // Program execution starts from the main() function.
{
    printf("The Ugly Duckling");

    /*
     * "The Ugly Duckling" is a string literal.
     * Anything enclosed within double quotation marks is called a string.
     *
     * A string is simply a sequence of characters. Letters, digits,
     * punctuation marks, and even spaces are considered characters.
     *
     * The printf() function is used to display output on the console.
     *
     * The semicolon (;) marks the end of a statement. A statement is a single
     * executable instruction in a program.
     */

    return 0;   // Returning 0 indicates successful program execution.
}
