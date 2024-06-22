#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


//printf("Hello world\n");

srand(time(NULL));
//for (int i=0; i<3; i++)
//{
	int rn =rand()%10+1;
//	printf("The %d random number is: %d\n",i+1, rn);
	printf("%d\n", rn);
	for (int j=0; j<rn; j++)
	{
		printf("Hello World\n");
	}
	
//}



return 0;

}
