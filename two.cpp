#include<iostream>
#include<cstdlib>

using namespace std;


//traversing a linked list recursively


struct node
{
int info;
node *next;
};


class SinglyLinkedList
{

node *head;

public:

SinglyLinkedList()
{
head=NULL;
}

node* insertAtbeg(int num)
{
node *ptr;

ptr=new node;
ptr->info=num;

if(head==NULL)
ptr->next=NULL;
else
ptr->next=head;

head=ptr;

return head;
}


void traverse(node *ptr)
{

if(ptr==NULL)
return;

else
{
cout<<endl<<ptr->info;
ptr=ptr->next;
traverse(ptr);
}

}

};


int main()
{
SinglyLinkedList sll;

int num,choice;
node *start;


while(1)
{

cout<<"\n1.Insertion at beginning"<<endl;
cout<<"\n2.Traverse"<<endl;
cout<<"\n3.Exit"<<endl;
cout<<"\nEnter your choice";
cin>>choice;

switch(choice)
{
case 1:
cout<<"Enter the number";
cin>>num;
start=sll.insertAtbeg(num);
break;

case 2:
sll.traverse(start);
break;

case 3:
exit(1);

}//switch

}//while




return 0;

}

