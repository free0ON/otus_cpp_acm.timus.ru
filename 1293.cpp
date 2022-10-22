/**
 * https://acm.timus.ru/problem.aspx?space=1&num=1293
 * 1293 Эния
 * DONE
 */
#include <iostream>

int main() {
    unsigned int N = 0, A = 0, B = 0;
    std::cin >> N >> A >> B;
    if (N >= 1 && N <= 100 && A >= 1 &&  A <= 100 && B >= 1 && B <= 100)
        std::cout << 2*N*A*B;
    return 0;
}