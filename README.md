# colorizer

This C++ library makes it easy to add colors and styles to text in the terminal.

## usage
To use this library, put `colorizer.h` in your project and call functions from the `style`, `fg` and `bg` namespaces to modify text.

### code Example

```cpp
#include <iostream>
#include "colorizer.h"

int main() {
    std::cout << style::bold("bold Text") << std::endl;
    std::cout << fg::red("red foreground") << std::endl;
    std::cout << bg::blue("blue background") << std::endl;
    return 0;
}
```
### output:

![[assets/example.png]]

## namespace Specification

### styles - text formatting

Used as `style`
- `bold`: **bold**
- `dim`: applies a subtle dimming effect
- `underline`: <u>underline</u>
- `reverse`: inverts foreground and background colors
- `strike` ~~strikethrough~~

### foreground and background

Used as `fg` and `bg` respectively
- Standard colors:
    - `normal`
    - `black`
    - `red`
    - `green`
    - `yellow`
    - `blue`
    - `magenta`
    - `cyan`
    - `light_gray `
- High-intensity variants:
    - `dark_gray `
    - `light_red`
    - `light_green`
    - `light_yellow`
    - `light_blue`
    - `light_magenta`
    - `light_cyan`
    - `white`
