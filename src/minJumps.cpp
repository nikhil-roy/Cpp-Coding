// #include <iostream>
// using namespace std;
// int minJumps(int arr[], int n){
//     if(n==0||arr[0]==0)
//         return -1;
        
//     int aux[n];
//     //fill_n(aux,aux+n,2147483647);
//     aux[0]=0;
//     for(int i=1;i<n;i++){
        
//         aux[i] = 2147483647;
        
//         for(int j=0;j<i;j++){
            
//             if(arr[j]>=(i-j)){
//             aux[i]=min(aux[j]+1,aux[i]);
//             break;
//             }
//         }
//     }
//     if (aux[n-1]==2147483647) return -1;
//     else return aux[n-1];
// }
// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n;
// 	    cin>>n;
// 	    int arr[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>arr[i];
// 	    }
// 	    cout<<minJumps(arr,n)<<endl;
// 	}
// 	return 0;
// }