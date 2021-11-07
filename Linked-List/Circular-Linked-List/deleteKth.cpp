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

node* deleteKth(node* head, int k){
	if(head == NULL) return NULL;
	if(k == 1) return deleteFirst(head);
	
	node* curr = head;
	for(int i = 0; i < k - 2; i++){
		curr = curr->next;
	}
	
	node* temp = curr->next;
	curr->next = curr->next->next;
	delete(temp);
	return head;
}

int main(){
	
	node* head = new node(10);
	node* temp1 = new node(20);
	node* temp2 = new node(30);
	node* temp3 = new node(40);
	
	head->next = temp1;
	temp1->next = temp2;
	temp2->next = temp3;
	temp3->next = head;
	
	deleteKth(head, 3);
	display(head);
	
	

return 0;
}
