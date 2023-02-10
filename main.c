#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,*ptr;
    printf("enter the number of integers :");
    scanf("%d",&n);
    ptr=(int*)malloc(2*sizeof(int));
    if(ptr==NULL)
    {
        printf("Insufficient memory");
        exit(1);
    }
    printf("\n Memory allocated successfully and base address = %u\n",ptr);
    printf("Default value stored is : \n");
    for(i=0;i<2;i++)
    {
        printf("%d stored at %u address \n",*(ptr+i),(ptr+i));
    }
    printf("enter 2 integer numbers :");
    for(i=0;i<n;i++)
        scanf("%d",(ptr+i));
    printf("enter integer numbers are :\n");
    for(i=0;i<2;i++)
        printf("%d stored at %u address \n",*(ptr+i),(ptr+i));
    ptr=(int*)realloc(ptr,4*sizeof(int));
    if(ptr==NULL)
    {
        printf("insufficient memory");
        exit(1);
    }
    printf("enter two more integer numbers :\n");
    for(i=2;i<4;i++)
        scanf("%d",(ptr+i));
    
    printf("entered integer numbers are :\n");
    for(i=0;i<4;i++)
        printf("%d stored at %u address \n",*(ptr+i),(ptr+i));
    free (ptr);
    return 0;
}
