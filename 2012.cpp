/**
 * https://acm.timus.ru/problem.aspx?space=1&num=2012
 * 2012 Про Гришу Н.
 *
 */
#include <iostream>

int main() {
    const unsigned int Max = 12;
    const unsigned  int AllTime = 5 * 60;
    unsigned int f = 0;
    std::cin >> f;
    if( f <= 11 )
    {
        if (2*60 + 45*(Max - f - 1) <= AllTime )
            std::cout << "YES";
        else
            std::cout << "NO";
    }
    return 0;
}