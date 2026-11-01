#include <cstdio>

int n, c;
bool a[350378]; // a[i] == true 表示 i 不是素数

int main() {
	scanf("%d", &n);

	for (int i = 2; i < 350378; i++) {
		if (!a[i]) {          // i 是素数
			++c;              // 第 c 个素数
			if (c == n) {     // 找到第 n 个素数
				printf("%d", i);
				return 0;
			}

			// 筛掉 i 的倍数
			for (int j = i * 2; j < 350378; j += i) {
				a[j] = true;
			}
		}
	}

	return 0;
}