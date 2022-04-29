#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        long A = 0, B = 0, C = 0, min = 0;
        std::cin >> A >> B >> C;
        min = std::min(A, B);
        min = std::min(min, C);
        std::cout << (A + B + C) - min << '\n';
    }
}