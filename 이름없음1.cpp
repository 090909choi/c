#include<iostream>
#include<stack>
using namespace std;

int main(){
	int t;
	string s;
	cin >> t;
	stack<char> ps;
	for(int i  = 0;i<t;i++){
		cin >> s;
		for(int j  = 0;s[j];j++){
				if(ps.empty()){
					ps.push(s[j]);
				}
				else if(ps.top() ==  '(' && s[j] == ')'){
					ps.pop();
				}
				else{
					ps.push(s[j]);
				}
		}
		if(ps.empty()){
			cout << "Yes";
		}
		else{
			cout << "No";
		}
	}
	return 0;
}
