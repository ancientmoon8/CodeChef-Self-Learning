#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0;
        long sum = 0;
        std::cin >> N;
        sum = (N * (N + 1)) / 2;
        if ((sum & 1) == 0)
        {
            std::cout << N << '\n';
        }
        else
        {
            std::cout << N - 1 << '\n';
        }
    }
}