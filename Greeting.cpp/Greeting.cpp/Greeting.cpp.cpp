#include <iostream>
#include <string>

int main() {

    std::string name;

    std::cout << "Enter your name: ";

    std::getline(std::cin, name);

    std::cout << "It is nice to meet you, " << name << "!" << std::endl;

    return 0;
}
