#include <iostream>
#include <cmath>
using namespace std;

class Trougao {
private:
    float a;
    float b;
    float c;

public:
    Trougao()
    {
        a = 3;
        b = 3;
        c = 5;
    }

    Trougao(double a1, double b1, double c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }

    void SetujA(float a1)
    {
        a = a1;
    }
    void SetujB(float b1)
    {
        b = b1;
    }
    void SetujC(float c1)
    {
        c = c1;
    }


    double GetA()
    {
        return a;
    }

    double GetB()
    {
        return b;
    }

    double GetC()
    {
        return c;
    }

    int ProveraTrougla()
    {
        if(a + b > c && a + c > b && c + b > a){
            if(a == b){
                cout<<"Trougao jeste jednakokraki!"<<endl;
            }
            else{
                cout<<"Trougao je validan ali nije jednakokraki!"<<endl;
            }
        }
        else{
            cout<<"Trougao nije validan!"<<endl;
            return 0;
        }
    }

    double Obim()
    {
        return a+b+c;
    }

    double Povrsina(){
        double S = (a + b + c) / 2;
        return sqrt(S*(S-a) * (S - b) * (S - c));
    }

};

int main()
{
    Trougao Trougao1;
    double a, b ,c;
    cout<<"Unesite krak A"<<endl;
    cin>> a;
    cout<<"Unesite krak B"<<endl;
    cin>> b;
    cout<<"Unesite osnovicu"<<endl;
    cin>> c;
    Trougao1.SetujA(a);
    Trougao1.SetujB(b);
    Trougao1.SetujC(c);
    int provera = 0;

    provera = Trougao1.ProveraTrougla();
    if(provera == 0);{
        return 0;
    }
    double Obim = Trougao1.Obim();
    double Povrsina = Trougao1.Povrsina();

    cout<<"Povrsina vaseg trougla je "<< Povrsina <<endl;
    cout<<"Obim vaseg trougla je "<< Obim <<endl;

    return 0;
}
