// #include <iostream>
// #include<algorithm>
// using namespace std;
// int printWays(int arr[],int n,int v){
//     int res[v+1]={0};
//     res[0]=1;
//     for(int i=0;i<n;i++){
//         for(int j=arr[i];j<=v;j++){
//             res[j]+=res[j-arr[i]];
//             }
//         }
//     return res[v];
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    int v;
// 	    cin>>v;
// 	    sort(arr,arr+n);
// 	    cout<<printWays(arr,n,v)<<endl;
	    
// 	}
// 	return 0;
// }