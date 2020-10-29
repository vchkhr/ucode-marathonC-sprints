#ifndef GETADDRESS_H
#define GETADDRESS_H

#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

char *mx_nbr_to_hex(unsigned long nbr);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_get_address(void *p);

#endif
