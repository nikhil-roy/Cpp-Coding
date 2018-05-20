//#include<iostream>
//#include <algorithm>
//using namespace std;
////void rotateString(string s){
////	int j=1;
////	for(int i =1;i<s.length();i++){
////		cout<<s.at(0);
////		int count = s.length()-1;
////		j=i;
////		while(count--){
////			if(j>=s.length()) j=1;
////			cout<<s.at(j);
////			j++;
////		}
////		cout<<" ";
////
////	}
////}
////void printPer(string s){
////	if(s.length()==1)
////	{
////		cout<<s;
////		return;
////	}
////	int n = s.length();
////	for(int i=0;i<n;i++){
////		char s2 = s.at(i);
////		char temp = s.at(0);
////		s[0] = s2;
////		s[i] = temp;
////		rotateString(s);
//////		cout<<endl;
////	}
////}
//
//void printPer(string s,int a,int b){
//	if(a==b)
//		cout<<s<<" ";
//	else
//		for(int i=a;i<=b;i++){
//			swap(s.at(a),s.at(i));
//			printPer(s, a+1, b);
//			swap(s.at(a),s.at(i));
//		}
////	cout<<" ";
//}
//
//int main(){
//	string s="bca";
//	sort(s.begin(),s.end());
////	s[0] = 'i';
////	cout<<s;
//	cin>>s;
//	printPer(s,0,s.length()-1);
//}
