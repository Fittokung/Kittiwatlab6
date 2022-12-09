#include<iostream>
using namespace std;

int main(){
    int number;
    int even=0;
    int odd=0;

    do
    {
        cout << "Enter an integer: ";
        cin >> number;
        if(number%2 == 0 && number != 0)
        {
            even++;
        }
        if(number%2 != 0){
            odd++;
        }
    } while(number != 0);
    
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
