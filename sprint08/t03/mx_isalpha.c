#include "hex_to_nbr.h"

bool mx_isalpha(int c) {
    if (c >= '0' && c <= '9') {
        return 0;
    }
    else {
        return 1;
    }
}
