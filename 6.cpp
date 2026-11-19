//https://zerojudge.tw/ShowProblem?problemid=a006
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c,x,D;
    cin >> a;
    cin >> b;
    cin >> c;
    D= (b*b)-(4*a*c);
    if(D>0){
        cout << "Two different roots" << " ";
        x=(-b+sqrt(b*b-4*a*c))/(2*a);
        cout << "x1=" <<x << " , ";
        x=(-b-sqrt(b*b-4*a*c))/(2*a);
        cout << "x2="<< x;
    }
    else if(D==0){
        cout << "Two same roots" << " x=";
        x=(-b+sqrt(b*b-4*a*c))/(2*a);
        cout << x;
    }
    else{
        cout << "No real root";
    }
    return 0;
}