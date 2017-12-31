#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;

}*top = NULL, *newNode;

void pop()
{
    printf("\nTop = %p\n\n",top);

    while (top != NULL)
    {
        printf("%d ",top->data);
        top = top->next;
    }

    printf("\n\nTop = %p\n\n",top);
}

void push()
{
    newNode = (struct Node*)malloc(sizeof(struct Node));

    scanf("%d",&newNode->data);
    newNode->next = NULL;

    if(top == NULL)
        top = newNode;
    else{
       newNode->next = top;
       top = newNode;
    }
}

void main ()
{
    int i, n;

    printf("Enter the number of item: ");
    scanf("%d",&n);

    printf("\nThe push items are:\n");
    for(i=0; i<n; i++)
        push();

    printf("\nThe pop items are:\n");
    pop();

}
