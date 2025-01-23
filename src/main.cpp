#include <calculator.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>



int main()
{
    Calculator cal;
    int choice;
    std::string operation;

    std::cout << "Choose Operation:\n1. +\n2. -\n3. * " << std::endl;
    std::cin >> operation;

    std::cout << "Choose input method:\n1. From Console\n2. From File\n";
    std::cin >> choice;
    std::cin.ignore();

    std::vector<int> numbers;

    if(choice == 1){
        numbers = cal.GetNumbersFromConsole();
    }else if(choice == 2){
        std::string  filename;
        std::cout << "Enter filename and dir: ";
        std::getline(std::cin,filename);
        numbers = cal.GetNumbersFromFile(filename);
    }else{
        std::cout << "Invalid choice.\n";

        return 1;
    }

    int result;

    result = cal.calculate(numbers,operation);

    std::cout << "the sum of the numbers is:"
              << result
              << std::endl;

    return 0;

}
