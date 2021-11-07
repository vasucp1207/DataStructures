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

node* insertEnd(node* head, int x){
	
	node* temp = new node(x);
	if(head == NULL){
		temp->next = temp;
		return temp;
	}
	else{
		
		temp->next = head->next;
		head->next = temp;
		int t = head->data;
		head->data = temp->data;
		temp->data = t;   
		
		return temp;      // the only change from insetBegin, here we change the head ptr
	} 
}

int main(){
	
	node* head = new node(10);
	node* temp1 = new node(20);
	node* temp2 = new node(30);
	
	head->next = temp1;
	temp1->next = temp2;
	temp2->next = head;
	
	head = insertEnd(head, 5);
	display(head);
	
	

return 0;
}
