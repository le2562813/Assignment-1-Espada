/* 
 * File:   main.cpp
 * Author: Vincent Espada
 *
 * Created on January 12, 2015, 8:46 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */

    

int main(){
    int amQuartr, amDimes, amNickls, tot_curr;
    cout<<"Press enter after every entry"<<endl;
    cout<<"How many quarters do you have?\n";
    cin>>  amQuartr;
    cout<<"How many dimes do you have?\n";
    cin>>  amDimes;
    cout<<"How many nickels do you have?\n";
    cin>>  amNickls;
    tot_curr = (amQuartr * 25) + (amDimes * 10) + (amNickls * 5);
    cout<<"You have ";
    cout<< tot_curr;
    cout<< " cents\n";

    return 0;
}
