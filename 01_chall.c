#include <stdio.h>

int main()
{

	int eggs[5];
	int total = 0;

	for(int i=1; i <= 5; i++)
	{
		printf("Enter easter eggs collected on Day %d\n", i);
		scanf("%d", &eggs[i]);
		total += eggs[i];

	}

	if(total >= 50)
    	{
        	printf("Great job! You are an Easter egg superstar!\n");
		}
		else if(total < 50)
		{
			printf("Good effort, but lets try to find more eggs next time.\n");
		}
		else
		{
			printf("[Error 1] Invalid arguement!");
		}
	return 0;
}
