package main
import (
  "fmt"
  "math"
  "os"
  "strconv"
)

func is_prime(number int) bool{
  // check number is prime
  for i:=2; i < int(math.Pow(float64(number), 0.5)) + 1; i++{
    if number % i == 0{
      // is not prime
      return false
    }
  }

  // is prime
  return true
}


func main(){
  // get the arguments
  number, err := strconv.Atoi(os.Args[1])
    if err != nil {
        // handle error
        panic("please give a corerct integer number")
    }

  // count of the prime numbers
  var prime int = 0
  for n:=2; n<=number; n++{
    if is_prime(n){
      prime += 1
    }
  }

  // output
  fmt.Println(prime)
}
