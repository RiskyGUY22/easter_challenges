#include <stdio.h>


int main()
{

	int start_hours = 0;
	int start_mins = 0;

	int end_hours = 0;
    int end_mins = 0;

	printf("Enter the start time in hours: ");
	scanf("%d", &start_hours);

	printf("Enter the start time in mins: ");
    scanf("%d", &start_mins);

	printf("Enter the end time in hours: ");
    scanf("%d", &end_hours);

	printf("Enter the start time in mins: ");
    scanf("%d", &end_mins);

	int duration_hours = end_hours - start_hours;
	int duration_mins = end_mins - start_mins;

	printf("\nThe hunt lasted %d hours and %d minuted!\n", duration_hours, duration_mins);
	return 0;
}
