#include "create_new_agents.h"
​
int mx_strlen(const char *s) {
    int counter = 0;
​
    while (*s++)
        counter++;
​
    return counter;
}
