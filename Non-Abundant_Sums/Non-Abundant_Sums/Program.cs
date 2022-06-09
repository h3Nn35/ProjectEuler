int ergebnis = 0, summe, i, j, x;
List<int> abundant = new List<int>();
List<int> allezahlen = new List<int>();

for (i = 1; i < 12; i++)
    allezahlen.Add(i);


for (i = 12; i < 28124; i++)
{
    allezahlen.Add(i);
    summe = 0;
    for (j = 1; j < i / 2 + 1; j++)
    {
        if (i % j == 0)
        {
            summe += j;
        }
    }
    if (summe > i)
    {
        abundant.Add(i);
    }
}

foreach (int a in abundant)
{
    foreach (int b in abundant)
    {
        x = a + b - 1;
        if (x + 1 <= 28123)
        {
            allezahlen[x] = 0;
        }
    }
}

foreach (int a in allezahlen)
{
    ergebnis += a;
}

Console.Write(ergebnis);