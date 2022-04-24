import 'dart:math';

bool is_prime(int number) {
  // check is prime number
  for (var i = 2; i < pow(number, 0.5) + 1; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  // is a prime
  return true;
}

void main() {
  // get the arguments input
  int number = 1000000;

  // get the count of prime numbers
  int prime = 0;
  for (var i = 2; i <= number; i++) {
    // check is prime
    if (is_prime(i)) {
      prime += 1;
    }
  }
  print(prime);
}
