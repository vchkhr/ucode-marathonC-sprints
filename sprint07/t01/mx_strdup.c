char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);

char *mx_strdup(const char *str) {
    int size = mx_strlen(str);
    char *res = mx_strnew(size);
    res = mx_strcpy(res, str);

    return res;
}
