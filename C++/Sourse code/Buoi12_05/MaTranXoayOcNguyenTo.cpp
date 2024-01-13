/*
	C++ Buổi 12_Bài 05.Ma trận xoắn ốc nguyên tố.
	In ra ma trận xoáy ốc cấp N, với các số trong ma trận đều là các số trong dãy Nguyên tố.

	Input Format
	Số nguyên dương N.(1≤N≤1000)

	Output Format
	In ra ma trận xoáy ốc nguyên tố cấp N.

	Dữ liệu vào:
	5
	Dữ liệu ra:
	2 3 5 7 11
	53 59 61 67 13
	47 89 97 71 17
	43 83 79 73 19
	41 37 31 29 23
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num)
{
    if (num < 2) 
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}

void generatePrimes(int n, int* primes)
{
    int count = 0;
    for (int i = 2; count < n * n; i++) 
    {
        if (isPrime(i))
        {
            primes[count++] = i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int** a = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[n];
    }

    int sr = 0, er = n - 1, sc = 0, ec = n - 1;
    int num = 0; // Start with the first prime number

    int* primes = new int[n * n];
    generatePrimes(n, primes); // Generate enough primes

    while (sr <= er && sc <= ec) 
    {
        for (int j = sc; j <= ec; j++)
        {
            a[sr][j] = primes[num++];
        }
        ++sr;

        for (int i = sr; i <= er; i++)
        {
            a[i][ec] = primes[num++];
        }
        --ec;

        for (int j = ec; j >= sc; j--)
        {
            a[er][j] = primes[num++];
        }
        --er;

        for (int i = er; i >= sr; i--) 
        {
            a[i][sc] = primes[num++];
        }
        ++sc;
    }

    // Print the matrix
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    // Free the allocated memory
    for (int i = 0; i < n; ++i)
    {
        delete[] a[i];
    }
    delete[] a;
    delete[] primes;

    return 0;
}