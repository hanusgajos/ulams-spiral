#include <iostream>

void spiral(int n)
{
    // std::cout << "siema rutujgtrjibrf" << n << std::endl;
    int x0 = (n + 1) / 2 - 1;
    int y0 = n / 2;
    std::cout << "n=" << n << ", x0=" << x0 << ", y0=" << y0 << std::endl;
}

int main(int, char **)
{
    int d;

    std::cin >> d;
    for (int i = 0; i < d; i++)
    {
        int n;
        std::cin >> n;
        spiral(n);
    }
}