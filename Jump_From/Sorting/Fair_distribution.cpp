#include <algorithm>
#include <iostream>
#include <vector>

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
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::sort(A.begin(), A.end());
        int minDiff = INT_MAX;
        for (int i = 0; i <= N - K; ++i)
        {
            minDiff = std::min(minDiff, A[i + K - 1] - A[i]);
        }
        std::cout << minDiff << '\n';
    }
}