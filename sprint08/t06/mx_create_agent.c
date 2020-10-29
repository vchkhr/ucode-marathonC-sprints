#include "create_agent.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    if (!name)
        return NULL;

    t_agent *na = malloc(16);

    na->name = mx_strdup(name);
    na->power = (int) malloc(4);
    na->power = power;
    na->strength = (int) malloc(4);
    na->strength = strength;

    return na;
}
