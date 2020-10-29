#include "list.h"

void mx_foreach_list(t_list *list, void(*f)(t_list *node)) {
    if (!f) return;
    
    while (list) {
        f(list);
        if (list->next) list = list->next;
        else break;
    }
}
