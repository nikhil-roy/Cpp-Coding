//#include<iostream>
//#include <stack>
//using namespace std;
//template <class T>
//class Queue{
//private:
//	stack<T> s1,s2;
//public:
//	Queue(){
//		cout<<"Constructor called"<<endl;
//	}
//	void push(T data){
//		s1.push(data);
//	}
//	void pop(){
//		if(s2.empty()){
//			while(!s1.empty()){
//				T top = s1.top();
//				s1.pop();
//				s2.push(top);
//			}
//		}
//		else{
//			s2.pop();
//		}
//	}
//	T peekFirst(){
//		if(s2.empty()){
//			while(!s1.empty()){
//							T top = s1.top();
//							s1.pop();
//							s2.push(top);
//						}
//			return s2.top();
//		}
//		else{
//			return s2.top();
//		}
//	}
//	int getSize(){
//		return s2.size()+s1.size();
//	}
//};
//int main(){
//	Queue<int> myQueue;
//	myQueue.push(1);
//	myQueue.push(2);
//	myQueue.push(3);
//	myQueue.push(4);
//	myQueue.push(5);
//
//	cout<<"Size: "<<myQueue.getSize()<<endl;
//	cout<<"Top: "<<myQueue.peekFirst()<<endl;
//	cout<<"Poping first"<<endl;
//
//	myQueue.pop();
//
//	cout<<"Size: "<<myQueue.getSize()<<endl;
//	cout<<"Top: "<<myQueue.peekFirst()<<endl;
//
//
//	return 0;
//}
