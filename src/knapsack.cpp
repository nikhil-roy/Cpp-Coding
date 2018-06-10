#include<iostream>
// #include<algorithm>
// using namespace std;
// int kp(int av[],int aw[],int n,int w){
//     int arr[n+1][w+1];
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=w;j++){
//             if(i==0 || j==0){
//                 arr[i][j] = 0;
                
//             }
//            else if (aw[i-1]<=j)
                
//                 arr[i][j] = max(arr[i-1][j-aw[i-1]]+av[i-1],arr[i-1][j]);
//                 else
//                 arr[i][j] = arr[i-1][j];
//         }
        
//     }
//     return arr[n][w];
// }
// int main(){
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n;
// 		cin>>n;
// 		int w;
// 		cin>>w;
// 		int av[n];
// 		for(int i=0;i<n;i++){
// 			cin>>av[i];
// 		}
// 		int aw[n];
// 		for(int i=0;i<n;i++){
// 			cin>>aw[i];
// 		}
// 		cout<<(kp(av,aw,n,w))<<endl;
// 	}
// 	return 0;
// }