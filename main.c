//call by reference
#include<stdio.h>
void Swap(int *a,int *b);
int main()
{
    int a=10,b=25;
    printf("before swapping,value a=%d b=%d\n",a,b);
    Swap(&a,&b);
    printf("after swapping,value a=%d b=%d\n",a,b);
}
void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("inside function,valueof a=%d b=%d",*a,*b);
}


