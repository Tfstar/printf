0x11. C - printf

Description

printf Project at ALX Software Engineering by  team: Fagbohun Oluwapelumi and Tade Ogunleye.

This team project is part of the first printf ALX software Engineering curriculum. _printf replicates the C standard library printf() function.

What you should learn from this project:

How to collaboratively use git in a team setting
Applying variadic functions to a big project
The complexities of printf
Managing a lot of files and finding a good workflow 

Prototype

int _printf(const char *format, ...);

 Usage

Prints a string to the standard output, according to a given format.
All files were created and compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
Returns the number of characters in the output string on success, -1 otherwise
Call it this way: _printf("format string", arguments...) where format string can contain conversion specifiers and flags, along with regular characters

Examples

_printf("Hello Alx, Cisfun\n") prints "Hello Alx, Cisfun", followed by a new line
_printf("%s", "Hello") prints "Hello"
_printf("This is a number: %d", 98) prints "This is a number: 98"

Tasks

These are all the tasks of this project.

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

Write a function that produces output according to a format.

-Returns: the number of characters printed (excluding the null byte used to end output to strings)
-write output to stdout, the standard output stream
-format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
.c
.s
.%

1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:

.d
.i

2. With a face like mine, I do better in print

Handle the following custom conversion specifiers:

.b: the unsigned int argument is converted to binary

3. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:

.u
.o
.x
.X

4. Nothing in fine print is ever good news

Use a local buffer of 1024 chars in order to call write as little as possible.

5. My weakness is wearing too much leopard print

Handle the following custom conversion specifier:

.S : prints the string.
.Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print


Handle the following conversion specifier: p.


7. The big print gives and the small print takes away


.+
.space
.#


8. Sarcasm is lost in print


Handle the following length modifiers for non-custom conversion specifiers:

.l
.h
Conversion specifiers to handle: d, i, u, o, x, X

9. Print some money and give it to us for the rain forests

Handle the field width for non-custom conversion specifiers.


10. The negative is the equivalent of the composer's score, and the print the performance

Handle the precision for non-custom conversion specifiers.


11. It's depressing when you're still around and your albums are out of print

Handle the 0 flag character for non-custom conversion specifiers.


12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection


Handle the - flag character for non-custom conversion specifiers.



13. Print is the sharpest and the strongest weapon of our party


Handle the following custom conversion specifier:

.r : prints the reversed string

14. The flood of print has turned reading into a process of gulping rather than savoring


Handle the following custom conversion specifier:

. R: prints the rot13'ed string


15.*

All the above options work well together.
