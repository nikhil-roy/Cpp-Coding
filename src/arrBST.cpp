// #include <iostream>
// using namespace std;
// int n = 0;
// struct Node{
//     int data;
//     struct Node *left,*right;
// };
// struct Node* newNode(int data){
//     struct Node *temp = new Node();
//     temp->data = data;
//     temp->left = NULL;
//     temp->right = NULL;
//     return temp;
// }
// struct Node* createBST(int* arr, int s,int e){
//     if(s>e)
//         return NULL;
//
//     struct Node* root=NULL;
//     int mid = (s+e)/2;
//     root = newNode(arr[mid]);
//     root->left = createBST(arr,s,mid-1);
//     root->right = createBST(arr,mid+1,e);
//
//     return root;
//
//
// }
// void preOrder(Node* root){
//     if(root){
//         cout<<root->data<<" ";
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    //int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++)
// 	        cin>>arr[i];
// 	        struct Node *temp = createBST(arr,0,n-1);
// 	        preOrder(temp);
// 	        cout<<endl;
//
// 	}
// 	return 0;
// }
