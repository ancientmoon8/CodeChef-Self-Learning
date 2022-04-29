#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int maximiseTheSubsequenceSum(int &K, std::vector<int> &A)
{
    int sum = 0;
    std::sort(A.begin(), A.end());
    for (int i = 0; i < K; ++i)
    {
        if (A[i] < 0)
        {
            A[i] *= -1;
        }
    }
    for (int i = 0; i < A.size(); ++i)
    {
        if (A[i] > 0)
        {
            sum += A[i];
        }
    }
    return sum;
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
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << maximiseTheSubsequenceSum(K, A) << '\n';
    }
}