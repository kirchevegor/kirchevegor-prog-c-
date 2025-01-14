#include <iostream>
#include <cstdlib>

int main() {
    const char* version = std::getenv("RELEASE_VERSION");
    if (!version) {
        version = "0";
    }
    std::cout << "Hello, World! Version 1.0." << version << std::endl;
    return 0;
}
