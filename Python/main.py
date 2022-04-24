import sys

def is_prime(number : int):
    # check is prime
    for i in range(2, int(number**0.5) + 1):
        if number % i == 0:
            return False
    return True
            

def main():
    # get argumments
    number = int(sys.argv[1])
    # find prime numbers
    prime = 0
    for i in range(2, number + 1):
        # check is prime 
        if is_prime(i):
            prime += 1
    print(prime)

if __name__ == "__main__":
    main()