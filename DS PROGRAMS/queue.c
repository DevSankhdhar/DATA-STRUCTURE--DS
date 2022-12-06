#include <stdio.h>
struct queue
{
    int a[100];
    int front;
    int rear;
};
struct queue q;
void insert();
void del();
void display();
void insert()
{  if (q.rear == 100)
        printf("queue overflow");
    else
    {if (q.front == -1)
            q.front = 0;q.rear++;int h;
        printf("enter the element");
        scanf("%d", &h);
        q.a[q.rear] = h;
    }
}
void del()
{
    if (q.front == -1)
        printf("queue under flow");
    else if (q.front == q.rear)
{printf("element deleted is %d", q.a[q.front]);
    q.front = -1;q.rear = -1;
    }
    else
{printf("element deleted is %d", q.a[q.front]);
        q.front++;
    }
}
void display()
{if (q.front == -1)
        printf("Underflow");
    else
    {
    for (int i = q.front; i <= q.rear; i++)
        printf("%d ", q.a[i]);
    }
}
void main()
{
    int n = 0;q.front = -1;q.rear = -1;
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Display \n");
    printf("4. exit\n");
    while (n != 4)
    {printf("enter your choice");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insert();break;
        case 2:
            del();break;
        case 3:
            display();break;
        case 4:
            printf("exit");break;
        default:
            printf("invalid input");break;
        }
    }}
