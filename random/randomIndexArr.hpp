#include <iostream>
#include <random>

using namespace std; 

// can also work with vectors
int randomArrIndex(int index) {
    // seed
    random_device seed;

    // initalize 
    mt19937 random_num(seed());

    // distribute
    uniform_int_distribution<> distribution(0, index);

    int number = distribution(random_num);
    return number;
}