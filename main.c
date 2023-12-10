#include "drinking_restriction.h"

int main() {
    char input;
    int age = 0;
    float alcohol_level = 0;

    while (1) {
        printf("Welcome to a test program!\n");

        printf("Enter your location (p/l to represent pub/liquor): ");
        scanf(" %c", &input);  // Added space before %c to consume newline character

        // Clear the input buffer
        while (getchar() != '\n');

        // Check if the user wants to exit
        if (input == 'e') {
            printf("Exiting the program. Goodbye!\n");
            break;  // Exit the loop
        }
        else if (input != 'p' && input != 'l')
        {
            printf("Invalid location. Please enter p (pub), l (liquorice), or e (exit): \n");
            continue;
        }

        printf("Enter your age: ");
        if (scanf("%d", &age) != 1 || age < 0) {
            printf("Invalid input for age. Please enter a valid age. Exiting the program. Goodbye!\n");
            break;
        }

        printf("Enter your current alcohol level (in decimal): ");
        if (scanf("%f", &alcohol_level) != 1 || alcohol_level < 0.0 || alcohol_level > 100.0) {
            printf("Invalid input for alcohol level. Please enter a valid level. Exiting the program. Goodbye!\n");
            break;
        }

        ALCOHOL result = canIBuyBeer(input, age, alcohol_level);

        switch (result) {
            case ALCOHOL_ACCESS:
                printf("You can buy alcohol!\n");
                break;
            case ALCOHOL_NO_ACCESS:
                printf("You can't buy alcohol!\n");
                break;
        }
    }

    return 0;
}
