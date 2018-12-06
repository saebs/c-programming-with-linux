#include <stdio.h>

//Write your function prototype here
void elixir(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	elixir( ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void elixir(int * ageAddr)
{
    if (* ageAddr > 20)
    {
        * ageAddr = * ageAddr - 10;
    }
    else
    {
        * ageAddr =  *ageAddr * 2;
    }
}