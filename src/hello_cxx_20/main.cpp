#include <iostream>

struct LambdaCpp20 {
    auto foo() {
        return [=, this] { std::cout << s << std::endl; };
    }

    std::string s;
};

int main() {

    int i;

    LambdaCpp20().foo();
    return 0;
}
