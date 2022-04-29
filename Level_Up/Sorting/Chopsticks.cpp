#include <algorithm>
#include <iostream>
#include <vector>

int chopsticks(long &D, std::vector<long> &L)
{
    std::sort(L.begin(), L.end());
    int count = 0;
    for (int i = 0, j = 1; i < L.size() && j < L.size();)
    {
        if (L[j] - L[i] <= D)
        {
            count++;
            i += 2;
            j += 2;
        }
        else
        {
            i++;
            j++;
        }
    }
    return count;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N = 0;
    long D = 0;
    std::cin >> N >> D;
    std::vector<long> L(N);
    for (int i = 0; i < N; ++i)
    {
        std::cin >> L[i];
    }
    std::cout << chopsticks(D, L) << '\n';
}