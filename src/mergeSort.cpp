// #include<iostream>
// using namespace std;

// void printArr(int arr[],int n){
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
// }

// void merge(int arr[],int l,int mid, int h){
//   int l_s = mid-l+1;
//   int h_s = h-mid;
//   int L[l_s],R[h_s];

//   for(int i=0;i<l_s;i++){
//     L[i] = arr[l+i];
//   }

//   for(int i=0;i<h_s;i++){
//     R[i] = arr[mid+i+1];
//   }
//   int i=0,j=0,k=l;
//   while(i<l_s && j<h_s){
//     if(L[i]<=R[j]){
//       arr[k] = L[i];
//       i++;
//     }
//     else{
//       arr[k] = R[j];
//       j++;
//     }
//     k++;
//   }
//   while(i<l_s){
//     arr[k] = L[i];
//     i++;
//     k++;
//   }

//   while(j<h_s){
//     arr[k] = R[j];
//     j++;
//     k++;
//   }
// }

// void _mergeSort(int arr[],int l,int h){
//   if(l<h){

//     int mid = (l+h)/2;

//     _mergeSort(arr,l,mid);
//     _mergeSort(arr,mid+1,h);
//     merge(arr,l,mid,h);
//   }
// }
// void mergeSort(int arr[],int n){
//   _mergeSort(arr,0,n-1);
// }
// int main(){

//   int arr[] = {9,3,1,5,7,4,2,8,6,10};

//   printArr(arr,10);

//   mergeSort(arr,10);

//   printArr(arr,10);

//   return 0;
// }
