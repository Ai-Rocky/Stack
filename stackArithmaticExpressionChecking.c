#include <stdio.h>
#define max 100

char data[max];
int top = -1;

void pop()
{
    if(top == -1 )
        printf("The stack is empty\n");
    else
        data[top--];
}

void push(char item)
{
    if(top == max - 1 )
        printf("The stack is full\n");
    else
        data[++top] = item;
}

void main()
{
    int i;
    char exp[100] = "[(a+b)-{c+d}]-[f+g]";

    for(i=0; i<strlen(exp); i++)
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if(data[top] == '(' && exp[i] == ')')
                pop();
            else if(data[top] == '{' && exp[i] == '}')
                pop();
            else if(data[top] == '[' && exp[i] == ']')
                pop();
        }

    if(top < 0)
        printf("The Expression is right\n");
    else
        printf("The Expression is wrong\n");
}

