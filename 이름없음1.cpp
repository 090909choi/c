#include<iostream>
#include<stack>
using namespace std;

int main()
{
	string ccc;
	int ans = 0;
	int temp = 0;
	stack<char> s;
	cin >> ccc;
	for(int i = 0;ccc[i];i++){
		if(ccc[i] == '('){
			if(ccc[i-1] == ')'){
			ans += temp;
			temp /= 2;
			s.pop();
			}
		}
		else if(ccc[i] == '['){
			if(ccc[i-1] == ']' ){
				temp/=2;
				s.pop();
			}
		}
		if(ccc[i-1] == '('){
			ans += temp;
			temp /= 2;
			s.pop();
		}
		
		if(ccc[i-1] == '[' ){
			temp/=3;
			s.pop();
		}
		if(ccc[i-1] == ')'){
			ans += temp;
			temp /= 2;
			s.pop();
		}
		
		if(ccc[i-1] == ']' ){
			temp/=3;
			s.pop();
		}
	}
		
}
