#include <stdio.h>

void findMax(int arr[], int size, int *max_value, int *max_index) {
    *max_value = arr[0];
    *max_index = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] < *max_value) {
            *max_value = arr[i];
            *max_index = i+1;
        }
    }
}


int main() {
    int times[4];

    for (int i = 0; i < 4; i++) {
        printf("Enter the time it took for participant %d to complete the race (minutes): ", i + 1);
        scanf("%d", &times[i]);

    }

	int size = sizeof(times) / sizeof(times[0]);
	int max_value, max_index;
	findMax(times, size, &max_value, &max_index);

	int count = 0;
    for (int i = 0; i < size; i++) {
        if (times[i] == max_value) {
            count++;
        }
    }

    if (count > 1) {
        printf("Tie!\n");
    } else {
		printf("Congratulations to participant %d who had a score of %d\n", max_index, max_value);
	}
    return 0;
}
