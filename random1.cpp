#include <iostream>
#include <ctime>
int main() {
    srand(time(0));
    std::cout << rand() % 100;
    return 0;
}
