/**
 * https://acm.timus.ru/problem.aspx?space=1&num=1785
 * 1785 Трудности локализации
 * DONE
 */
#include <iostream>

struct Monster {
    int min;
    int max;
    std::string Name;
    void PrintTranslation(unsigned int N) {
        if( N >= min && N <= max)
            std::cout << Name;
    }
};

int main() {
    unsigned int NumOfMonsters;
    std::cin >> NumOfMonsters;
    std::string Answer;
    Monster Monsters[9] = {
            { 1, 4, "few" },
            { 5, 9, "several" },
            { 10, 19, "pack" },
            { 20, 49, "lots" },
            { 50, 99, "horde" },
            { 100, 249, "throng" },
            { 250, 499, "swarm" },
            { 500, 999, "zounds" },
            { 1000, 2000, "legion" }
    };
    for(int i = 0; i < 9; i++)
        Monsters[i].PrintTranslation(NumOfMonsters);

    return 0;
}