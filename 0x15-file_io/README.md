#include 

Tasks
0. Tread lightly, she is near
The 0-read_textfile.c file contains a function that reads a text file and prints it to the POSIX standard output. The letters parameter specifies the number of letters that the function should read and print. If the file is NULL or cannot be opened or read, the function returns 0. If the write call fails or does not write the expected number of bytes, the function returns 0. Otherwise, the function returns the actual number of bytes it can read and print.

1. Under the snow
The 1-create_file.c file contains a function that creates a file. The filename parameter is the name of the file to create, and the text_content parameter is a null-terminated string to write to the file. If text_content is NULL, the function creates an empty file. The created file has the permissions rw-------. If the file already exists, the existing permissions are not changed. Existing files are truncated. If filename is NULL or the function fails, it returns -1. Otherwise, it returns 1 on success.

2. Speak gently, she can hear
The 2-append_text_to_file.c file contains a function that appends text to the end of a file. The filename parameter is the name of the file, and the text_content parameter is a null-terminated string to append to the file. The function does not create the file if it does not exist. If text_content is NULL, nothing is added to the file. If the function fails or filename is NULL, it returns -1. If the file does not exist or the user lacks write permissions on the file, it returns -1. Otherwise, it returns 1.

3. cp
The 3-cp.c file contains a program that copies the contents of one file to another. The program is run with the command cp file_from file_to. If file_to already exists, it is truncated. The created file has the permissions rw-rw-r--. If the file already exists, the existing permissions are not changed. If the number of arguments is incorrect, the function prints Usage: cp file_from file_to, followed by a new line on the POSIX standard error and exits with code 97. If file_from does not exist or the user lacks read permissions on it, the function prints Error: Can't read from file NAME_OF_THE_FILE, followed by a new line and exits with code 98, where NAME_OF_THE_FILE is the first argument passed to the program. If files cannot be created or if write to file_to fails, the function prints Error: Can't write to NAME_OF_THE_FILE, followed by a new line and exits with code 99, where NAME_OF_THE_FILE 
