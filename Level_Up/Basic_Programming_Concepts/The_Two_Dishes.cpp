#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, S = 0;
        std::cin >> N >> S;
        if (N == S)
        {
            std::cout << N << '\n';
        }
        else if (N < S)
        {
            std::cout << 2 * N - S << '\n';
        }
        else
        {
            std::cout << S << '\n';
        }
    }
    return 0;
}
