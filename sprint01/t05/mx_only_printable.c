#include <unistd.h>

void mx_printchar(char c);

void mx_only_printable(void) {
    for (int count = 126; count >= 32; count--) {
        mx_printchar(count);
        write(1, "\n", 1);
    }
}
