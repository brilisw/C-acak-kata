#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
string kata;
string acak;
char kat;
int ukur;
int s;
int hasil_acak;

//srand(static_cast<unsigned int>(time(0)));
//for (int i = 0; i < 20; ++i) {
//hasil_acak = rand() % 50 + 1;
//cout << hasil_acak << endl;

cout << "masukan Kata : ";
cin >> kata;
acak = kata;
ukur = kata.size();
//cout << kata[0] <<endl;
cout << "size = " ;
cout << ukur << endl;
cout << "kata acak  : ";
srand(static_cast<unsigned int>(time(0)));
for (int i = 0; i < ukur ; ++i) {
hasil_acak = rand() % ukur ;


        int huruf1 = (rand() % ukur);
        cout << "acak 1 = " <<huruf1 <<endl;
        int huruf2 = (rand() % ukur);
        cout << "acak 2 =" << huruf2 <<endl;

        cout << "-------------------------------------------------------" <<endl;

        kat = acak[huruf1];
        cout <<"temp dan acak huruf1 =" << kat <<endl;
        acak[huruf1] = acak[huruf2];
        cout << "proses 1 =" << acak[huruf1] <<endl;
        acak[huruf2] = kat;
}

s = hasil_acak;
cout << "setelah di acak :"  << acak;


return 0;
}
