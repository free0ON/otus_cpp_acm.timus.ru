/**
 * https://acm.timus.ru/problem.aspx?space=1&num=2001
 * 2001 Математики и ягоды
 * DONE
*/
#include <iostream>

int main() {
    std::string InputA1, InputB1, InputA2, InputB2, InputA3, InputB3;
    unsigned int a1 = 0, b1 = 0, a2 = 0, b2 = 0, a3 = 0, b3 = 0;
    unsigned int NetA = 0, GrossA = 0, TareA = 0;
    unsigned int NetB = 0, GrossB = 0, TareB = 0;
    std::cin >> InputA1 >> InputB1;
    std::cin >> InputA2 >> InputB2;
    std::cin >> InputA3 >> InputB3;

    a1 = std::stoi(InputA1);
    a2 = std::stoi(InputA2);
    a3 = std::stoi(InputA3);
    b1 = std::stoi(InputB1);
    b2 = std::stoi(InputB2);
    b3 = std::stoi(InputB3);

    GrossA = a1;
    GrossB = b1;
    TareB = b2;
    TareA = a3;
    NetA = GrossA - TareA;
    NetB = GrossB - TareB;

    std::cout << NetA << " " << NetB;
    return 0;
}