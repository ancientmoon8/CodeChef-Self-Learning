#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int daanishAndProblems(std::vector<int> &A, int &K)
{
    for (int i = A.size() - 1; i >= 0; --i)
    {
        if (K == 0)
        {
            break;
        }
        if (A[i] > K)
        {
            A[i] -= K;
            K = 0;
        }
        else
        {
            K -= A[i];
            A[i] = 0;
        }
    }
    for (int i = A.size() - 1; i >= 0; --i)
    {
        if (A[i] > 0)
        {
            return i + 1;
        }
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        std::vector<int> A(10);
        for (int i = 0; i < 10; ++i)
        {
            std::cin >> A[i];
        }
        int K = 0;
        std::cin >> K;
        std::cout << daanishAndProblems(A, K) << '\n';
    }
}