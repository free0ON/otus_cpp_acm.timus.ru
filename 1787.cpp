/**
 * https://acm.timus.ru/problem.aspx?space=1&num=1787
 * 1787 Поворот на МЕГУ
 * DONE
 */

#include <iostream>

int main() {
    int k, n;
    int InputA = 0, a = 0;
    int TotalWaiting = 0;
    std::cin >> k >> n;
    if( (n >= 0 && n <= 100) && k >= 1)
        for (int i = 0; i < n; i++)
        {
            std::cin >> InputA;
            if( InputA >= 0 && InputA <= 100)
                a = InputA;
            else a = 0;
            if ((TotalWaiting + a - k) > 0)
                TotalWaiting += a - k;
            else
                TotalWaiting = 0;
        }
    std::cout << TotalWaiting;
    return 0;
}