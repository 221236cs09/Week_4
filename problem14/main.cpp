//
//  main.cpp
//  problem14
//
//  Created by Islombek Abdurahmonov on 04/10/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    char hair, eyes, hand;
    cout <<"Do you have dark hair? (y/n)\n";
    cin >> hair;
    if(hair=='y'){
        cout<<"Do you have blue eyes? (y/n)\n";
        cin >> eyes;
        if(eyes=='y'){
            cout << "Are you left-handed(y/n)";
            cin>>hand;
            if(hand=='y'){
                cout<<"Are you male? (y/n)\n";
                cin>>gender;
                if(gender=='y'){
                    cout<<"You are Jack!\n";
                }else{
                    cout<<"Joanne!\n";
                }
            }else{
                cout<<"You are Leonard!\n";
            }
        }else{
            cout<<"Are you left-handed?\n";
            cin >> hand;
            if(hand=='y'){
                cout<<"You are Pamela!\n";
            }else{
                cout<<"You are Micheal!\n";
            }
        }
    }else{
        cout<<"You are George!\n";
    }
    
    return 0;
}
