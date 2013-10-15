#include<iostream>
class Node{
	public:
		Node(int n=0){
			data=n; next=NULL;
		};
		int data;
		Node* next;
}; 