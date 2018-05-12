//#include <iostream>
//using namespace std;
//void helper(int arr[],int subArr[],int i);
//void allSubsets(int arr[]){
//	int subArr[5] = {0};
//	helper(arr,subArr,0);
//}
//void printArr(int arr[]){
//	cout<<"[ ";
//	for(int i=0;i<5;i++){
//		if(arr[i]!=0){
//			cout<<arr[i]<<" ";
//		}
//	}
//		cout<<"]"<<endl;
//}
//void helper(int arr[],int subArr[],int i){
//	if(i>4){
//		printArr(subArr);
//	}
//	else
//	{
//		subArr[i] = 0;
//		helper(arr,subArr,i+1);
//		subArr[i] = arr[i];
//		helper(arr,subArr,i+1);
//	}
//}
//int main(){
//	int arr[] = {1,2,3,4,5};
//	allSubsets(arr);
//	return 0;
//}
