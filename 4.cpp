#include <iostream>

using namespace std;

int sign(int x)
{
	if (x > 0) return 1;
	if (x == 0) return 0;
	if (x < 0) return -1;
}
int main()
{
	int x;
	cin >> x;
	int out = sign(x);
	cout << out;
}
