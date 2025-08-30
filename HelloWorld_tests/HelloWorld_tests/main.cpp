#include <iostream>
#include "hello.h"
#include "version.h"

int main() {
    std::cout << sayHello() << std::endl;
    std::cout << "Version: " << test::getVersion() << std::endl;
    return 0;
}