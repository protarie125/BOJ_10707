#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d, p;
	cin >> a >> b >> c >> d >> p;

	auto x = a * p;
	auto y = b;
	if (c < p) {
		y += d * (p - c);
	}

	cout << (x < y ? x : y);

	return 0;
}