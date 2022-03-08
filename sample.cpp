#include <iostream>

int square(int& val1);

int main() {
    int base = 2;
    std::cout << "square of base is "<< square(base) <<std::endl;
    return 0;
}

int square(int& val1) {
    return val1 * val1;
}
