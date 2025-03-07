#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
	cin >> n;
	int ans = 0;
	int flag = 1;
	for(int i = 1;i <= n;i++)
	{
		int num = i;
		for(int j = 1;num;j++)
		{
			if(j%2 != (num%10)%2) break;
			num /= 10;
		}
		if(num == 0) ans++;
	}
	cout << ans;
	return 0;
}
