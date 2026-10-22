#include<iostream>
#define max_size 10
using namespace std;
void pop( );
void display();
int top=-1,stack[max_size];
int main()
{
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;
    stack[++top] = 40;
    stack[++top] = 50;
    stack[++top] = 60;
    stack[++top] = 70;
    stack[++top] = 80;
    stack[++top] = 90;
    stack[++top] = 100;

    pop();
    return 0;  
}
void pop()
{
    if(top == -1)
    cout<<"underflow";
    else
    {
        cout<<"?npopped elemet: "<<
        stack[top];
        top--;
    }
}
void display()
{
    for(int i=0;i<=top;i++)
        cout<< stack[i]<<" ";
}