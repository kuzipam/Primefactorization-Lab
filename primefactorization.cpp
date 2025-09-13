#include <iostream>
#include <vector>
#include "headerlol.hpp"
#include <cassert>

int main() {
    //I tested the function with user input to see if it works. I also added a print statement in the functions file to output the facotrs.
    /*int num = 0;

    std::cout << "Please enter a number that is greater than 1: \n\n";
    std::cin >> num;

    primefactorization(num);*/

    assert((primefactorization(12) == std::vector<int>({2, 2, 3})));
    assert((primefactorization(84) == std::vector<int>({2, 2, 3, 7})));
    assert((primefactorization(97) == std::vector<int>({97})));
    assert((primefactorization(60) == std::vector<int>({2, 2, 3, 5})));
    assert((primefactorization(1)  == std::vector<int>({})));

    //This prints if all the cassert tests have passed.
    std::cout << "All the casserts have passed.\n";
    return 0;

    //g++ primefactorization.cpp functions.cpp -o prime.exe
    //./prime.exe
}
