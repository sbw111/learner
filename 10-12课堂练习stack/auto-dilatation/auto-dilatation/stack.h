#include"Node.h"
using namespace std;
class stack1{
	public:
		stack1(){
			Node* head=new Node(0);
//			cout<<head->data;
		}
		~stack1(){
			delete head;
		}
		void print();
		void push(int item);
		void pop();
		bool isempty();
	private:
		Node* head;
};