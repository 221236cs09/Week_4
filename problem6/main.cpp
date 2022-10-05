//
//  main.cpp
//  problem6
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    float x,y,z;
    cout<<"Enter the angles: ";
    cin>>x>>y>>z;
    
    if(z+y+x==180){
        if(x>0&&y>0&&z>0){
            cout<<"The triangle is valid\n";
        }
        else{
            cout<<"the triangle is not valid\n";
        }
    }else{
        cout<<"The triangle is not valid\n";
    }
    return 0;
}
