#include <iostream>
#include <set>
#include <vector>

bool nobelPrize(int &M, std::vector<int> &A)
{
    std::set<int> s;
    for (int i = 0; i < A.size(); ++i)
    {
        s.insert(A[i]);
    }
    if (M > s.size())
    {
        return true;
    }
    else
    {
        return false;
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
        int N = 0, M = 0;
        std::cin >> N >> M;
        std::vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            std::cin >> A[i];
        }
        std::cout << (nobelPrize(M, A) ? "Yes" : "No") << '\n';
    }
}