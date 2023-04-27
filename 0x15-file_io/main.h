#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *_buffer(char *file);
void close_file(int fd);
void check_elf(unsigned char *elf);
void print_magic(unsigned char *elf);
void print_class(unsigned char *elf);
void print_data(unsigned char *elf);
void print_version(unsigned char *elf);
void print_abi(unsigned char *elf);
void print_osabi(unsigned char *elf);
void print_type(unsigned int e_type, unsigned char *elf);
void print_entry(unsigned long int e_entry, unsigned char *elf);
void close_elf(int elf);

#endif
