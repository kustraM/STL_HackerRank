#include <set>
#include <iostream>

int main()
{
    int N, y, x;
    std::set<int> set;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> y >> x;
        switch (y)
        {
        case 1:
            set.insert(x);
            break;
        case 2:
            set.erase(x);
            break;
        case 3:
            auto search = set.find(x);
            if (search != set.end())
            {
                std::cout << "Yes " << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
            break;
        }
    }
}
