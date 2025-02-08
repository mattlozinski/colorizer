#include <iostream>
#define COLORIZER
#include "../colorizer.h"

int main() {
    std::cout << "STYLES\n";
    std::cout << style::bold("bold") << " text" << std::endl;
    std::cout << style::dim("dimmed") << " text" << std::endl;
    std::cout << style::underline("underlined") << " text" << std::endl;
    std::cout << style::reverse("reversed") << " text" << std::endl;
    std::cout << style::strike("striked") << " text" << std::endl;
    std::cout << std::endl;

    std::cout << "FOREGROUND\n";
    std::cout << fg::normal("normal") << " text" << std::endl;
    std::cout << fg::black("black") << " text" << std::endl;
    std::cout << fg::red("red") << " text" << std::endl;
    std::cout << fg::green("green") << " text" << std::endl;
    std::cout << fg::yellow("yellow") << " text" << std::endl;
    std::cout << fg::blue("blue") << " text" << std::endl;
    std::cout << fg::magenta("magenta") << " text" << std::endl;
    std::cout << fg::cyan("cyan") << " text" << std::endl;
    std::cout << fg::light_gray("light_gray") << " text" << std::endl;
    std::cout << std::endl;
    std::cout << fg::dark_gray("dark_gray") << " text" << std::endl;
    std::cout << fg::light_red("light_red") << " text" << std::endl;
    std::cout << fg::light_green("light_green") << " text" << std::endl;
    std::cout << fg::light_yellow("light_yellow") << " text" << std::endl;
    std::cout << fg::light_blue("light_blue") << " text" << std::endl;
    std::cout << fg::light_magenta("light_magenta") << " text" << std::endl;
    std::cout << fg::light_cyan("light_cyan") << " text" << std::endl;
    std::cout << fg::white("white") << " text" << std::endl;
    std::cout << std::endl;

    std::cout << "BACKGROUND\n";
    std::cout << bg::normal("normal") << " text" << std::endl;
    std::cout << bg::black("black") << " text" << std::endl;
    std::cout << bg::red("red") << " text" << std::endl;
    std::cout << bg::green("green") << " text" << std::endl;
    std::cout << bg::yellow("yellow") << " text" << std::endl;
    std::cout << bg::blue("blue") << " text" << std::endl;
    std::cout << bg::magenta("magenta") << " text" << std::endl;
    std::cout << bg::cyan("cyan") << " text" << std::endl;
    std::cout << bg::light_gray("light_gray") << " text" << std::endl;
    std::cout << std::endl;
    std::cout << bg::dark_gray("dark_gray") << " text" << std::endl;
    std::cout << bg::light_red("light_red") << " text" << std::endl;
    std::cout << bg::light_green("light_green") << " text" << std::endl;
    std::cout << bg::light_yellow("light_yellow") << " text" << std::endl;
    std::cout << bg::light_blue("light_blue") << " text" << std::endl;
    std::cout << bg::light_magenta("light_magenta") << " text" << std::endl;
    std::cout << bg::light_cyan("light_cyan") << " text" << std::endl;
    std::cout << bg::white("white") << " text" << std::endl;
    return 0;
}

