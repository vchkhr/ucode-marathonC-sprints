void mx_printchar(char c);

void mx_print_alphabet(void) {
    int c = 1;
    for (int b = 65; b <= 90; b++) {
        if (c == 1) {
            mx_printchar(b);
            c = 0;
        }
        else {
            mx_printchar(b + 32);
            c = 1;
        }
        mx_printchar('\n');
     }
}
