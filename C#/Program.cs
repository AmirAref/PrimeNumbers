namespace PrimeNumber
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int number = Convert.ToInt32(args[0]);
            int primeCount = 0;
            for (int i = 2; i <= number; i++)
            {
                if (IsPrime(i))
                    primeCount += 1;
            }
            Console.WriteLine(primeCount);
        }

        /// <summary>
        /// Check weather number is prime or not
        /// </summary>
        /// <param name="number"></param>
        static bool IsPrime(int number)
        {
            for (int i = 2; i <= Math.Sqrt(number); i++)
            {
                if (number % i == 0)
                    return false;
            }
            return true;
        }
    }
}