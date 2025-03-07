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
		for(int j = 1;num;j++)//j为位数，例如：1是第一位个位，2为第二位百位
		{
			if(j%2 != (num%10)%2) break;//核心判断，位数与对应数字的奇偶性相同
			num /= 10;//要注意判断思路，每次都要从最后一位判断，本次过了才继续下一位的判断，所以要默认是好数来判断，期间有一项不符合就跳出
		}
		if(num == 0) ans++;
	}
	cout << ans;
	return 0;
}
