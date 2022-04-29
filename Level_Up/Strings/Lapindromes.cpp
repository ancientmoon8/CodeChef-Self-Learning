#include <iostream>
#include <unordered_map>

bool lapindromes(std::string &S)
{
    std::unordered_map<char, int> um1;
    std::unordered_map<char, int> um2;
    for (int i = 0, j = S.length() - 1; i < j; ++i, --j)
    {
        um1[S[i]]++;
        um2[S[j]]++;
    }
    for (int i = 0; i < S.length() / 2; ++i)
    {
        if (um1[S[i]] != um2[S[i]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        std::string S;
        std::cin >> S;
        std::cout << (lapindromes(S) ? "YES" : "NO") << '\n';
    }
}