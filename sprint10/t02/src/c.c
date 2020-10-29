#include "h.h"

int main(int argc, char *argv[]) {
    if (argc <= 1) {
        char buf[1];
        int input = read(0, buf, 1);

        write(1, buf, 1);

        while (input != 0) {
            input = read(0, buf, 1);

            write(1, buf, 1);
        }
    }

    for (int i = 1; i < argc; i++) {
        int file = open(argv[i], O_RDONLY);

        if (file == -1) {
            mx_printerr("mx_cat: ");
            mx_printerr(argv[i]);
            mx_printerr(": No such file or directory\n");
            close(file);
            continue;
        }

        char buf;
        int buf_len;

        while ((buf_len = read(file, &buf, 1)) > 0)
            write(1, &buf, buf_len);

        close(file);
    }

    return 0;
}
