#include <iostream>
#include <functional>

int main() {

    int i;
    [out = std::ref(std::cout << "Hello ")](){ out.get() << "World\n" << std::endl; }();
    return 0;
}