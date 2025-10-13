using System;

class zad1
{
    static void Main()
    {
        Console.Write("Enter the size of the array: ");
        if (!int.TryParse(Console.ReadLine(), out int n) || n <= 0)
        {
            Console.WriteLine("Invalid size");
            return;
        }

        int[] arr1 = new int[n];
        Console.Write($"Enter {n} elements: ");
        string[] input = Console.ReadLine().Split(' ');
        for (int i = 0; i < n; i++)
        {
            arr1[i] = int.Parse(input[i]);
        }

        int max = arr1[0];
        int negCount = 0;
        int oddCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] > max)
                max = arr1[i];
            if (arr1[i] < 0)
                negCount++;
            if (arr1[i] % 2 != 0)
                oddCount++;
        }

        int sizeOfArray = 1 + negCount + 1; // max + negatives + oddCount
        int[] arr2 = new int[sizeOfArray];
        arr2[0] = max;
        int index = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr1[i] < 0)
            {
                arr2[index] = arr1[i];
                index++;
            }
        }
        arr2[index] = oddCount;

        for (int i = 0; i < sizeOfArray; i++)
        {
            Console.Write(arr2[i] + " ");
        }
        Console.WriteLine();
    }
}