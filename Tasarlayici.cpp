#include <iostream>
using namespace std;
int main()
{
 int sayi;
 cout<<"Lutfen Bir Sayi Giriniz";
 cin >> sayi;
 if(sayi>10)
 {
 sayi = sayi -10;
 }
 else
 {
 sayi = sayi +10;
 }
 cout << sayi;
}
