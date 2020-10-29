int mx_strlen(const char *);
int mx_strncmp(const char*, const char*, int);
char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2) {
    while (*s1 != '\0') {
        if (!mx_strcmp(s1, s2, mx_strlen(s2)))
            return (char *)s1;

        s1++;
    }

    return 0;
}
