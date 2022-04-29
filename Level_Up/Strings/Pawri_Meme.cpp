#include <iostream>
#define partyString (pawri[i + 2] == 'r') && (pawri[i + 3] == 't') && (pawri[i + 4] == 'y')

std::string pawriMeme(std::string S)
{
    std::string pawri = S;
    for (int i = 0; i < pawri.length(); ++i)
    {
        if (pawri[i] == 'p' && pawri[i + 1] == 'a')
        {
            if (partyString)
            {
                pawri[i + 2] = 'w';
                pawri[i + 3] = 'r';
                pawri[i + 4] = 'i';
            }
        }
    }
    return pawri;
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
        std::cout << pawriMeme(S) << '\n';
    }
}