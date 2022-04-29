#include <iostream>
#include <unordered_map>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int N = 0;
        std::cin >> N;
        std::vector<long> A(N);
        std::unordered_map<long, int> um;
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
            um[A[i]]++;
        }
        if (N <= 2)
        {
            std::cout << 0 << '\n';
            continue;
        }
        int maxFr = 0;
        for (int i = 0; i < N; ++i)
        {
            maxFr = std::max(maxFr, um[A[i]]);
        }
        std::cout << std::min(N - maxFr, N - 2) << '\n';
    }
}