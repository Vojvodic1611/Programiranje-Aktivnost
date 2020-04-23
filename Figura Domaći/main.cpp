#include <iostream>
#include <math.h>

using namespace std;

class Figura{
public:
    virtual double Povrsina() = 0;
    virtual double Obim() = 0;
};
class Pravougaonik: public Figura{
private:
    double a;
    double b;
public:
    Pravougaonik(){
        a = 5;
        b=10;
    }
    Pravougaonik(double a1, double b1){
        a = a1;
        b = b1;
    }
    Pravougaonik(Pravougaonik &pravougaonikN){
        a = pravougaonikN.a;
        b = pravougaonikN.b;
    }
    double getA(){
        return a;
    }
    double getB(){
        return b;
    }
    double Povrsina(){
        return a*b;
    }
    double Obim(){
        return 2*a + 2*b;
    }
};

class Elipsa{
private:
    double r1;
    double r2;
public:
    Elipsa(){
        r1 = 5;
        r2 = 10;
    };
    Elipsa(double R1, double R2){
        r1 = R1;
        r2 = R2;
    };
    Elipsa(Elipsa &ElipsaN){
        r1 = ElipsaN.r1;
        r2 = ElipsaN.r2;
    };
    double getR1(){
        return r1;
    }
    double getR2(){
        return r2;
    }
    double Povrsina(){
        return 3.14*(3*(r1+r2)-sqrt((3*r1*r2)*(r1+3*r2)));
    }
    double Obim(){
        return r1*r2*3.14;
    }
};

class Oblik{
private:
    Pravougaonik A;
    Elipsa B;
public:
    Oblik() : A(), B(){};
    Oblik(double a, double b, double r1, double r2) : A(a,b), B(r1,r2){};
    Oblik(Oblik &OblikN) : A(), B(){};
    double PovrsinaOblika(){
        return A.Povrsina() - B.Povrsina();
    }
    double ObimOblika(){
        return A.Obim() + B.Obim();
    }
};

class PravilanOblik:public Oblik{
private:
    double a, r1;
public:
    PravilanOblik():Oblik(){};
    PravilanOblik(double aa, double r1r1): Oblik(a, a, r1, r1){};
    PravilanOblik(PravilanOblik &PravilanOblikN): Oblik(){};
};

int main()
{
    Pravougaonik Pr1;
    Pravougaonik Pr2(2, 5);
    Elipsa El1;
    Elipsa El2(4,8);
    Oblik Ob1;
    Oblik Ob2(8, 5, 4, 7);
    PravilanOblik Pob1;
    PravilanOblik Pob2(10, 5);
    cout<<"Pravougaonik: "<<endl;
    cout<<Pr1.Povrsina()<<" "<<Pr1.Obim()<<endl;
    cout<<Pr2.Povrsina()<<" "<<Pr2.Obim()<<endl;
    cout<<"Elipsa: "<<endl;
    cout<<El1.Povrsina()<<" "<<El1.Obim()<<endl;
    cout<<El2.Povrsina()<<" "<<El2.Obim()<<endl;
    cout<<"Oblik: "<<endl;
    cout<<Ob1.PovrsinaOblika()<<" "<<Ob1.ObimOblika()<<endl;
    cout<<Ob2.PovrsinaOblika()<<" "<<Ob2.ObimOblika()<<endl;
    cout<<"Pravilan Oblik: "<<endl;
    cout<<Pob1.PovrsinaOblika()<<" "<<Pob1.ObimOblika()<<endl;
    cout<<Pob2.PovrsinaOblika()<<" "<<Pob2.ObimOblika()<<endl;
    return 0;
}
