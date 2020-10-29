#include "header.h"

char *mx_file_to_str(const char *filename) {
    if (!filename)
        return NULL;

    int file = open(filename, O_RDONLY);

    if (file < 0)
        return NULL;
    
    int len = mx_filelen(file);

    close(file);

    file = open(filename, O_RDONLY);

    char *text = mx_strnew(len);
    read(file, text, len);

    close(file);

    return text;
}
