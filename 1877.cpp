/**
 * https://acm.timus.ru/problem.aspx?space=1&num=1877
 * 1877 Велосипедные коды
 * DONE
 */
#include <iostream>

int main()
{
    std::string InputCode1;
    std::string InputCode2;
    unsigned int Code1, Code2;
    bool Hacked = false;
    std::cin >> InputCode1 >> InputCode2;
    Code1 = std::stoi(InputCode1);
    Code2 = std::stoi(InputCode2);
    for(int HackCode = 0; HackCode < 10000; HackCode++)
    {
        if (HackCode % 2 == 0) { // Even
            if (HackCode == Code1) {
                Hacked = true;
            }
        }
        else { // Odd
            if (HackCode == Code2){
                Hacked = true;
            }
        }
    }
    if (Hacked) std::cout << "yes";
    else std::cout << "no";
    return 0;
}