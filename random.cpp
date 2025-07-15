#include <random>
#include <iostream>
using namespace std;

int main() {
    long int a = 0,b = 0;
    std::cout << "Enter scope of numbers with space: ";
    std::cin >> a >> b;
    if (!cin) {
        std::cout << "Error getting numbers \n";
        return 1;
    }
    std::random_device rd;  
    std::mt19937 gen(rd());  
    std::uniform_int_distribution <int> dist(a,b);
    printf("%d", dist(gen));
    return 0;
}
