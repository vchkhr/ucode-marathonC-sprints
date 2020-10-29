#include "stdio.h"

char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2) {
    char *s3;

    if (s1 == NULL && s2 != NULL)
        s3 = mx_strdup(s2);
    else if (s2 == NULL && s1 != NULL)
        s3 = mx_strdup(s1);
    else if (s1 == NULL && s2 == NULL)
        return NULL;
    else {
        s3 = mx_strdup(s1);
        s3 = mx_strcat(s3, s2);
    }

    return s3;
}
