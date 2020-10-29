#include <stdbool.h>
#include <stdio.h>

void mx_strdel(char **str);
bool mx_isspace(char c);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strtrim(const char *str) {
    if (str == NULL)
        return NULL;

    while (*str++)
        if (!mx_isspace(str[0]))
            break;

    int end = mx_strlen(str) - 1;

    while (mx_isspace(str[end]))
        end--;

    char *temp = mx_strnew(end + 1);
    char *result = mx_strncpy(temp, str, end + 1);

    mx_strdel(&temp);

    return result;
}
