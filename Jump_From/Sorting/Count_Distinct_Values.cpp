#include <iostream>
#include <unordered_set>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int N = 0;
    std::cin >> N;
    std::unordered_set<int> us;
    for (int i = 0; i < N; ++i)
    {
        int x = 0;
        std::cin >> x;
        us.insert(x);
    }
    std::cout << "2\n"
              << us.size() << '\n';
}