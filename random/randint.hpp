#include <iostream>
#include <random>

using namespace std;

int randNum(int first_range, int second_range) {
    
    random_device seed;
    mt19937 rand_int(seed());

    std::uniform_int_distribution<> distribution(first_range, second_range);

    int number = distribution(rand_int);

    return number;
}

    
