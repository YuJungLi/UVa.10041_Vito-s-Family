#include <iostream>
#include <algorithm>
#include <math.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n--)
	{
		int r, num[500];
		cin >> r;
		for (int i = 0; i < r; i++)
			cin >> num[i];
		sort(num, num + r);
		int sum = 0, loc = num[r / 2];
		for (int i = 0; i < r; i++)
			sum += abs(loc - num[i]);
		cout << sum << endl;
	}
	return 0;
}