#include <stdio.h>
#define max 5

int data[max], top = -1;

void pop()
{
    if(top == -1 )
        printf("The stack is empty\n");
    else
        printf("%d ",data[top--]);
}

void push()
{
    int item;
    scanf("%d",&item);

    if(top == max - 1 )
        printf("The stack is full\n");
    else
        data[++top] = item;
}

void main()
{
    int i,n,item;

    printf("Enter the number of item: ");
    scanf("%d",&n);

    printf("\nThe push items are:\n");
    for(i=0; i<n; i++)
        push();

    printf("\nThe pop items are:\n\n");
    printf("Top = %d\n\n",top);

    for(i=0; i<n; i++)
        pop();

    printf("\n\nTop = %d\n\n",top);
}
