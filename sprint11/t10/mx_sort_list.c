#include "list.h"

t_list *mx_sort_list(t_list *list, bool(*cmp)(void *a, void* b)) {
    if (list == NULL || cmp == NULL) return NULL;

    t_list *temp = list;

    for (t_list *i = temp; i->next != NULL; i = i->next) {
        for (t_list *j = i; j->next !=NULL; j = j->next) {
            if (cmp(i->data, j->data)) {
                void *tmp = i->next;
                i->next = j->next;
                j->next = tmp;
            }
        }
    }

    return list;
}
