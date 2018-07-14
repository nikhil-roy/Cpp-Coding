// #include <iostream>
// using namespace std;
// int n,flag;
// bool isSafe(int board[10][10], int row, int col){
//      int i,j;
//     for(i=0;i<row;i++)
//     if(board[i][col]) return false;
    
//     for(i=row, j=col;i>=0 && j>=0;i--,j--)
//     if(board[i][j]) return false;
    
//     for(i=row, j=col;i>=0 && j<n;i--,j++)
//     if(board[i][j]) return false;
    
//     return true;
// }

// void printBoard(int board[10][10]){
//     int arr[n] = {0};
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(board[i][j]){
//                 arr[i] = j+1;
//                 flag = 1;
                
//             }
//         }
       
//     }
//     if(flag==0) {
//         return;
//     }
    
//     cout<<"[";
//     for(int i = 0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<"]";
// }
// bool nQueens(int board[10][10], int row, int col){
//     if(row>=n){ 
//         printBoard(board);
//         cout<<" ";
//         return true;
//     }
//     for(int i=col;i<n;i++){
//         if(isSafe(board,row,i)){
            
//             board[row][i] = 1;
        
//             nQueens(board,row+1,0);
            
//             board[row][i] = 0;
//         }
        
//     }
//     return false;
// }
// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    cin>>n;
	    
//         int board[10][10]={0};
//         flag=0;
//         nQueens(board,0,0);
	       
// 	    if(flag==0) cout<<"-1";
// 	    cout<<endl;
// 	}
// 	return 0;
// }