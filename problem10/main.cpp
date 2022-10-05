//
//  main.cpp
//  problem10
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x;
    cout << "Enter the number: ";
    cin >> x;
    
    switch(x>0){
        case 1: cout<<"Positive number\n";
            break;
        case 0:
            switch(x==0){
                case 1: cout << "Number is zero\n";
                    break;
                case 0: cout << "Number is negative\n";
                    break;
            }
    }
    return 0;
}
