#include "stdbool.h"

void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if (argc != 3)
        return 0;

    int n1 = mx_atoi(argv[1]);
    int n2 = mx_atoi(argv[2]);
    
    if (n1 < 1 || n2 < 1)
        return 0;
    if (n1 > 9 || n2 > 9)
        return 0;

    if (n1 > n2) {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (int i = n1; i <= n2; i++) {
        for (int j = n1; j <= n2; j++) {
            mx_printint(i * j);

            if (j != n2)
                mx_printchar('\t');
        }

        mx_printchar('\n');
    }

    return 0;
}
