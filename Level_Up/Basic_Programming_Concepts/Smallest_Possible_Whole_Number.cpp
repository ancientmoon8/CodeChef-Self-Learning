#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        long N = 0, K = 0;
        std::cin >> N >> K;
        std::cout << ((K == 0) ? N : N % K) << '\n';
    }
}