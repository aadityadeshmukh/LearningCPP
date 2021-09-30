#include <iostream>
using namespace std;
struct Node{
	int data;
	Node * link;
};
void insert(Node*& head, int data){
	Node* ptrTemp;
	ptrTemp = new Node;
	ptrTemp->data = data;
	ptrTemp->link = head;
	head = ptrTemp;
}
int main(){
	Node headNode;
	Node* head;
	head = &headNode;
	head ->data = 20;
	head ->link = NULL;
	
	//cout << head->data << endl;
	//cout << head->link << endl;
	
	insert(head, 30);
	insert(head, 40);
	insert(head, 50);
	insert(head, 60);
	insert(head, 70);
	Node* temp = head;
	while(temp != NULL){
		cout << temp -> data << endl;
		temp = temp->link;
	}
	
}
