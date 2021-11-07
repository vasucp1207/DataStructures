#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node *next;
	
	node(int x){          
		data = x;
		next = NULL;
	}
};

node *insertEnd(node *head, int x){
	
	node *temp = new node(x);
	if(head == NULL) return temp;   // empty linked list
	
	node *curr = head;
	while(curr->next != NULL){
		curr = curr->next;
	}
	
	curr->next = temp;
	return head;
}

void display(node *head){
	
	node *curr = head;
	while(curr != NULL){
		cout << curr->data << " ";
		curr = curr->next;
	}
}

int main(){

	node *head = NULL;    // empty linked list
	
	head = insertEnd(head, 10);
	head = insertEnd(head, 20);
	head = insertEnd(head, 30);
	
	display(head);
	

return 0;
}
