#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));

	int random_number =rand()%10+1;
	printf("Random number is: %d\n", random_number);

	for (int j=0; j<random_number; j++)
	{
		printf("Hello World\n");
	}
	
	return 0;

}
