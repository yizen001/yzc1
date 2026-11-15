#include "is_prime.h"
#include <bits/stdc++.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(65001);  // 让 Windows 控制台按 UTF-8 解读输出，避免中文乱码
#endif
    std::cout << std::boolalpha;
    std::cout << "17 是素数吗? " << isPrime(17) << "\n";  // true
    std::cout << "20 是素数吗? " << isPrime(20) << "\n";  // false
    return 0;
}
