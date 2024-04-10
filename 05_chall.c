#include <stdio.h>
#include <math.h>

int main()
{

	int eggs_per_day;
	int total = 0;

	for(int i=0; i < 5; i++)
	{
		printf("Enter the amount of eggs helper %d can prepare in one day: ", i+1);
		scanf("%d", &eggs_per_day);
		total += eggs_per_day;
	}

	int calculation = round(total / 5);
	printf("\nThe average eggs collected each day by the helpers is %d\n", calculation);

	int total_eggs = (calculation * 5) * 4;
	printf("%d eggs were prepared over the 4 days of Easter weekend!\n", total_eggs);


	return 0;
}
