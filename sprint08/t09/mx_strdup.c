#include "create_new_agents.h"

char *mx_strdup(const char *str) {
    return str != NULL ? mx_strcpy(mx_strnew(mx_strlen(str)), str) : NULL;
}
