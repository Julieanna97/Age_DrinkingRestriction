#include "drinking_restriction.h"

bool canIBuyBeer(char location, int age, float currentAlcoholContent) {
    ALCOHOL return_value = ALCOHOL_ACCESS;

    // Check if the location is a pub or a liquor store
    bool isPub = (location == 'p');
    bool isLiquor = (location == 'l');

    // Check the conditions for buying beer
    if ((age >= 18 && (isPub || isLiquor)) && currentAlcoholContent > 1.0) {
        return_value = ALCOHOL_NO_ACCESS;
    } else if (age < 18 && ((isPub || isLiquor) && (currentAlcoholContent < 1.0 || currentAlcoholContent > 1.0))) {
        return_value = ALCOHOL_NO_ACCESS;
    }

    return return_value;
}
