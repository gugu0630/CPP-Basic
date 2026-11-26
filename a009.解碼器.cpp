//https://zerojudge.tw/ShowProblem?problemid=a009
#include <iostream>
#include <string>
using namespace std;

int main(){
    string messag;
    char cha;
    getline(cin,messag);        //取含空格的字串
    int lonnth=messag.length();
    for(int i=0;i<lonnth;i++){
        cha=messag[i];
        cout << char(cha-7);
    }
    return 0;
}