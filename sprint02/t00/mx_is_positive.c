void mx_printstr(const char *s);

void mx_is_positive(int i) {
    char* r;

    if (i > 0) {
        r = "positive\n";
    }
    else if (i < 0) {
        r = "negative\n";
    }
    else {
        r = "zero\n";
    }

    mx_printstr(r);
}
