#include <iostream>
using namespace std;

struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(){
    mahasiswa kamaluddin;
    mahasiswa* Kamaluddin = &kamaluddin;
    
    Kamaluddin->nim = "C030324122";
    Kamaluddin->nama = "GT. M. KAMALUDDIN AKBAR";
    Kamaluddin->alamat = "HANDIL BAKTI JL.SEMANGAT DALAM";
    Kamaluddin->ipk = 4.0;

    cout << kamaluddin.nim<<"\n";
    cout << kamaluddin.nama<<"\n";
    cout << kamaluddin.alamat<<"\n";
    cout << kamaluddin.ipk<<"\n";
}