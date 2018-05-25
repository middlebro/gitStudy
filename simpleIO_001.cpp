//
//  simpleIO_001.cpp
//  simpleIO
//
//  Created by 서형중 on 2018. 5. 25..
//

#include <iostream>
using namespace std;

int main(){
    int A, B;
    while (cin >> A >> B && 0 < A && B < 10) {
        cout << A - B <<endl;
    }
    return 0;
}
