internal class Program
{
    private static void Main(string[] args)
    {
        double power(double x, int n)
        {
            if (n == 0)
            {
                return 1;
            }
            else if (n < 0)
            {
                return 1 / power(x, -n);
            }
            else
            {
                return x * power(x, n - 1);
            }
        }
        double baseValue = 8;
        int exponent = 10;
        double result = power(baseValue, exponent);
    }
}