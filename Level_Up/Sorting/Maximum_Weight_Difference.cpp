#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int maximumWeightDifference(int &K, std::vector<int> &W)
{
    std::sort(W.begin(), W.end());
    int temp1 = std::accumulate(W.begin(), W.begin() + K, 0);
    int temp2 = std::accumulate(W.begin() + K, W.end(), 0);
    int temp3 = std::accumulate(W.end() - K, W.end(), 0);
    int temp4 = std::accumulate(W.begin(), W.end() - K, 0);
    return std::max(std::abs(temp3 - temp4), std::abs(temp1 - temp2));
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
        std::vector<int> W(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> W[i];
        }
        std::cout << maximumWeightDifference(K, W) << '\n';
    }
}