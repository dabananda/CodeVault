int[] arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();
int t = arr[0];

for (int i = 0; i < t; i++)
{
    arr = Console.ReadLine().Split(' ').Select(int.Parse).ToArray();

    int a = arr[0];
    int b = arr[1];

    if (a % 2 == 1 && b % 2 == 1)
        Console.WriteLine("NO");
    else
        Console.WriteLine("YES");
}