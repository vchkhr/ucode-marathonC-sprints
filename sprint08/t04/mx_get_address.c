#include "get_address.h"

char *mx_get_address(void *p) {
    unsigned long la = (unsigned long)p;
    char *ha = mx_nbr_to_hex(la);
    int s = mx_strlen(ha);
    char *r = mx_strnew(s + 2);

    r[0] = '0';
    r[1] = 'x';
    
    for (int i = 2, z = 0; z < s; i++, z++)
        r[i] = ha[z];

    return r;
}
