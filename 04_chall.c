#include <stdio.h>
#include <math.h>

int main()
{
	int total_eggs;

	printf("Enter total number of eggs for the event: ");
	scanf("%d", &total_eggs);

	int even_eggs = round(total_eggs / 5);
	int remainder = total_eggs % 5;

	printf("\n%d eggs per basket with %d leftover\n", even_eggs, remainder);

	return 0;
}
