#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int L = 0, R = 0;
        std::cin >> L >> R;
        std::cout << (R + R) - (L + L) + 1 << '\n';
    }
}