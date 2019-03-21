// #include <iostream>
// using namespace std;
// void minHeap(int arr[],int i,int n){
//     if(!arr || n<1) return;
//     int l = 2*i;
//     int r = l+1;
//     int largest = i;
//     if(l<n && arr[l]<arr[i])    largest = l;
//     if(r<n && arr[r]<arr[largest])  largest = r;
//     if(largest !=i){
//         swap(arr[i],arr[largest]);
//         minHeap(arr,largest,n);
//     }
// }
// void makeHeap(int arr[],int n){
//     if(!arr || n<2) return;
//     for(int i=n/2;i>=0;i--) minHeap(arr,i,n);
// }
// int getMin(int arr[],int n){
//     if(!arr || n<1) return -1;
//     int min = arr[0];
//     arr[0] = arr[n-1];
//     minHeap(arr,0,n-1);
//     return min;
    
// }
// void insert(int arr[],int n,int k){
//     if(!arr || n<1) return;
//     arr[n-1] = k;
//     makeHeap(arr,n);
// }
// int getMinCost(int arr[],int n){
//     int result = 0;
//     makeHeap(arr,n);
//     while(n>1){
//         int m1 = getMin(arr,n);
//         n--;
//         int m2 = getMin(arr,n);
//         n--;
//         result+=m1+m2;
//         n++;
//         insert(arr,n,m1+m2);
//     }
//     return result;
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
	    
// 	    for(int i=0;i<n;i++)    cin>>arr[i];
	    
// 	    if(n==1)    cout<<arr[0];
// 	    else if(n==2)   cout<<arr[0]+arr[1];
// 	    else cout<<getMinCost(arr,n);
// 	    cout<<endl;
	    
	    
// 	}
// 	return 0;
// }