#include "stdlib.h"

void mx_strdel(char **str);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strdup(const char *str);
char *mx_strcpy(char *dst, const char *src);
char *mx_strcat(char *s1, const char *s2);

char *mx_concat_words(char **words) {
    if (words == NULL)
        return NULL;

    char *result = mx_strdup(words[0]);

    for (int i = 0; words[i] != NULL; i++) {
        char *temp = mx_strjoin(result, " ");
        mx_strdel(&result);
        result = mx_strjoin(temp, words[i]);
        mx_strdel(&temp);
    }

    return result;
}
