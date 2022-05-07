function is_prime(number)
    -- check is prime number 
    local i = 2;
    while(i < math.floor(number^0.5) + 1)
    do
        if(number % i == 0) then
            return false;
        end
        i = i +1;
    end
    return true;
end


function main()
    -- variables
    local i, number, prime;
    i = 2;
    prime = 0;
    -- get the arguments input
    number = tonumber(arg[1]);
    -- get the count of prime numbers
    while(i <= number)
    do
        -- check is prime
        if(is_prime(i)) then
            prime = prime + 1;
        end
        i = i +1;
    end
    print(prime);
end

-- run the main func
main()