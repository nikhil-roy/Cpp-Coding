// #include <iostream>
// using namespace std;
// int LCS(int arr[],int n){
//     int aux[n];
//     fill_n(aux, n, 1); 
//     int i=0,j=1;
//     while(j<n){
//         while(i<j){
//             if(arr[i]<arr[j]){
//                 aux[j] = max(aux[i]+1,aux[j]);
//             }
//             i++;
//         }
//         j++;
//         i=0;
//     }
//     int max = 0;
//     for(int i=0;i<n;i++){
//         if(aux[i]>max)
//         max = aux[i];
//     }
//     return max;
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
// 	    cout<<LCS(arr,n)<<endl;
// 	}
// 	return 0;
// }