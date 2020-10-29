#include "list.h"

void mx_clear_list(t_list **list) {
    if (!list) return;

    while (list) {
        t_list *carret = *list;
        if ((*list)->next) {
            *list = (*list)->next;
            free(carret);
        } else {
            free(carret);
            *list = NULL;
            return;
        }
    }
}
