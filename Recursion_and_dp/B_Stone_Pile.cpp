#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> divisors(int n)
{
	vector<int> divisor;
	for (int i = 1; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			divisor.push_back(i);
			if (i != n / i)
			{
				divisor.push_back(n / i);
			}
		}
	}
	return divisor;
}
bool is_prime(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i * i <= x; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
int gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}
int n;
int v[20];
int calculate(int idx, int left, int right)
{
	if (idx == n)
	{
		return abs(left - right);
	}
	int l = calculate(idx + 1, left + v[idx], right);
	int r = calculate(idx + 1, left, right + v[idx]);
	return min(l, r);
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int result = calculate(0, 0, 0);
	cout << result << "\n";
	return 0;
}
