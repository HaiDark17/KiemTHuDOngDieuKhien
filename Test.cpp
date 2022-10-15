#include <iostream>
#include <stdio.h>
using namespace std;
void Bill(float x, int y){
    if(x<0 || y<0){
            cout << "Input không hợp lệ.";
    }else{
            if(x<3.0 && y<18 && y >= 0){
                cout << x* 30000;
            }
            if(x>= 3.0 && y<18 && y >= 0){
                cout << x*27000;
            }
        
            if(y >= 18 && x <3.0){
                cout  << x* 40000;
            if(y>=18&& x >=3.0)
             cout << x*36000;
            }
        }
   
    }

int main()
{
    float soGioChoi;
    int age;
    
    cin >> soGioChoi >> age;
    Bill (soGioChoi,age);

    return 0;
}