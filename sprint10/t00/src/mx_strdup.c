#include "header.h"

char *mx_strdup(const char *str) {
    return str ? mx_strcpy(mx_strnew(mx_strlen(str)), str) : NULL;
}
