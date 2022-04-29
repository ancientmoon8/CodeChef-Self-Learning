#include <iostream>

bool snakeProcession(std::string &S)
{
    int H = 0, T = 0;
    for (int i = 0; i < S.length(); ++i)
    {
        if (S[i] == '.')
        {
            continue;
        }
        else if (S[i] == 'H')
        {
            H++;
        }
        else if (S[i] == 'T')
        {
            T++;
        }
        if (T > H)
        {
            return false;
        }
        if (H - T == 2)
        {
            return false;
        }
    }
    if (H > T)
    {
        return false;
    }
    if (H == T)
    {
        return true;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int R = 0;
    std::cin >> R;
    while (R--)
    {
        int L = 0;
        std::cin >> L;
        std::string S;
        std::cin >> S;
        std::cout << (snakeProcession(S) ? "Valid" : "Invalid") << '\n';
    }
}