#include <iostream>
#include <dos.h>
#include <conio.h>
#include <time.h>
#include<unistd.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class linkedlist
{
public:
    Node *first;
    linkedlist();
    linkedlist(int A[],int n);
    ~linkedlist();

    void disp();
    void ins(int i, int x);
    void del(int i);
    void len();
    int maxi(Node *y);

};
linkedlist::linkedlist()
{
    first = NULL;
}
linkedlist::linkedlist(int A[],int n)
{
    Node *t,*last;

    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
linkedlist::~linkedlist()
{
    Node *p=first;
    while(first)
    {
        first=first->next;
        delete p;
        p=first;
    }
}

void linkedlist::disp()
{
    Node *p=first;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<"\n";

}
void linkedlist::len()
{
    Node *p=first;
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    cout<<l<<"\n";
}
void linkedlist::ins(int i,int x)
{
    Node *p=first,*t;
    t=new Node;
    t->data=x;
    t->next=NULL;
    for(int j=1;j<i;j++)
    {
        p=p->next;
    }
    t->next=p->next;
    p->next=t;
}
void linkedlist::del(int i)
{
    Node *p=first,*q=NULL;
    for(int j=0;j<i;j++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    delete p;
}

int linkedlist:: maxi(Node *y)
{
    Node *p=first;
    int x=0;
    if(!p)
    {
        return -10000;
    }
    else
    {
        x=p->data;
        if(x>maxi(p->next))
        {
            return x;
        }
        else
        {
            return maxi(p->next);
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    int A[]={1,2,3,4,5};
    linkedlist L1(A,5);
    L1.disp();
        sleep(4);
    L1.ins(2,100);
    L1.disp();
        sleep(4);
    L1.del(2);
    L1.disp();
        sleep(4);
    L1.len();
        sleep(4);
    return 0;
}
