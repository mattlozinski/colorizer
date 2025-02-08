#include <iostream>
#include "../colorizer.h"

int main() {
    std::cout << style::bold("bold text") << std::endl;
    std::cout << fg::red("red foreground") << std::endl;
    std::cout << bg::blue("blue background") << std::endl;
    return 0;
}
