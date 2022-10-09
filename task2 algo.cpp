#include <iostream>
using namespace std;

int main () {
    int a, b, c,x,z;



    cout<< "Masukan nilai a :";
    cin>> a;
    cout<< "Masukan nilai b :";
    cin>> b;

    cout<<"\n";
    //vaulue tiap variable ditukar

    c=a;
    a=b;
    b=c;
    //setelah ditukar

    cout<<"Nilai setelah di tukar adalah :\n";
    cout<<"\n";
    cout<< "Nilai a :"<<a<<endl;
    cout<< "Nilai b :"<<b<<endl;

    cout<<"menukar tanpa variabel tambahan"<<endl;


   //menukar tanpa variable tambahan


    cout << "Masukan nilai A: ";
    cin >> x;
    cout << "Masukan nilai b : ";
    cin >> z;

    cout<< "Nilai A : "<<z<<endl;
    cout<< "nilai B : "<<x;


return 0;
}
