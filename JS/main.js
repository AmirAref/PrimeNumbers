function is_prime(number){
    // check is prime number
    for(let i=2; i < parseInt(number**0.5) +1; i++){
        if(number % i ==0){
            return false;
        }
    }
    // is a prime
    return true;
}


function main(){
  // get the arguments input
  const args = process.argv.slice(2);
  let number = args[0];
  // get the count of prime numbers
  let prime = 0;
  for (var i = 2; i <= number; i++) {
    // check is prime
    if (is_prime(i)) {
      prime += 1;
    }
  }
  console.log(prime);
}


main()