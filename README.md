# cpp-utils

C++ utilities for my personal projects.

## Installation

```bash
git clone https://github.com/TortitasT/cpp-utils.git
```

Add the following to your CMakeLists.txt:

```cmake
add_subdirectory(cpp-utils)

target_link_libraries(Test PUBLIC CppUtils)

target_include_directories(Test PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/cpp-utils")
```

## Usage

```cpp
#include <cpp-utils/utils.h>

int main() {
    utils::print("Hello, World!");
    
    std::string input = utils::prompt("Enter a string: ");
    
    return 0;
}
```