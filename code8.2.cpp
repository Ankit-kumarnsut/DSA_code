#include <iostream>
using namespace std;
// int binarySearch(int arr[], int n, int key) {
//     int s = 0;
//     int e = n - 1; // Corrected initialization of e
//     while (s <= e) {
//         int mid = s + (e - s) / 2; // Corrected calculation of mid
//         if (arr[mid] == key) {
//             return mid;
//         } else if (arr[mid] > key) {
//             e = mid - 1;
//         } else {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }

// int main() {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int key;
//     cin >> key;

//     cout << binarySearch(arr, n, key) << endl;

//     return 0;
// }

// Sorting in arrays

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }


//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] > arr[i])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << "  ";
//     }
//     cout << endl;

//     return 0;
// }



int main() {
    int n;
    cin >> n;
    int arr[n];
    
    // Input elements into the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection sort to sort the array in non-ascending order
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}