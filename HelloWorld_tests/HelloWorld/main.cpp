#include <iostream>
#include "hello.h"
#include "version.h"

int main() {
    std::cout << sayHello() << std::endl;
    std::cout << "Version: " << test::getVersion() << std::endl;

    std::cout << "Press ENTER to continue...";
    std::cin.get();

    return 0;
}