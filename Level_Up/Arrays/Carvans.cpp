#include <iostream>
#include <vector>

int carvans(std::vector<int> &A)
{
    int count = 1, min = A[0];
    for (int i = 1; i < A.size(); ++i)
    {
        if (A[i] <= min)
        {
            count++;
        }
        min = std::min(min, A[i]);
    }
    return count;
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
        std::cout << carvans(A) << '\n';
    }
}