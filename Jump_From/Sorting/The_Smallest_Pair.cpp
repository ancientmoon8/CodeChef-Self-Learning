#include <algorithm>
#include <iostream>
#include <vector>

int theSmallestPair(std::vector<int> &A)
{
    std::sort(A.begin(), A.end());
    return A[0] + A[1];
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
        std::cout << theSmallestPair(A) << '\n';
    }
}