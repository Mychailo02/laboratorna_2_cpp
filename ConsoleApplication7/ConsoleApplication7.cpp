// ConsoleApplication7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>   
using namespace std;

int main()
{
    float x, y, A; //Значення змінних
    std::cout << "Type x:" << std::endl;
    std::cin >> x;
    std::cout << "Type A:" << std::endl;
    std::cin >> A;
    if (cin.fail()) { //Перевірка вводу
        std::cout << "Input error" << std::endl;
        std::cin.clear();
        std::cin.ignore();
    }
    else
    {
        if (x < 0) {
            y = x;
            std::cout << x << std::endl;
        }
        else if (A > 0)
        {
            y = A;
            std::cout << A << std::endl;
        }
        else
        {
            std::cout << "Немає розв‘язків" << std::endl;
        }
    };
    return 0;
}