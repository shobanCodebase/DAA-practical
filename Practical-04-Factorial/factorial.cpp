#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// ===================
//       Iterative
// ===================

long long factorial_iterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

// ===================
//      Recursive
// ===================

long long factorial_recursive(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * factorial_recursive(n - 1);
}

int main()
{
    int n;

    // Iterative
    cout << "Enter a number for Iterative Factorial: ";
    cin >> n;

    auto start = high_resolution_clock::now();

    long long result = factorial_iterative(n);

    auto end = high_resolution_clock::now();

    auto runtime = duration_cast<microseconds>(end - start);

    cout << "Factorial = " << result << endl;
    cout << "Runtime = " << runtime.count()
         << " microseconds" << endl;


    // Recursive
    cout << "\nEnter a number for Recursive Factorial: ";
    cin >> n;

    start = high_resolution_clock::now();

    result = factorial_recursive(n);

    end = high_resolution_clock::now();

    runtime = duration_cast<microseconds>(end - start);

    cout << "Factorial = " << result << endl;
    cout << "Runtime = " << runtime.count()
         << " microseconds" << endl;

    return 0;
}