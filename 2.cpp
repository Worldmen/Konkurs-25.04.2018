#include <iostream>

using namespace std;

int main()
{
	int n;
	int j[2], s[2], w[2], g[2];
	int t[2][2];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[0] >> s[1] >> w[0] >> w[1] >> g[0] >> g[1];
		t[0][0] = s[0] + w[0];
		t[0][1] = s[1] + w[1];
		t[1][0] = t[0][1] - g[0];
		t[1][1] = t[0][0] - g[1];
		cout << t[1][0] << " " << t[1][1] << endl;
	}


    return 0;
}

