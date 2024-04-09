#include <stdio.h>

int main() {
    float temp[3];
    float total_time = 0.0;

	// i has to be set to 0 so that the stack overflow is avoided
    for (int i = 0; i < 3; i++) {
        printf("Enter time spent on the hunt on Day %d (minutes): ", i + 1);
        scanf("%f", &temp[i]);
        total_time += temp[i];
    }

    float total_time_hour = total_time / 60.0;
    printf("Total time spent on the hunt: %.2f hours\n", total_time_hour);

	if(total_time > 120)
	{
		printf("Wow, that was a long hunt!\n");
	}
	else
	{
		printf("Efficient hunting!\n");
	}
    return 0;
}
