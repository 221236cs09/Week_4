//
//  main.cpp
//  problem8
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num;
    cout << "Enter the number of weekday: ";
    cin >> num;
    
    switch(num){
        case 1:cout<<"Monday\n";
            break;
        case 2:cout<<"Tuesday\n";
            break;
        case 3:cout<<"Wednesday\n";
            break;
        case 4:cout<<"Thursday\n";
            break;
        case 5:cout<<"Friday\n";
            break;
        case 6:cout<<"Saturday\n";
            break;
        case 7:cout<<"Sunday\n";
            break;
        default:cout<<"There is no such weekday\n";
    }
    
    return 0;
}
