//#include<iostream>
//#include <queue>
//#include <iterator>
//using namespace std;
//struct Tree{
//	int data;
//	struct Tree *left,*right;
//};
//queue<Tree*> qu;
//void levelOrder(Tree* root){
//	if(qu.empty()){
//		qu.push(root);
//	}
//	while(!qu.empty()){
//		Tree *temp = qu.front();
//		if(temp){
//		cout<<temp->data<<" ";
//		qu.push(temp->left);
//		qu.push(temp->right);
//	}
//		qu.pop();
//	}
//}
//Tree* newTree(int data){
//	Tree *temp = new Tree;
//	temp->data = data;
//	temp->left = NULL;
//	temp->right = NULL;
//	return temp;
//}
//
//int main(){
//	Tree * root = newTree(1);
//	root->left = newTree(2);
//	root->right = newTree(3);
//	Tree *temp = root->left;
//	temp->left = newTree(4);
//	temp->right = newTree(5);
//	temp = root->right;
//	temp->left = newTree(6);
//	temp->right = newTree(7);
//
//	levelOrder(root);
//
//	return 0;
//}
