#include <iostream>
using namespace std;

int a[20];
int n;

void  input() {
   
    while (true) {                                              //looping
        cout << "masukan elemen array : \n";
        cin >> n;
        if (n <= 20)                                            // n <= 20
            break;                                              // keluar looping
        else {                                                  // n > 20
            cout << "array hanya bisa memiliki maksimal 20 elemen";
        }
    }

    cout << endl;
    cout << "=================================" << endl;
    cout << "     masukan elemen array        " << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) {                                // looping memasukan data ke array
        cout << "masukan data ke-" << (i + 1) << ":";
        cin >> a[i];
    }

}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;

    for (int j = 0; j < n; j++) {                                // looping memasukan data ke array
        cout << a[j] << endl;
    }
}

void bubbleSortArray() {
    for (int i = 1; i < n; i++) {                                // looping untuk menjalankan BubbleSort
        for (int j = 0; j < n - i; j++) {                        // looping untuk menjalankan perintah scan dan swap
            if (a[j] > a[j + 1]) {                               // syarat untuk swap
                int temp = a[j];                                 // 
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    input();                                                    // memanggil void input
    bubbleSortArray();                                          // memanggil void bubbleSortArray
    display();                                                  // memanggil void display
    return 0;
}