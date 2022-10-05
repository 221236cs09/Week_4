//
//  main.cpp
//  problem13
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int month;
    cout << "enter the month: ";
    cin >> month;
    
    switch(month){
        case 1: cout << "In January, we have: \n";
            cout <<"-New Year\n-Homeland Defedars Day, 14th January";
            break;
        case 3: cout << "In March we have: \n";
            cout <<"-Women Day, 8th March\n-Navruz\n";
            break;
        case 5: cout<<"In May we have: \n";
            cout <<"-Memorial Day, 9th May\n";
            break;
        case 9: cout<<"In September we have: \n";
            cout<<"International Day, 1st September\n";
            break;
        case 10: cout <<"In October we have: \n";
            cout<<"Teacher's Day, 1st October";
            break;
        case 12:cout<<"In December we have:\n";
            cout<<"-Consitution Day, 8th December";
            break;
        default: cout<<"We don't have holidays";
    }
    
    return 0;
}
