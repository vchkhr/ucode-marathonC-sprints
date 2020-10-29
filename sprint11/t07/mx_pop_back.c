#include "list.h"

void mx_pop_back(t_list **list){
    if (!list) return;

    t_list *carret = *list;
    while (carret) {
        if (carret->next && carret->next->next) carret = carret->next;
        else if (carret->next) {
            free(carret->next);
            carret->next = NULL;
            break;
        } else {
            free(*list);
            *list = NULL;
            break;
        }
    }
}
