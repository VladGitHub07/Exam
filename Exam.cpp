#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() 
{
    int arr[MAX_SIZE];
    int n;

    cout << "Enter the array size: ";
    cin >> n;

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    double sum = 0.0;
    for (int i = 0; i < n; ++i) 
    {
        if (arr[i] != 0 && arr[i] % 2 != 0) 
            sum += arr[i];
    }

    for (int i = 0; i < n - 1; ++i) 
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] < arr[j + 1]) 
            {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

    cout << "Sum of odd elements: " << sum << endl;
    cout << "Sorted array in descending order: ";
    for (int i = 0; i < n; ++i) 
        cout << arr[i] << " ";
    return 0;
}