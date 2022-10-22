/**
 * 1001 Обратный корень
 * https://acm.timus.ru/problem.aspx?space=1&num=1001
 * DONE
 */

#include <math.h>
#include <vector>
#include <iostream>

int main()
{
    std::vector<double> A;
    double a;
    while(std::cin >> a) if(a >= 0 && a <= 10E18) A.push_back(a);
    int i = A.size();
    std::cout.precision(4);
    while (i > 0) std::cout << std::fixed << sqrt(A[--i]) << "\n";
    return 0;
}

//#include <math.h>
//#include <vector>
//#include <iostream>
//#include <iomanip>

//int main()
//{
//    const int MaxInputSize = 256*1024;
//    std::vector<double> A;
//    double a = 0;
//    std::cout << std::setprecision(4) << std::fixed;
//    char InputChar;
//    std::string InputString;
//    while (std::cin.get(InputChar))
//    {
//        if(InputString.size() < MaxInputSize)
//            InputString.push_back(InputChar);
//        if(InputChar == EOF)
//            break;
//    }
//    std::istringstream buff(InputString);
//
//    while (buff >> a)
//    {
//        if(!buff.eof() && (a >= 0 ) && (a <= 10E18))
//            A.push_back(a);
//        else
//            break;
//    }
//    for(int i = A.size() - 1; i >= 0; i--)
//        std::cout << std::fixed << std::setprecision(4) << A[i] << std::endl;
//        //std::cout << std::sqrt(A[i]) << std::endl;
//    return 0;
//}

