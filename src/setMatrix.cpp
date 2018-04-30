//#include<iostream>
//using namespace std;
//void printArr(int arr[3][3], int n){
//		for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++){
//				cout<<arr[i][j]<<" ";
//			}
//			cout<<endl;
//		}
//}
//int main(){
//	int arr[3][3] = {1,1,1,1,0,1,1,1,1};
//	int arr1[3] = {0},arr2[3]= {0};
//	int n=3;
//	printArr(arr, n);
//
//	cout<<endl;
//
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++)
//		if(!arr[i][j])
//			arr1[i]=1;
//	}
//	for(int i=0;i<n;i++){
//			for(int j=0;j<n;j++)
//			if(!arr[j][i])
//				arr2[i]=1;
//		}
//	for(int i=0;i<n;i++){
//		if(arr1[i]){
//			for(int j=0;j<n;j++)
//				arr[i][j]=0;
//		}
//	}
//	for(int i=0;i<n;i++){
//			if(arr2[i]){
//				for(int j=0;j<n;j++)
//					arr[j][i]=0;
//			}
//		}
//
//	cout<<"After setting"<<endl<<endl;
//
//	printArr(arr, n);
//	return 0;
//}
