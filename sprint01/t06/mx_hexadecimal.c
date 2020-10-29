void mx_printchar(char c);

void mx_hexadecimal(void) {
    char c;
    for (int a = 0; a <= 15; a++) {
        if (a < 10) {
            c = a + 48;
        }
        else {
            c = a + 55;
        }
        mx_printchar(c);
        mx_printchar('\n');
    }
}
