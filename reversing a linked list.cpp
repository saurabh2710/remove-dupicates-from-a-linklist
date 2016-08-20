#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
node *start=NULL;
class test
{
	public:
		void insert(int);
		void reverse();
		void display();
};
void test::insert(int d)
{
	node *ptr=new node;
	ptr->data=d;
	ptr->next=NULL;
	if(start==NULL)
	{
		start=ptr;
		return;
	}
	node *p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
}
void test::reverse()
{
	node *current=start;
	node *next;
	node *prev=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	start=prev;
}
void test::display()
{
	node *p=start;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}
main()
{
	test t;
	int n,d;
	cout<<"how many nodes u want to enter ???"<<endl;
	cin>>n;
	cout<<"enter the data"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>d;
		t.insert(d);
	}
	t.reverse();
	t.display();
}
