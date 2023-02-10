#include<stdio.h>
#include<stdlib.h>

void create();
void insert();
void delete();
int a[10],n,i;
int main()
{
    int ch;
    while(1)
    {
        printf("\n1:Create  2: Insert  3: Delete  4: Exit:");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                delete();
                break;
            case 4:
                exit(0);
        }
    }
}
void create()
{
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\n Array elements are:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}


void insert()
{
    int ele,pos;
    printf("Enter the element to be inserted:");
    scanf("%d",&ele);
    printf("Enter the position of element to be inserted:");
    scanf("%d",&pos);

    if(pos>n)
    {

        printf("Invalid position");
        exit(0);
    }

    for(i=n-1;i>=pos;i--)
        a[i+1]=a[i];

    a[pos]=ele;
    n=n+1;

    printf("Array elements after insertion:");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}

void delete()
{
    int pos,ele;
    printf("Enter the position of element to be deleted:");
    scanf("%d",&pos);
    if(pos>n-1)
    {
        printf("Invalid position");
        exit(0);
    }

    ele=a[pos];
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
    n=n-1;
    printf("Array elements after deletion:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}




















