#include <stdio.h>
int main()
{
	int xp;
	int age;
	
	printf("Are you experienced. Enter true(1) or false(0) \n");
	scanf("%d", &xp);
	printf("Enter your age. \n");
	scanf("%d", &age);
	
	if((age >= 40) && (xp == 1)){
		printf("Your salary will be N560,000");
	}
	else if((age >= 30) && (age < 40) && (xp == 1)){
		printf("Your salary will be N480,000");
	}
		
	else if((age <= 28) && (xp == 1)){
		printf("Your salary will be N300,000");
	}
		
	else if((age < 28) && (xp == 0)){
		printf("Your salary will be N100,000");
	}
	else
	{
		printf("You do not qualify.");
	}
	return 0;
	
	}
	
