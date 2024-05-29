#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,c[10001],m;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> c[i];
	}
	cin >> m;
	sort(c,c+n);
	int left = 0,right = n - 1;
	while(left < right){
		if(c[left] + c[right] == m){
			cout << c[left] << " " << c[right];
			return 0;
		}
		else if(c[left] + c[right] < m)
		{
			left++;
		}
		else{
			right--;
		}
	}
	printf("-1");
	return 0;
}
