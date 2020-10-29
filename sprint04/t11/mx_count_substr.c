#include <stdio.h>

char *mx_strchr(const char*, int);
int mx_strlen(const char *);
int mx_srtncmp(const char*, const char*, int);
char *mx_strstr(const char*, const char*);

int mx_count_substr(const char *str, const char *sub) {
    int subs = 0;
    const char *p = str;

    if (mx_strlen(sub) == 0)
        return 0;

    while (mx_strstr(p, sub) != NULL) {
        p = mx_strstr(p, sub);

        for (int i = 0; i < mx_strlen(sub); i++) {
            p++;
        }

        subs++;
    }

    return subs;
}
