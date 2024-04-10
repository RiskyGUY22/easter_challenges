#include <stdio.h>

int main() {
    int eggs[4];
    int highest = 0;
    int house_number = 0; // Store the house number with the highest eggs
    int tie = 0;

    for (int i = 0; i < 4; i++) {
        printf("Enter the number of eggs dropped off at house %d: ", i + 1);
        scanf("%d", &eggs[i]);

        if (eggs[i] > highest) {
            highest = eggs[i];
            house_number = i + 1; // Update the house number with the highest eggs
            tie = 0;  // Reset tie flag if a new highest value is found
        } else if (eggs[i] == highest) {
            tie = 1;  // Set tie flag if there's a tie
        }
    }

    if (tie) {
        printf("tie!\n");
    } else {
        printf("House %d has the highest number of eggs dropped off: %d\n", house_number, highest);
    }

    return 0;
}
