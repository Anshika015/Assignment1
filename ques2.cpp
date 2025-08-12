#include <iostream>
using namespace std;

int main() {
    int arr[100], n, temp;
    
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"sorted array";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    arr[j] = arr[n - 1];
    j++;
    cout <<"array with only unique elements" ;
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
