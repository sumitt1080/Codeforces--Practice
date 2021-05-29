#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	if (a.length() != b.length())
		cout << "NO" << endl;
	else
	{
		int flag = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] != b[a.length() - i - 1])
			{
				cout << "NO" << endl;
				break;
			}
			else flag++;
		}
		if (flag == a.length())
			cout << "YES" << endl;
	}
}