#include <iostream>
#include <cstdlib>

int getRandomInt() {
    int min = 1;
    int max = 6;
    return std::rand() % (max - min + 1) + min;
}
