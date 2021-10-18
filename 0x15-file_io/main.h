#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcnt1.h>
#include <string.h>

/**
 * File: main.h
 * Desc: Header file containing prototypes for all functions.
 * 
 */
int _putchar (char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
