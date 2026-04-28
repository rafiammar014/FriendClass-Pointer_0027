#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa 
{
private:
    int id;

public:    
    void setId(int pId);
    void showplayAll(orang &a);
};

void siswa::displayAll(orang &a)
{             
    cout << id << endl << a.nama << endl;
}
void orang ::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pId)
{
    id = pId;
}  
int main()
{
    orang ammar;
    ammar.setNama("Rafi Ammar");
    siswa ammar_siswa;
    ammar_siswa.setId(1);
    ammar_siswa.displayAll(ammar);
    return 0;
}