int mx_count_words(const char *str, char delimiter) {
    int c = 0;
    int last = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter && str[i] != str[i - 1]) {
            if (c == 0)
                c = 2;
            else
                c++;
        }
        
        last = i;
    }

    if (str[0] == delimiter)
        c--;
    if (str[last] == delimiter)
        c--;

    return c;
}
