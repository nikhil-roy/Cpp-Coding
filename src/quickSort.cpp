// #include <iostream>
// #include<bits/stdc++.h>

// using namespace std;

// void printArray(int arr[],int n){
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<endl;
// }

// int partition(int arr[],int l, int h){
// 	int pivot = h;
// 	int low = l-1;
// 	int high = l;
// 	while(high<pivot){
// 		if(arr[high]<arr[pivot]){
// 			low++;
// 			swap(arr[low],arr[high]);
// 		}
// 		high++;
// 	}
// 	swap(arr[pivot],arr[low+1]);
// 	return low+1;
// }

// void _quickSort(int arr[],int l,int h){
// 	if(l<h){
// 		int pivot = partition(arr,l,h);
// 		_quickSort(arr,l,pivot-1);
// 		_quickSort(arr,pivot+1,h);
// 	}
// }

// void quickSort(int arr[], int n){
// 	_quickSort(arr,0,n-1);
// }

// void insertionSort(int arr[], int n){
	
// }

// int main(){
// 	int arr[] = {1,3,7,9,10,8,2,4,6,5};
// 	printArray(arr,10);
// 	quickSort(arr,10);
// 	printArray(arr,10);	
// 	return 0;
// }
