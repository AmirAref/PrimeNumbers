#include <iostream>
#include <math.h>

using namespace std;

bool is_prime(int numebr){
    // check is a prime numebr
    for(int i=2; i < (int)pow(numebr, 0.5) + 1; i++){
        if(numebr % i == 0){
            // is not a prime number
            return false;
        }
    }
    // is a prime
    return true;
}

int main(int argc, char *argv[]) {
    // get the arguments input
    int number = (int) strtol(argv[1], (char **)NULL, 10);
    int prime = 0;
    // count of prime numbers
    for(int i=2; i <= number; i++){
        // check is a prime number
        if(is_prime(i)){
            prime++;
        }
    }
    cout << prime << endl;
    return 0;
}
