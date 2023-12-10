#ifndef __DRINKING_RESTRICTION_H
#define __DRINKING_RESTRICTION_H
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>


typedef enum
{
    ALCOHOL_NO_ACCESS,
    ALCOHOL_ACCESS

} ALCOHOL;

bool canIBuyBeer(char location, int age, float currentAlcoholContent);

#endif