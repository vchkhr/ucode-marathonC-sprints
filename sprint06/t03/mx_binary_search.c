int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char** arr, int size, const char* s, int* count) {
    int l = 0;
    int r = size - 1;

    while (l <= r) {
        int m = (l + r) / 2;
        if (mx_strcmp(arr[m], s) < 0) {
            l = m + 1;
            *count += 1;
        } else if (mx_strcmp(arr[m], s) > 0) {
            r = m - 1;
            *count += 1;
        }
        else {
            *count += 1;
            return m;
        }
    }

    *count = 0;
    return -1;
}

#include "stdio.h"

int main(void) {
    char* arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int size = 6;
    char* s = "aBc";
    int count = 0;

    int res = mx_binary_search(arr, size, s, &count);

    printf("%d, %d", res, count);
    
    return 0;
}
