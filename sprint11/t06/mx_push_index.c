#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if (!*list) return;
    if (!data) return;
    if (index < 0) {
        mx_push_front(list, data);
        return;
    }

    int ind = 0;
    t_list *carret = *list;
    while (carret) {
        if (ind == index - 1) {
            t_list *node = mx_create_node(data);
            if (carret->next)
                node->next = carret->next;
            carret->next = node;
            return;
        } else if (carret->next) {
            carret = carret->next;
        } else {
            mx_push_back(list, data);
            return;
        }
        ind++;
    }
}
