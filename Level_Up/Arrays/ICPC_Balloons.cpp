#include <iostream>
#include <vector>

int ICPCBalloons(std::vector<int> &A)
{
    int count = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        if (count == 7)
        {
            return i;
        }
        if (A[i] >= 1 && A[i] <= 7)
        {
            count++;
        }
    }
    return A.size();
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
        std::cout << ICPCBalloons(A) << '\n';
    }
}