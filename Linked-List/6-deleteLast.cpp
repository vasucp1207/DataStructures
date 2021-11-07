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

node* deleteLast(node *head){
	
	if(head == NULL) return NULL;      // empty
	if(head->next == NULL){            // single node
		delete(head);
		return NULL;
	}
	
	node *curr = head;
	while(curr->next->next != NULL){
		curr = curr->next;
	}
	
	delete(curr->next);
	curr->next = NULL;
	
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

	node *head = new node(10);
	node *temp1 = new node(20);
	node *temp2 = new node(30);
	node *temp3 = new node(40);
	
	head->next = temp1;
	temp1->next = temp2;
	temp2->next = temp3;
	
	head = deleteLast(head);
	
	display(head);

return 0;
}
