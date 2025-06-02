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
    
    kamaluddin.nim = "C030324122";
    kamaluddin.nama = "GT. M. KAMALUDDIN AKBAR";
    kamaluddin.alamat = "HANDIL BAKTI JL.SEMANGAT DALAM";
    kamaluddin.ipk = 4.0;

    cout << kamaluddin.nim<<"\n";
    cout << kamaluddin.nama<<"\n";
    cout << kamaluddin.alamat<<"\n";
    cout << kamaluddin.ipk<<"\n";
}