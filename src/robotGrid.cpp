//#include <iostream>
//using namespace std;
//
//int countSteps(int n,int m){
//    int arr[n][m] = {0};
//    for(int i=0;i<m;i++){
//        arr[0][i] = 1;
//    }
//    for(int i=1;i<n;i++){
//        for(int j=0;j<m;j++){
//            if(j!=0)
//            arr[i][j] =  ( arr[i-1][j] + arr[i][j-1] ) % 1000000007 ;
//            else
//            arr[i][j] = arr[i-1][j] % (1000000007);
//        }
//    }
//    return arr[n-1][m-1];
//}
//int main() {
//	int t;
//	cin>>t;
//	while(t--){
//	    int m,n;
//	    cin>>n>>m;
//	    cout<<countSteps(n,m);
//	    cout<<endl;
//	}
//	return 0;
//}
