#ifndef A_H
#define A_H

#include "stdbool.h"
#include "unistd.h"
#include "stdio.h"

int main(int argc, char *argv[]);
int calc(int argc, char *argv[]);
int mx_atoi(const char *str);

void mx_printchar(char c);
void mx_printint(int n);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);
void mx_printerr(const char *s);

int mx_sub(int a, int b);
int mx_add(int a, int b);
int mx_mul(int a, int b);
int mx_div(int a, int b);

#endif
