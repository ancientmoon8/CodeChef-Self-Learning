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
        int N = 0, M = 0, X = 0;
        std::cin >> N >> M >> X;
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
            A[i] -= M;
        }
        int K = 0;
        std::vector<int> qual;
        for (int i = 1; i <= A.size(); ++i)
        {
            if (A[i - 1] >= 0)
            {
                ++K;
                qual.push_back(i);
                A[i - 1] = INT_MIN;
            }
        }
        if (K < X)
        {
            while (K < X)
            {
                auto ptr2 = std::max_element(A.begin(), A.end());
                auto ptr1 = A.begin();
                K++;
                qual.push_back((ptr2 - ptr1) + 1);
                *ptr2 = INT_MIN;
            }
        }
        std::cout << K << ' ';
        std::sort(qual.begin(), qual.end());
        for (int i = 0; i < K; ++i)
        {
            std::cout << qual[i] << ' ';
        }
        std::cout << '\n';
    }
}