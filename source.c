#include<stdio.h>
#include<stdlib.h>
#include"pile.h"
pile pile_vide()
{
    return NULL;
}
pile empiler(pile p,int n)
{
    pile elem = malloc(sizeof(pile));
    elem->n = n;
    elem->suivant = p;
    return elem;
}
