#include <iostream>
#include <random>

using namespace std;


char randChar() {
    // seed the random number
    random_device seed;

    // initalize 
    mt19937 random_num(seed());

    // distribution of range
    uniform_int_distribution<> distribution(65, 122);

    // vars
    int number = distribution(random_num);
    char randCharVar = number;
    return randCharVar;
}