//
//  main.cpp
//  problem3
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int x, y, z;
    cout<<"Enter three numbers: ";
    cin>>x>>y>>z;
    if(x>y&&x>z){
        cout<<x<<endl;
    }else if(y>z&&y>x){
        cout<<y<<endl;
    }else{
        cout<<z<<endl;
    }
    return 0;
}
