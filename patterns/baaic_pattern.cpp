// Print Rectangle

// #include <iostream>
// using namespace std;

// int main () {
//     int rows;
//     int col;
//     cin >> rows;
//     cin >> col;
//     for ( int i = 1; i <= rows; i++) {
//         for (int j = 1; j <= col; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

int main () {
    int rows, col;
    cout << "Enter the number of rows" ;
    cin >> rows;
    cout << "Enter the number of col" ;
    cin >> col;
    for ( int i = 1; i <= rows; i++) {
        for (int j = 1; j < col; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}