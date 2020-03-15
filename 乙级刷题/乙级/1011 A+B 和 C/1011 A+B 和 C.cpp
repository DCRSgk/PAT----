#include <cstdio>  //实在想不到办法了 用了long long数据类型
int main() {
	int T;
	scanf("%d", &T);
	for (int i = 1; i <= T; i++) {
		long long A, B, C;
		scanf("%lld %lld %lld", &A, &B, &C);
		if (A + B > C) {
			printf("Case #%d: true\n", i);
		}
		else printf("Case #%d: false\n", i);
	}
	return 0;
}