#include "h.h"

int mx_file_len(const char *file) {
    short fl = open(file, O_RDONLY);
    short sz = 0;
    int len = 0;
    char buf;

    sz = read(fl, &buf, 1);

    while (sz > 0) {
        sz = read(fl, &buf, 1);
        len++;
    }

    close(fl);

    return len;
}
