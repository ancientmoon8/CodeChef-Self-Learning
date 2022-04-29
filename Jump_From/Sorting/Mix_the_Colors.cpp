#include <iostream>
#include <unordered_map>
#include <vector>

#define int long long

int mixTheColors(std::vector<int> &A)
{
    int count = 0;
    std::unordered_map<int, int> m;
    for (int i = 0; i < A.size(); ++i)
    {
        m[A[i]]++;
    }
    for (auto &value : m)
    {
        count += value.second;
    }
    return count - m.size();
}

int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        long N = 0;
        std::cin >> N;
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << mixTheColors(A) << '\n';
    }
}