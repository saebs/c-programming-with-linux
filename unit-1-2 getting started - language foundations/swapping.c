//in this program we swap two numbers by logic way and in program and make function to swapping the numbers

#include <stdio.h>

int swap(int* a,int* b){

    int d;
    d = *a;
    *a = *b;
    *b = d;

    return a,b;

}

int main(){
    int a,b,c;
    a = 10,b = 20;
    //swapp the numbers by normanl proccess
    /* c = a;
    a = b;
    b = c;
    printf("the value of a is %d and value of b %d ",a,b);*/
    printf("now by apply function program");
    swap(&a,&b);
    printf("now the values of a and b is %d and %d ",a,b);
    return 0;
}
