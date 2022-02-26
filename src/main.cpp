#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto sum = int{ 0 };
	auto m = int{ 987654321 };
	auto ct = int{ 0 };
	for (int i = 0; i < 7; ++i) {
		int x;
		cin >> x;

		if (1 == x % 2) {
			sum += x;
			ct += 1;

			if (x < m) {
				m = x;
			}
		}
	}

	if (0 == ct) {
		cout << -1;
		return 0;
	}

	cout << sum << '\n'
		<< m;

	return 0;
}