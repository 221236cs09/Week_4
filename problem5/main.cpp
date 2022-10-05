//
//  main.cpp
//  problem5
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;
#include <math.h>

int main(int argc, const char * argv[]) {
    double a,b,c;
    cout<<"Enter a,b,c numbers: ";
    cin>>a>>b>>c;
    
    double d;
    d = b*b-4*a*c;
    
    if(d>0){
        double x1, x2;
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        cout<<"x1= "<<x1<<endl<<"x2= "<<x2<<endl;
    }else if(d==0){
        double x;
        x = -b/(2*a);
        cout<<"The roots are same and equal to: "<<x<<endl;
    }else{
        cout<<"There is no root here.\n";
    }
    
    return 0;
}
