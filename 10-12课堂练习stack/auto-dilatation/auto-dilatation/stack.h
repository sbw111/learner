#include"Node.h"
#include<iostream>
using namespace std;
class stack1{
	public:
		stack1(){
			Node * head=new Node(0);
			this->head=head;
		}
		~stack1(){
			delete head;
		}
		void print();
		void push(int item);
		void pop();
		bool isempty();
		Node* head;
};