#ifndef MAIN_H
#define MAIN_H
#define NULL ((void *)0)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stddef.h>
/**
 * file: main.h
 * Auth: TILAWAT Arnaud
 * Desc: all functions used for project pointers, array and strings
 */

void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
int _atoi(char *str);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
#endif
