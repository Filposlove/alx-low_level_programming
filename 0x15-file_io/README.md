0x15. C - File I/O
Tasks
0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.
Prototype: ssize_t read_textfile(const char *filename, size_t letters);
where letters is the number of letters it should read and print
returns the actual number of letters it could read and print
if the file can not be opened or read, return 0
if filename is NULL return 0
if write fails or does not write the expected amount of bytes, return 0
1. Under the snow
Create a function that creates a file.
2. Speak gently, she can hear
Write a function that appends text at the end of a file.
Prototype: int append_text_to_file(const char *filename, char *text_content);
where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
Return: 1 on success and -1 on failure
Do not create the file if it does not exist
If filename is NULL return -1
If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file
3. cp
Write a program that copies the content of a file to another file.

