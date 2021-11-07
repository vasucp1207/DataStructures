#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	node* next;
	
	node(int x){
		data = x;
		next = NULL;
	}
};

void display(node* head){
	
	if(head == NULL) return ;
	
	node* curr = head;
	cout << curr->data << " ";       // curr->data == head->data
	curr = curr->next;             // curr->data != head->data
	
	while(curr->data != head->data){
		cout << curr->data << " ";
		curr = curr->next;
	}
}

node* deleteFirst(node* head){
	
	if(head == NULL || head->next == head){
		return NULL;
	}
	else{
		head->data = head->next->data;
		node* temp = head->next;
		head->next = head->next->next;
		delete(temp);
		return head;   
	} 
}

int main(){
	
	node* head = new node(10);
	node* temp1 = new node(20);
	node* temp2 = new node(30);
	
	head->next = temp1;
	temp1->next = temp2;
	temp2->next = head;
	
	deleteFirst(head);
	display(head);
	
	

return 0;
}
