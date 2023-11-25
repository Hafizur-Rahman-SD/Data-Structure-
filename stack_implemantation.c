#include <stdio.h>
void push(int x);
void pop();
int isEmpty();
int isFull();
int Top();
void traversal();

int stack[5], top=-1;

void main()
{
    while(1)
    {
        int ch,x;
        printf("Enter choice(1.push 2.pop 3.Top 4.exit): ");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter new data: ");
            scanf("%d", &x);
            push(x);
            traversal();
        }
        else if(ch==2)
        {
            pop();
            traversal();
        }
        else if(ch==3)
        {
            printf("%d", Top());
            traversal();
        }
        else if(ch==4)
        {
            break;
        }
        else
        {
            printf("Invalid choice.\n");
        }
    }
    return;
}

void push(int x)
{

}

void pop()
{

}

int isFull()
{

}

int isEmpty()
{

}

int Top()
{
    return stack[top];
}

void traversal()
{
    int i;
    printf("The stack: ");
    for(i=0; i<=top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
