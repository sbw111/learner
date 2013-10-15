#include<iostream>
#include"stack.h"
using namespace std;
void stack1::push(int item){
	Node* p=new Node(item);
	p->next=head->next;
	head->next=p;
}
void stack1::pop(){
	Node* p=head->next;
	head->next=p->next;
	delete p;
}
bool stack1::isempty(){
	if(head->next==NULL) return true;
	else return false;
}
void stack1::print(){
	Node* p=head;
	while ((p=p->next)!=NULL){
		cout<<p->data<<' ';
//		p=p->next;
	}
	cout<<endl;
}