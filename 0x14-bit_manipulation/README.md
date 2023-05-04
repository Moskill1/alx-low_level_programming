#include readme.md

# C - Bit manipulation

This project involves several functions that perform bit manipulation operations in C. The functions are described below:

1. `binary_to_uint`: This function converts a binary number represented as a string of '0' and '1' characters to an unsigned integer. If the input string is `NULL` or contains one or more characters that are not '0' or '1', the function returns 0.

2. `print_binary`: This function prints the binary representation of a given unsigned integer.

3. `get_bit`: This function returns the value of a bit at a given index in an unsigned integer. Indices start at 0. If an error occurs, the function returns -1.

4. `set_bit`: This function sets the value of a bit at a given index in an unsigned integer to 1. If an error occurs, the function returns -1.

5. `clear_bit`: This function sets the value of a bit at a given index in an unsigned integer to 0. If an error occurs, the function returns -1.

6. `flip_bits`: This function returns the number of bits that need to be flipped in order to convert one unsigned integer to another.

7. `get_endianness`: This function checks the endianness of the machine on which it is run. If the machine is big-endian, the function returns 0. If the machine is little-endian, the function returns 1.

8. `password`: This project also includes a file named `101-password` that contains the password for the `crackme3` executable.

