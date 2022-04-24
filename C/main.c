// main.c

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

bool is_prime(int number){
    // check is prime number
    for(int i=2; i < ((int)pow((double)number, 0.5)) + 1; i++){
        if(number % i ==0){
            return false;
        }
    }
    // is a prime
    return true;
}

int main(int argc, char *argv[]) {
    // get the number in arguments
    int number = (int) strtol(argv[1], (char **)NULL, 10);

    // count of the prime numbers
    int prime = 0;
    for(int i = 2; i <= number; i++){
        // check is prime number
        if(is_prime(i)){
            prime += 1;
        }
    }
    printf("%d\n", prime);

    return 0;

}