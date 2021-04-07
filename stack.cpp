#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;

};
struct Node* top;


void push (int data){
struct Node* temp;
    temp = new Node();
if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    temp->data = data;

    temp->next = top;

    top = temp;
}
int isEmpty()
{
    return top == NULL;
}

int peek()
{

    if (!isEmpty())
        return top->data;
    else
        exit(1);
}

void pop()
{
    struct Node* temp;

    if (top == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {

        temp = top;

        top = top->next;

        temp->next = NULL;

        free(temp);
    }
}

