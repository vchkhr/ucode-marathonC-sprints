#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if (!*list) return;

    if (index < 0) {
        mx_pop_front(list);
        return;
    }

    int ind = 0;
    t_list *carret = *list;
    while (carret) {
        if (ind == index - 1) {
            if (carret->next) {
                free(carret->next);
                carret->next = carret->next->next;
            }
            return;
        } else if (carret->next) {
            carret = carret->next;
        } else {
            mx_pop_back(list);
            return;
        }
        ind++;
    }
}
