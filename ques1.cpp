#include <iostream>
using namespace std;

 int MAX_SIZE = 100;

int arr[100];
int n = 0;
//1 create
void createArray() {
    cout << "Enter number of elements:";
    cin >> n;
    if (n > MAX_SIZE) {
        cout << "Size exceeds limit";
        n = 0;
    }
    else{
    cout << "Enter " << n << " elements:";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Array created successfully";
}
}
//2 display
void displayArray() {
    if (n == 0) {
        cout << "Array is empty";
    }
    else{
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
}
void insertElement() {
    if (n == MAX_SIZE) {
        cout << "Array is full";
    }
    else{
    int pos, val;
    cout << "Enter position ";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position";
    }
    else{
    cout << "Enter value: ";
    cin >> val;
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = val;
    n++;
     }
   }
 }
void deleteElement() {
    if (n == 0) {
        cout << "Array is empty";
    }
    else{
    int pos;
    cout << "Enter position";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position";
    }
    else{
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}
}
}
void linearSearch() {
    if (n == 0) {
        cout << "Array is empty";
    }
    int key;
    cout << "Enter value to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
        }
    }
    cout << "Element not found";
}

int main() {
    int choice;
    bool running = true;
        cin >> choice;

        if (choice == 1) {
            createArray();
        } 
        else if (choice == 2) {
            displayArray();
        } 
        else if (choice == 3) {
            insertElement();
        } 
        else if (choice == 4) {
            deleteElement();
        } 
        else if (choice == 5) {
            linearSearch();
        } 
        else if (choice == 6) {
            cout << "Exiting program";
            running = false;
        } 
        else {
            cout << "Invalid choice!\n";
        }
    return 0;
}
