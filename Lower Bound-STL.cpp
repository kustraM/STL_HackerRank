#include <vector>
#include <iostream>

int main()
{
    int N, x;
    std::vector<int> v;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }
    int Q, y;
    std::cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        bool exist = 0;
        std::cin >> y;
        for (int a = 0; a < v.size(); a++)
        {
            if (v[a] == y)
            {
                std::cout << "Yes " << a + 1 << std::endl;
                exist = 1;
                break;
            }
        }
        if (exist == 0)
        {
            std::cout << "No ";
            std::vector<int>::iterator Y;
            Y = lower_bound(v.begin(), v.end(), y);
            std::cout << Y - v.begin() + 1 << std::endl;
        }
    }
}
