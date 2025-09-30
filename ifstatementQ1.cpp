//Programmer: Aiman, 21DIT25F1411
//Question: 1 if statement, 30Sep2025
#include <iostream>
using namespace std;

int main(){
    int temperature;
    
    cout<<" Please enter the temperature in degree: ";
    cin>>temperature;
    
    if (temperature>=80){
        cout<<" Please go to swimming"<<endl;
    }
    
    else if (temperature>=50){
        cout<<" Please go to running"<<endl;
    }
    
    else {
        cout<<" Please stay inside"<<endl;
    }
    return 0;
}