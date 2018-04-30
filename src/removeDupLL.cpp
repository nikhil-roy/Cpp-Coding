//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
//struct Node{
//	int data;
//	struct Node *next;
//};
//struct Node* newNode(int data){
//	Node *temp = new Node;
//	temp->data = data;
//	temp->next = NULL;
//	return temp;
//}
//void printList(struct Node *head){
//	while(head!=NULL){
//		cout<<head->data;
//		head=head->next;
//		if(head)
//			cout<<" "<<"->"<<" ";
//	}
//}
//void removeDup(struct Node *head){
//	Node *curr = head;
//	Node *prev = NULL;
//	unordered_set<int> seen;
//	while(curr!=NULL){
//		if(seen.find(curr->data)!=seen.end()){
//			prev->next = curr->next;
//			curr = NULL;
//		}
//		else{
//			seen.insert(curr->data);
//			prev = curr;
//		}
//		curr = prev->next;
//	}
//}
//int main(){
//	struct Node *start = newNode(1);
//	start->next = newNode(2);
//	start->next->next = newNode(1);
//	start->next->next->next = newNode(4);
//	start->next->next->next->next = newNode(5);
//	start->next->next->next->next->next = newNode(2);
//	start->next->next->next->next->next->next = newNode(3);
//
//	printList(start);
//
//	removeDup(start);
//
//	cout<<endl;
//
//	printList(start);
//
//	return 0;
//}
