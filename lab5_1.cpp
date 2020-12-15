#include<iostream>
using namespace std;
typedef long long int lli;

int main(){
    lli num = -1, even = 0, odd = 0;
    while(num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if (num == 0){
            break;
        }
        if(num%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;
    return 0;
}
