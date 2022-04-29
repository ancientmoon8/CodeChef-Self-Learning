#include <iostream>
#include <numeric>

int minimumNumberOfPizzas(int &N, int &K)
{
    if (N == K)
    {
        return 1;
    }
    return N / std::gcd(N, K);
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0, K = 0;
        std::cin >> N >> K;
        std::cout << minimumNumberOfPizzas(N, K) << '\n';
    }
}