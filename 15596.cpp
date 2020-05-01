#include <vector>
long long sum(std::vector<int>& a) {
	long long ans = 0;
	while (!a.empty()) {
		ans += a.back();
		a.pop_back();
	}
	return ans;
}