
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   

   
    int num1, num2,method, outPut;
    int cont1;
    string name;
    do
    {
        std::cout << "Enter name:";
        std::cin >> name;
        std::cout << "WELCOME!!   " << name << endl;
        std::cout << "Method:    ADD[1]  SUBTRACT[2]\n";
        std::cout << "      MULTIPLY[3]     DIVID[4]\n";
        std::cout << "       MODULUS[5]     POWER[6]\n";
        std::cout << "          EXIT[0]             \n";
        std::cin >> method;
        if (method == 0)
        {
            exit(0);
        }
        std::cout << "Enter a value:";
        std::cin >> num1;
        std::cout << "Enter a value:";
        std::cin >> num2;
        switch (method)
        {
        case 1:
            outPut = num1 + num2;
            break;
        case 2:
            outPut = num1 - num2;
            break;
        case 3:
            outPut = num1 * num2;
            break;
        case 4:
            outPut = num1 / num2;
            break;
        case 5:
            outPut = num1 % num2;
            break;
        case 6:
            outPut = pow(num1, num2);
            break;
        default:
            
            break;
        }
       
       

        std::cout << "NEW VALUE:" << outPut << endl;

        std::cout << "Would you like to continue YES[1]NO[2]";
        std::cin >> cont1;
        if (cont1 == 2)
        {
            exit(0);
        }
    } while (true);
   
}

