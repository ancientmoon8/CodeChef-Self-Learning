#include <algorithm>
#include <iostream>
#include <unordered_set>

struct post
{
    int f;
    int p;
    std::string s;

    bool operator<(const post &P)
    {
        if (p > P.p)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N = 0, M = 0;
    std::cin >> N >> M;
    std::unordered_set<int> A;
    for (int i = 0; i < N; ++i)
    {
        int x = 0;
        std::cin >> x;
        A.insert(x);
    }
    std::vector<post> p(M);
    for (int i = 0; i < M; ++i)
    {
        int x = 0, y = 0;
        std::string z;
        std::cin >> x >> y >> z;
        p[i].f = x, p[i].p = y, p[i].s = z;
    }
    std::sort(p.begin(), p.end());
    for (int i = 0; i < M; ++i)
    {
        if (std::find(A.begin(), A.end(), p[i].f) != A.end())
        {
            std::cout << p[i].s << '\n';
        }
    }
    for (int i = 0; i < M; ++i)
    {
        if (std::find(A.begin(), A.end(), p[i].f) == A.end())
        {
            std::cout << p[i].s << '\n';
        }
    }
    std::cout << '\n';
}