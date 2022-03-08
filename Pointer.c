#include <stdio.h>
int main()
{
	int Numvalue = 10;
	int *ipointerNumvalue;
	ipointerNumvalue = &Numvalue;
	
	printf("Address of Numvalue is: %p \n" , &Numvalue);
	printf("Address stored in ipointer is: %p \n" , &ipointerNumvalue);
	printf("Value of *ipointerNumvalue is: %d\n", *ipointerNumvalue);
	
	return 0;
}