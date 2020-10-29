#include <stdio.h>
#include <stdlib.h>

int mx_count_words(const char *, char);
void mx_strdel(char **);
char *mx_strncpy(char *, const char *, int);
char *mx_strnew(const int);

char **mx_strsplit(char const *s, char c) {
    int c = mx_count_words(s, c);
    int j = 0;
    char **r = (char**) malloc(8 * c);

    for (int i = 0; i < c; i++) {
        int wl = 0;
        int start = 0;

        for (; s[j]; j++) {
            if (s[j] != c) {
                wl += 1;

                if (start == 0)
                    start = j;
            }
            else if (s[j] == c && wl)
                break;
        }

        char* new_word = mx_strnew(wl);

        for (int k = 0, m = start; m < j; k++, m++)
            new_word[k] = s[m];

        r[i] = new_word;
    }

    r[c] = NULL;
    
    return r;
}
