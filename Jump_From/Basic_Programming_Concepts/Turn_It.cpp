#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int T = 0;
    std::cin >> T;
    while (T--)
    {
        int U = 0, V = 0, A = 0, S = 0;
        std::cin >> U >> V >> A >> S;
        std::cout << (((U * U - 2 * A * S) <= (V * V)) ? "Yes" : "No") << '\n';
    }
}