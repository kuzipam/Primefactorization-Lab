#include <iostream>
#include <vector>

//Function that returns all the prime factors of a number in a vector list.
void primefactorization(std::vector<int>& factors, int num, int divisor) {
    if (num <= 1){return;} 

    //If the quotient is 0 then the divisor is entered into the vector list.
    if (num % divisor == 0) {

        factors.push_back(divisor);
        //Added a print statement to output the divisors.
        std::cout << divisor << ' ';
        primefactorization(factors, num / divisor, divisor);

    //If not the divisor is incremented to the next.
    } else {
        primefactorization(factors, num, divisor + 1); 
    }
}

//This is the helper function that the user calls and does not need to handle the other parameters.
std::vector<int> primefactorization(int num) {

    std::vector<int> factors;
    primefactorization(factors, num, 2);

    return factors;
}
