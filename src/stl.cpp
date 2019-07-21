// #include<iostream>
// #include<algorithm>
// #include<map>
// #include<climits>
// #include<iterator>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int arr[] = {12,4,2,66,7,34};
//     int n = sizeof(arr)/sizeof(int);
//     sort(arr+1,arr+5);
//     for(int i=0;i<6; i++)   cout << arr[i]<<" ";
//     cout<<endl;

//     reverse(arr,arr+6);
//     for(int i=0;i<6; i++)   cout << arr[i]<<" ";
//     cout<<endl;

//     string s = "abcd";
//     reverse(s.begin()+1,s.end()-1);
//     cout<<s<<endl;

//     sort(s.begin()+1,s.end());
//     cout<<s<<endl;

//     cout<<INT64_MAX<<endl;

//     map<int,int> m;
//     m[1] = 2;
//     if(m.count(2) == 0) cout<<"not saved"<<endl;

//     map<int,int>::iterator i;
//     for(i= m.begin();i!=m.end();i++){
//         cout<<(i->second);
//         cout<<endl;
//     }

//     string sarr[] = {"acbas","vbhf", "acbad", "geek","keeg","h"};
//     sort(sarr,sarr+6);
//     for(int i=0;i<6; i++)   cout << sarr[i]<<" ";
//     cout<<endl;

//     unordered_set<int> set1; 
//     for (int i=0; i<n; i++)
//         { 
//             if (set1.find(arr[i])==set1.end()) 
//             { 
//                 set1.insert(arr[i]); 
//                 cout << arr[i] << " "; 
//             } 
//         } 
// } 