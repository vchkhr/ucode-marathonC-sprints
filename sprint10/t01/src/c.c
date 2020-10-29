#include "h.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
        return -1;
    }

    int file1 = open(argv[1], O_RDONLY);
    int file2 = open(argv[2], O_WRONLY | O_CREAT, 0644);

    if (file1 == -1 || file2 == -1) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");

        if (file1 == -1)
            close(file1);
        if (file1 == -2)
            close(file2);
            
        return -2;
    }

    char buf;
    int buf_len;

    while ((buf_len = read(file1, &buf, 1)) > 0)
        write(file2, &buf, buf_len);

    close(file1);
    close(file2);

    return 0;
}
