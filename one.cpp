#include<iostream>
#include<cstdlib>

using namespace std;


class SinglyLinkedList
{

private:

struct node
{
int info;
node *next;
};

node *head;

public:

SinglyLinkedList()
{
head=NULL;
}

void insertAtbeg(int num)
{
node *ptr;

ptr=new node;
ptr->info=num;

if(head==NULL)
ptr->next=NULL;
else
ptr->next=head;

head=ptr;
}



void traverse()
{
node *ptr;

ptr=head;

while(ptr!=NULL)
{
cout<<endl<<ptr->info;
ptr=ptr->next;
}

}

};




int main()
{
SinglyLinkedList sll;

int num,choice;

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
sll.insertAtbeg(num);
break;

case 2:
sll.traverse();
break;

case 3:
exit(1);

}//switch

}//while

return 0;

}

