#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*next;

    Node(int x)
    {
        data=x;
        next=NULL;  

    }
};

void print(Node*head)
{
    Node*p=head;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

void reverse(Node*head)
{
    Node*p=head;
    Node*prev=NULL;
    Node*next=NULL;

    while(p!=NULL)
    {
        next=p->next;
        p->next=prev;


        prev=p;
        p=next;

    }
    head=prev;

    print(head);


    

}


int main()
{
    struct Node*head=new Node(10);
    struct Node*first=new Node(20);
    struct Node*second=new Node(30);


    head->next=first;
    first->next=second;
    second->next=NULL;

    reverse(head);

    




}