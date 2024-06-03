#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // use current time as seed for random generator
    for(int i = 0; i < 10; ++i) {
        int random_variable = std::rand();
        std::cout << random_variable << '\n';
    }
    return 0;
}