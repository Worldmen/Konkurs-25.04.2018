#define PI 3.14159265
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double  alpha, d, higher[100], lower[100], sumh=0,suml=0;
	int n, h = 0, l = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> alpha >> d;
		if (alpha > 0)
		{
			higher[h] = d *sin(alpha*PI/180);
			h++;
		}
		else if (alpha < 0)
		{
			lower[l] = d * sin((int)fabs(alpha)*PI/180);
			l++;
		}
	}
	for (int i = 0; i < h; i++)
		sumh += higher[i];
	cout << sumh / h << " ";
	for (int i = 0; i < l; i++)
		suml += lower[i];
	cout << suml / l;

    return 0;
}

