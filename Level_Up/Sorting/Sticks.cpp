#include <iostream>
#include <map>
#include <vector>

int sticks(std::vector<int> &A)
{
    std::map<int, int> m;
    for (int i = 0; i < A.size(); ++i)
    {
        m[A[i]]++;
    }
    int count = 0, side1 = 0, side2 = 0;
    for (auto itr = m.rbegin(); itr != m.rend(); ++itr)
    {
        if (itr->second >= 2 && side1 == 0)
        {
            side1 = itr->first;
            if (itr->second >= 4)
            {
                return side1 * side1;
            }
            count++;
        }
        if (itr->first != side1 && itr->second >= 2)
        {
            side2 = itr->first;
            count++;
            return side1 * side2;
        }
    }
    if (count < 2)
    {
        return -1;
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
        int N = 0;
        std::cin >> N;
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << sticks(A) << '\n';
    }
}