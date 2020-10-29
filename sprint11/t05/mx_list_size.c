#include "list.h"

int mx_list_size(t_list *list) {
    if (!list) return 0;
    int len = 0;
    t_list *carret = list;
    while (carret) {
        len++;
        if (carret->next) carret = carret->next;
        else break;
    }
    return len;
}
