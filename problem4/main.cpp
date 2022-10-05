//
//  main.cpp
//  problem4
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int leap_year;
    cout<<"Enter the year";
    cin>>leap_year;
    
    if(leap_year&400==0){
        cout<<"the leap year\n"
    }else if(leap_year&100==0){
        cout<<"Not the leap year\n";
    }else if(leap_year%4==0){
        cout"The leap year\n";
    }else{
        cout<<"Not a leap year";
    }
//    if(leap_year&4==0){
//        if(leap_year&100==0){
//            cout<<"not a leap year\n";
//        }else if(leap_year&400==0){
//            cout<<"the leap year\n";
//        }
//    }
    
    return 0;
}
