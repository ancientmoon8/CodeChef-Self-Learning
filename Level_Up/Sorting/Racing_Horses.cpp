#include <algorithm>
#include <iostream>
#include <vector>

long racingHorses(std::vector<long> &S)
{
    std::sort(S.begin(), S.end());
    long minDiff = 10e9;
    for (int i = 1; i < S.size(); ++i)
    {
        minDiff = std::min(minDiff, (S[i] - S[i - 1]));
    }
    return minDiff;
}

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
        std::vector<long> S(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> S[i];
        }
        std::cout << racingHorses(S) << '\n';
    }
}