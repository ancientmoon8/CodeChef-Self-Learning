#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int A = 0, B = 0, A1 = 0, B1 = 0, A2 = 0, B2 = 0, proLang = 0;
        std::cin >> A >> B >> A1 >> B1 >> A2 >> B2;
        if ((A ^ B) == (A1 ^ B1))
        {
            proLang = 1;
        }
        if ((A ^ B) == (A2 ^ B2))
        {
            proLang = 2;
        }
        std::cout << proLang << '\n';
    }
}