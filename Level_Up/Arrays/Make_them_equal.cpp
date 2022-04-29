#include <algorithm>
#include <iostream>
#include <vector>

int makeThemEqual(std::vector<int> &A)
{
    int maxDiff = 0, max = *std::max_element(A.begin(), A.end());
    for (int i = 0; i < A.size(); ++i)
    {
        maxDiff = std::max(maxDiff, max - A[i]);
    }
    return maxDiff;
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
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << makeThemEqual(A) << '\n';
    }
}