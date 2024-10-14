#include <iostream>

using namespace std;

//tipe data fungsi, nama fungsi (parameters)
int max(int a=5, int b=20) {
    if(a > b) {
        cout << a << endl; // output bisa diganti
        return a;
    } else {
        cout << b << endl;
        return b;
    }
}

int main()
{
    /*int x;
    cout << "Isi nilai perulangan: ";
    cin >> x;

    int i = 0;
    while(i < x){
        cout << "Hello world!" << endl;
        i++;

        int y;
        y = 5;

        if(x > y) {
            cout << "x lebih dari Y" << endl;
        } else if (x < y) {
            cout << "x kurang dari Y" << endl;
        } else {
            cout << "x sama dengan y" << endl;
        }
    */

    int x = 5;
    int y = 20;

    for(int i = 0; i < 10; i++){
        x++; // 6
        y++; // 21
        max(x,y);
    }
return 0;
}




