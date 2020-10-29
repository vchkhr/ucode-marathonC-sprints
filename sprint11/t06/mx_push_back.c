#include "list.h"

void mx_push_back(t_list **list, void *data) {
    if (!list) return;
    if (!data) return;

    t_list *new_node = mx_create_node(data);
    if (!new_node) return;

    t_list *carret = *list;
    while (carret) {
        if (carret->next) carret = carret->next;
        else {
            carret->next = new_node;
            break;
        }
    }
}
