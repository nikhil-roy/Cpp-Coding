//#include <iostream>
//#include <stack>
//using namespace std;
//stack<int> sortStack(stack<int> s){
//	stack<int> s1;
//	while(!s.empty()){
//		int temp = s.top();
//		s.pop();
//		if(!s1.empty() && s1.top()>temp){
//		while(!s1.empty() && s1.top()>temp){
//			s.push(s1.top());
//			s1.pop();
//		}
//
//	  }
//		s1.push(temp);
//	}
//	return s1;
//}
//
//void printStack(stack<int> s){
//	while(!s.empty()){
//		cout<<s.top()<<" ";
//		s.pop();
//	}
//}
//int main(){
//	stack<int> s;
//	s.push(1);
//	s.push(4);
//	s.push(21);
//	s.push(9);
//	s.push(56);
//	s.push(7);
//	s.push(31);
//	printStack(s);
//	cout<<endl;
//	stack<int> s1 = sortStack(s);
////	cout<<s1.top();
//	printStack(s1);
//	return 0;
//}
