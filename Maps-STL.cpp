#include <map>
#include <iostream>

int main()
{
    int N, type, y;
    std::string x;
    std::map<std::string, int> map;
    std::map<std::string, int>::iterator it;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> type;
        switch (type)
        {
        case 1:
            std::cin >> x >> y;
            if (map.find(x) != map.end())
                map[x] += y;
            else
                map.insert(std::make_pair(x, y));
            break;
        case 2:
            std::cin >> x;
            map.erase(x);
            break;
        case 3:
            std::cin >> x;
            if (map.find(x) != map.end())
                std::cout << map[x] << std::endl;
            else
                std::cout << "0" << std::endl;
            break;
        }
    }
}
