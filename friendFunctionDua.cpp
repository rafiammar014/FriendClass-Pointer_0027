#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNimPelajar(pelajar &x);
};

class pelajar
{
private:
    int nilai;

public:
    pelajar() { nilai = 100; }
    friend void manusia::showNimPelajar(pelajar &x);
};

void manusia::showNimPelajar(pelajar &x)
{
    cout << x.nilai;
}

int main()
{
    manusia rafi;
    pelajar prafi;
    rafi.showNimPelajar(prafi);
    return 0;
}