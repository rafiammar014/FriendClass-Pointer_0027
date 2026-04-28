#include <iostream>
using namespace std;

class mahasiswa 
{
    public: 
    int nim;
    void ShowNim()
    {
        cout << "No induk: " << nim << endl;
    }
};

int main()
{
    mahasiswa *mhs = new mahasiswa{1}; // pointer object mhs
    mhs ->nim = 2;
    mhs -> ShowNim(); 
    delete mhs; 
    return 0;
}