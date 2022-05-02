#include <iostream>
using namespace std;

int main() {

    int alpha[50] = {0};
    
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
    
    alpha[0] = 1;
    cout << alpha[0] << " ";
    
    for (int i = 1; i < 50; i++){
        
        if (i == 20){
            alpha[i] = alpha[i-1] + 1;
            cout <<  alpha[i] << " ";
        } else {
            alpha[i] = alpha[i-1] + 2;
            cout << alpha[i] << " ";
        }
        
    }
    
    
    cout << endl << endl;
    return 0;
}
