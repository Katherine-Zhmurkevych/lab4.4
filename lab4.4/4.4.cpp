#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int xp, xk, R, dx, x, y;
	cout << "xp="; cin >> xp;
	cout << "xk="; cin >> xk;
	cout << "R="; cin >> R;
	cout << "dx="; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x >= -1)
			y = -x - 1;
		else
			if (x >= -1 && x <= 1)
				y = 0;
			else
				if (x >= 1 && x <= 1 + 2 * R)
					y = sqrt(pow(R, 2) - pow((x - 1 - R), 2));
				else
					y = (-x + 1 + 2 * R) / (6 - 2 * R);
		cout << "|" << setw(7) << setprecision(2) << x
					<< " |" << setw(10) << setprecision(3) << y
					<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	}
