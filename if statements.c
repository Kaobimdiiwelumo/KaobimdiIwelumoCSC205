#include <stdio.h>

int main(){
	int age;
	printf("Enter your age: \n");
	scanf("%d", &age);
	
	if (age > 18)
	{
		printf("You can vote in the election because your age is \n", age);		
	}
	else
	{
		printf("You cannot vote bastard lol. \n");
	}
	
	
	return 0;
}