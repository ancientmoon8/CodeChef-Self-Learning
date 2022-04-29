#include <iostream>
#include <unordered_map>
#include <vector>

int chocolateMonger(int &x, std::vector<int> &A)
{
    std::unordered_map<int, int> um;
    for (int i = 0; i < A.size(); ++i)
    {
        um[A[i]]++;
    }
    for (int i = 0; i < A.size(); ++i)
    {
        if (x == 0)
        {
            break;
        }
        if (um[A[i]] > 1 && um[A[i]] <= x)
        {
            x -= (um[A[i]] - 1);
            um[A[i]] = 1;
        }
        else if (um[A[i]] > 1 && um[A[i]] > x)
        {
            um[A[i]] -= x;
            x = 0;
        }
    }
    return um.size() - x;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int n = 0, x = 0;
        std::cin >> n >> x;
        std::vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << chocolateMonger(x, A) << '\n';
    }
}