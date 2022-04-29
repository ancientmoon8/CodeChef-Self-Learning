#include <iostream>

bool chefAndFeedback(std::string &S)
{
    return ((S.find("010") != -1) || (S.find("101") != -1));
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
        std::cout << (chefAndFeedback(S) ? "Good" : "Bad") << '\n';
    }
}