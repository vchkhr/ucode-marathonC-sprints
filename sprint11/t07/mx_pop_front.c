#include "list.h"

void mx_pop_front(t_list **list){
    if (!list) return;

    t_list *carret = *list;
    if ((*list)->next) {
        *list = (*list)->next;
        free(carret);
    } else {
        free(carret);
        *list = NULL;
    }
}

