//https://zerojudge.tw/ShowProblem?problemid=a005
#include <iostream>
using namespace std;

int main(){
    int tims;
    int arr[4]={};
    cin >> tims;
    for(int i=0;i<tims;i++){
        for(int j=0;j<4;j++){
            cin >> arr[j];
        }
        if(arr[1]-arr[0]==arr[2]-arr[1]){
            for(int j=0;j<4;j++){
                cout << arr[j] << " ";
            }
            cout << arr[3]+(arr[3]-arr[2]) <<endl;

        }else{
            for(int j=0;j<4;j++){
                cout << arr[j] << " ";
            }
            cout << arr[3]*(arr[3]/arr[2]) <<endl;
        }

    }
    return 0;
}