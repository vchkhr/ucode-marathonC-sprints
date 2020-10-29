int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    int ss1 = mx_strlen(s1);
    int ss2 = mx_strlen(s2);

    for (int i = 0; i < ss2; i++)
        s1[ss1 + i] = s2[i];

    s1[ss1 + ss2] = '\0';

    return s1;
}
