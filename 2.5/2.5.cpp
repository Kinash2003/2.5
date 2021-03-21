//2.5.cpp
#include <iostream>
#include <Windows.h> 
#pragma pack(1)

#include "Date.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Triad a, b, c,d;
    Date f;
    int result;
    
    cout << " Enter t1: " << endl;
    cin >> a;
   
    cout << " Enter t2: " << endl;
    cin >> b;

    cout << " Порівняння тріад: " << endl;
    result = f.Сomparison(a, b);
    f.TriadResult(result);

    cout << " Enter d1: " << endl;
    cin >> c;
    
    cout << " Enter d2: " << endl;
    cin >> d;
    
    cout << " Порівняння дат: " << endl;
    result = f.Сomparison(c, d);
    f.date1(result);
   
    cout << " A++ " << endl;
    cout << a++ << endl;

    cout << " A-- " << endl;
    cout << a-- << endl;

    cout << " ++A " << endl;
    cout << ++a << endl;

    cout << " --A " << endl;
    cout << --a << endl;

    return 0;
}
   
   
   

    