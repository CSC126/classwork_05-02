#include <iostream>
#include <iomanip>
using namespace std;

int main() {

//    int alpha[50] = {0};
    
//    alpha[0] = 1;
    
//    for (int i = 1; i < 20; i++){
//        alpha[i] = i + 2;
//        cout << alpha[i] << " ";
//    }
//
//    alpha[20] = 22;
//
//    for (int i = 21; i < 50; i++){
//        alpha[i] = i + 2;
//        cout << alpha[i] << " ";
//    }
//
    
//    alpha[0] = 1;
//    cout << left << setw(5) << alpha[0];
//
//    for (int i = 1; i < 50; i++){
//
//        if (i % 10 == 0){
//            cout << endl;
//        }
//
//        if (i == 20){
//            alpha[i] = alpha[i-1] + 1;
//            cout << left << setw(5) << alpha[i];
//        } else {
//            alpha[i] = alpha[i-1] + 2;
//            cout << left << setw(5) << alpha[i];
//        }
//
//    }
    
    int table[3][5] = {};
    
    int num = 1;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            table[i][j] = j + 1;
            cout << left << setw(3) << table[i][j];
        }
        cout << endl;
        num+= 1;
    }
    
    
    
    cout << endl << endl;
    return 0;
}
