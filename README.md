# get_next_line

## Description

**get_next_line** is a project at 42 that requires implementing a function capable of reading a file **line by line**.

The function reads from a file descriptor and returns **one line at a time**, including the newline character `\n` if present.

This project introduces important concepts such as:

- static variables
- file descriptors
- buffered reading
- memory management
- handling partial reads

## Function Prototype

```c
char *get_next_line(int fd);
