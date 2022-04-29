#include <iostream>
#include <unordered_set>

bool password(std::string &S)
{
    std::unordered_set<char> us = {'@', '#', '%', '&', '?'};
    if (S.length() < 10)
    {
        return false;
    }
    int lcl = 0;
    if (S[0] >= 'a' && S[0] <= 'z')
    {
        lcl++;
    }
    if (S[S.length() - 1] >= 'a' && S[S.length() - 1] <= 'z')
    {
        lcl++;
    }
    int ucl = 0, digit = 0, sc = 0;
    for (int i = 1; i < S.length() - 1; ++i)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            lcl++;
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            ucl++;
        }
        else if (S[i] >= '0' && S[i] <= '9')
        {
            digit++;
        }
        else if (us.find(S[i]) != us.end())
        {
            sc++;
        }
        if (lcl > 0 && ucl > 0 && digit > 0 && sc > 0)
        {
            return true;
        }
    }
    return false;
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
        std::cout << (password(S) ? "YES" : "NO") << '\n';
    }
}