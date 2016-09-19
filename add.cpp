#include <iostream>

int main()
{
    float result = 0;
    for(int i = 0; i < 1e6; i++)
    {
        result += i;
    }

    std::cout << result;
    return 0;
}

