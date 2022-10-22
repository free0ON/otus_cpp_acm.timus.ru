/**
 * https://acm.timus.ru/problem.aspx?space=1&num=1264
 * 1264 Трудовые будни
 * DONE
 */
#include <iostream>

int main() {
    unsigned int N = 0, M = 0;
    std::cin >> N >> M;
    if (N <= 40000 && M <= 40000)
        std::cout << N * (M + 1);
    return 0;
}