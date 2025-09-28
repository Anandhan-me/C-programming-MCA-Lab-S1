#include<stdio.h>
#define tot 5
int head=-1,n;
int stack[tot];
void push()
    {
        if(head == tot-1)
        {
            printf("The stack is full");
        }
        else
            {
                    printf("Enter the element to push : ");
                    scanf("%d",&n);
                    head=head+1;
                    stack[head]=n;
                    printf("Element pushed !!! \n");
            }
    }
void pop()
    {
        if(head == -1)
        {
            printf("The stack is empty");
        }
        else
            {
                head=head-1;
                stack[head]=n;
                printf("the element %d is popped",n);
            }
    }
void show()
    {
        if(head==-1)
        {
            printf("Stack is empty!!!");
        }
        else
            {
                printf("Stack is pushed and element is : ");
                for(int i = head;i <= 0;i++)
                {
                    printf("%d |",stack[i]);
                }
            }
    }
int main()
    {
    int choose,p,count;
    printf("****Stack operations****\n");
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.show \n");
    printf("How many times operations want to perform : \n");
    scanf("%d",&p);
    for(count=0;count<p;count++)
    {
        printf("\nChoose any operation to perform : ");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
                    push();
                    break;
            case 2:
                    pop();
                    break;
            case 3:
                    show();
                    break;
            default:
                    printf("invalid");
        }
    }

    return 0;
    }
