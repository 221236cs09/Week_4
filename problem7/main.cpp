//
//  main.cpp
//  problem7
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char c;
    cout << "Enter one alphabet: ";
    cin >> c;
    
    if(c>'A'&& c<'Z'){
        cout << "Uppercase character \n";
    }else if(c>'a' && c<'z'){
        cout << "Lowercase character \n";
    }else{
        cout << "This is not an alphabet \n";
    }
    
    return 0;
}
