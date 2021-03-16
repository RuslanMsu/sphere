#include <iostream>

using namespace std;

int gcd (long long a, long long b, long long & x, long long & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	long long x1, y1;
	long long  d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

int main() {
	long long  p , m;
	cin >> p >> m;
	long long x, y;
	long long g = gcd (p, m, x, y);
	if (g != 1)
		cout << "no solution";
	else {
		x = (x % m + m) % m;
		cout << x;
	}
}
