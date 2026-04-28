#include <iostream>
using namespace std;  
class mahasiswa{
    public: 
    int nim;
    void ShowNim(){
        cout << "No induk: " << nim << endl;
    }
};

int main (){

    mahasiswa mhs{1}; // object mhs
    mhs.ShowNim(); // Member Acces Operator

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2; // Member Acces Operator    
    mhs.ShowNim(); 