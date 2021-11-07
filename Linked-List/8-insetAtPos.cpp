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

void display(node *head){
	
	node *curr = head;
	while(curr != NULL){
		cout << curr->data << " ";
		curr = curr->next;
	}
}

node* insertPos(node *head, int pos, int x){
	
	node *temp = new node(x);
	
	if(pos == 1){    // insert at begin
		temp->next = head;
		return temp;
	}
	
	node* curr = head;
	// pos - 2 for holding the previous node of pos
	for(int i = 1; i <= pos - 2 && curr != NULL; i++){
		curr = curr->next;
	}
	
	if(curr == NULL) return head;   // pos is > list_size + 1, beyond the linked list
	
	temp->next = curr->next;
	curr->next = temp;
	
	return head;
}

int main(){
	
	node *head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	
	head = insertPos(head, 3, 50);
	
	display(head);

return 0;
}
