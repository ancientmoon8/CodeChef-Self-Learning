#include <iostream>
#include <vector>

int hardCash(long &K, std::vector<long> &A)
{
    long R = 0;
    for (int i = 0; i < A.size(); ++i)
    {
        R += A[i] % K;
    }
    return R % K;
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
        long K = 0;
        std::cin >> N >> K;
        std::vector<long> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << hardCash(K, A) << '\n';
    }
}