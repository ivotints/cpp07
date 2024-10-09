#include "Array.hpp"

void test_int()
{
    Array<int> numbers(10);
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
        numbers[i] = rand() % 10;
    for (int i = 0; i < 10; i++)
        std::cout << numbers[i] << "  ";
    std::cout << std::endl;

    Array<int> clone(numbers);
    for (int i = 0; i < 10; i++)
        clone[i] += 10;
    for (int i = 0; i < 10; i++)
        std::cout << clone[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << numbers[i] << "  ";
    std::cout << std::endl;
}

#include <sstream>

void test_str()
{
    std::stringstream ss;

    Array<std::string> strings(10);
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        ss.str("");
        ss << rand() % 10;
        strings[i] = ss.str();
    }
    for (int i = 0; i < 10; i++)
        std::cout << strings[i] << "  ";
    std::cout << std::endl;

    Array<std::string> clone(strings);
    for (int i = 0; i < 10; i++)
        clone[i] = "1" + clone[i];
    for (int i = 0; i < 10; i++)
        std::cout << clone[i] << " ";
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        std::cout << strings[i] << "  ";
    std::cout << std::endl;
}

#define MAX_VAL 750

int main()
{
    test_int();
    test_str();

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
