#include <iostream>
using namespace std;
const int ROWS = 5;
const int COLS = 5;
// Function to perform linear search in the matrix
bool linearSearch(int matrix[ROWS][COLS], int target) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == target) {
                return true; // Element found
            }
        }
    }
    return false; // Element not found
}
// Function to perform binary search in the matrix (assumes the matrix is sorted)
bool binarySearch(int matrix[ROWS][COLS], int target) {
    int arr[ROWS * COLS]; // 1D array to store matrix elements
    int k = 0;
    // Convert 2D matrix to 1D array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[k++] = matrix[i][j];
        }
    }
    // Binary search on the 1D array
    int left = 0, right = ROWS * COLS - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return true; // Element found
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false; // Element not found
}
// Function to perform bubble sort on the matrix (in-place sorting)
void bubbleSort(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS * COLS - 1; i++) {
        for (int j = 0; j < ROWS * COLS - i - 1; j++) {
            // Convert 2D indices to 1D index for comparison and swapping
            int row1 = j / COLS;
            int col1 = j % COLS;
            int row2 = (j + 1) / COLS;
            int col2 = (j + 1) % COLS;
            if (matrix[row1][col1] > matrix[row2][col2]) {
                // Swap elements
                int temp = matrix[row1][col1];
                matrix[row1][col1] = matrix[row2][col2];
                matrix[row2][col2] = temp;
            }
        }
    }
}
int main() {
    int matrix[ROWS][COLS] = {
        {5, 7, 9, 11, 0},
        {5, 3, 7, 5, 5},
        {2, 3, 2, 3, 9},
        {3, 6, 8, 45, 78},
        {2, 67, 90, 87, 51}
    };
    int target;
    cout << "Enter the value to search: ";
    cin >> target;
    if (linearSearch(matrix, target)) {
        cout << "Element found using linear search." << endl;
    } else {
        cout << "Element not found using linear search." << endl;
    }
    // Sort the matrix before binary search
    bubbleSort(matrix);
    if (binarySearch(matrix, target)) {
        cout << "Element found using binary search." << endl;
    } else {
        cout << "Element not found using binary search." << endl;
    }
    return 0;
}









/*
#include <iostream>
using namespace std;
int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS];
    int transpose[COLS][ROWS];
    // Get input for the matrix
    cout << "Enter values for the matrix:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> matrix[i][j];
        }
    }
    // Calculate the transpose
    for (int i = 0; i < COLS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            transpose[i][j] = matrix[j][i];
        }
    }
    // Display the original matrix
    cout << "\nOriginal Matrix:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Display the transpose matrix
    cout << "\nTranspose Matrix:" << endl;
    for (int i = 0; i < COLS; ++i) {
        for (int j = 0; j < ROWS; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}










#include <iostream>
using namespace std;
int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix1[ROWS][COLS], matrix2[ROWS][COLS], result[ROWS][COLS];
    // Get input for matrix1
    cout << "Enter values for matrix1:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> matrix1[i][j];
        }
    }
    // Get input for matrix2
    cout << "Enter values for matrix2:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> matrix2[i][j];
        }
    }
    // Display matrix1
    cout << "\nMatrix1:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = COLS - 1; j >= 0; --j) { // Print in reverse column order
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    // Display matrix2
    cout << "\nMatrix2:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = COLS - 1; j >= 0; --j) { // Print in reverse column order
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    // Add matrices
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    // Display the result
    cout << "\nResultant Matrix:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}











#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int DISTRICTS = 4;
    const int MONTHS = 12;
    // Declare a 2D array to store sales data
    int sales[DISTRICTS][MONTHS];
    // Get sales data from the user
    cout<< "Enter sales data for each district and month:" <<endl;
    for (int district = 0; district < DISTRICTS; ++district){
        cout << "District " << district + 1 << ":" <<endl;
        for (int month = 0; month < MONTHS; ++month){
            cout << "Month " << month + 1 << ": ";
            cin >> sales[district][month];
        }
    }
    // Display sales data in a formatted table
    cout << "\nSales Data:" <<endl;
    cout << setw(10) << "District" << setw(10);
    for (int month = 0; month < MONTHS; ++month) {
        cout << setw(10) << "Month " << month + 1;
    }
    cout << endl;
    for (int district = 0; district < DISTRICTS; ++district) {
        cout << setw(10) << district + 1 << setw(10);
        for (int month = 0; month < MONTHS; ++month) {
            cout << fixed << setprecision(2) << setw(10) << sales[district][month];
        }
        cout << endl;
    }
    return 0;
}
















// #include<iostream>
// using namespace std;

// int main (){
//     int n=3,m=3,i,j;
//     int arr[n][m];
//     // cin>>n>>m;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Matrix is \n";
//     for(int i =0; i<n; i++){
//         for(int j=0; j<m; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }















// #include<iostream>
// using namespace std;

// int main (){
//     int arr[5] = {4,5,6,7,8};
//     int brr[3] = {5,6,8};
//     for(int i = 0; i<sizeof(arr)/sizeof(arr[3]); i++){
//         cout<<arr[i]<<" "<<" \n";
//         for(int j=0; j<sizeof(brr)/sizeof(brr[0]); j++){
//             cout<<brr[j];
//         }
//     }

//     return 0;
// }

*/
