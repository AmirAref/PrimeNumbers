use std::env;

fn is_prime(number : i64) -> bool{
    // convert to smiler item (optimizng)
    let n = ((number as f64).powf(0.5) as i64) + 1;
    // check is prime number
    for i in 2..n{
        if number % i == 0 {
            // it isn't a prime number
            return false;
        }
    }
    // it is a prime number
    return true;
}


fn main(){
    // get the arguments input
    let args: Vec<_> = env::args().collect();
    let number : i64 = args[1].parse().unwrap();
    let mut prime = 0;
    // get the count of prime numbers
    for i in 2..number + 1 {
        // check is prime
        if is_prime(i) {
            prime += 1;
        }
    }
    println!("{}", prime);

}