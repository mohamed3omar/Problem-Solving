#include<iostream>
#include <iomanip>
using namespace std;

int main(){

    
    //priceAfter_discount = Origprice - Oerignprie * Discout;

    double X , P;

    cin>> X >> P;
    
    cout<<fixed<<setprecision(2)<<((P/(100-X))*X)+P;

    return 0;
}