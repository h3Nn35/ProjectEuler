int result = 0;
int lower = 0;
int n = 1;

while (lower < 10)
{
    lower = (int)Math.Ceiling(Math.Pow(10, (n - 1.0) / n));
    result += 10 - lower;
    n++;
}

Console.WriteLine(n);