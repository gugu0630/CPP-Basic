//https://zerojudge.tw/ShowProblem?problemid=a004
#include <iostream>
using namespace std;

int main(){
    int Y;
    //持續讀取輸入直到結束
    while (cin>>Y){
        if((Y%4==0 && Y%100!=0)||(Y%400==0)){cout << "閏年"<<endl;}
        else{cout << "平年"<<endl;}
    }
    return 0;
}