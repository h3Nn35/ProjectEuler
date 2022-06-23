int zahl, ziffer, anzahl = 0;
string kandidat;

for (int i = 2; i < 10000000; i++)
{
    zahl = i;
    while (zahl != 1 && zahl != 89)
    {
        kandidat = zahl.ToString();
        zahl = 0;
        for (int j = 0; j < kandidat.Length; j++)
        {
            ziffer = int.Parse(kandidat.Substring(j, 1));
            zahl += ziffer * ziffer;
        }
    }
    if (zahl == 89)
        anzahl++;
}

Console.WriteLine(anzahl);