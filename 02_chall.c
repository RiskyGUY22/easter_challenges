#include <stdio.h>


int main()
{

	int num_baskets;
	int num;
	int total_chocolate = 0, total_gold = 0, total_silver = 0;

	printf("Enter the number of baskets you want: ");
	scanf("%d", &num_baskets);

	for(int i=1; i <= num_baskets; i++)
	{
		printf("How many chocolate eggs do you want in basket %d: ", i);
		scanf("%d", &num);
		total_chocolate += num;

		printf("How many gold eggs do you want in basket %d: ", i);
        scanf("%d", &num);
        total_gold += num;

		printf("How many silver eggs do you want in basket %d: ", i);
        scanf("%d", &num);
        total_silver += num;

		printf("\n");
	}

	printf("\n%d Chocolate eggs will be needed.", total_chocolate);
	printf("\n%d Gold eggs will be needed.", total_gold);
	printf("\n%d Silver eggs will be needed.\n", total_silver);

	return 0;
}
