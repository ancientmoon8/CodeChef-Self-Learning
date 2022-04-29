#include <iostream>

bool chefAndTheWildcardMatching(std::string &X, std::string &Y)
{
    for (int i = 0; i < X.length(); ++i)
    {
        if (X[i] != Y[i] && (X[i] != '?' && Y[i] != '?'))
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
        std::string X, Y;
        std::cin >> X >> Y;
        std::cout << (chefAndTheWildcardMatching(X, Y) ? "Yes" : "No") << '\n';
    }
}