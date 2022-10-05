//
//  main.cpp
//  week4
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
//    int x;
//    cout<<"Enter a number";
//    cin>>x;
//    if(x>=0){cout<<"Positive"<<endl;}
//    else{
//        cout<<"Negative";
//    }
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(x>=0){
        if(x%2==0){
            cout<<"The number is positive and even number\n";
        }else{
            cout<<"The number is positive and odd\n";
        }
    }
    else{
        if(x%2!=0){
            cout<<"The number is negative and odd\n";
        }
        else{
            cout<<"The number is negative and even\n";
        }
    }
    return 0;
}
