#include <iostream>

using namespace std;

enum TipPreliva {COKOLADNI, COKOLADNI_SA_SLAGOM};
enum StanjeKolaca {U_PRIPREMI, PECE_SE, ZAGOREO, PRIPREMLJEN};

class Preliv{
private:
    TipPreliva tip;

public:
    void dodajPreliv(){
        tip = COKOLADNI;
    }

    void dodajPreliv(TipPreliva tip1){
        tip = tip1;
    }

    bool DodajSlag(){
        if(tip == COKOLADNI){
            tip = COKOLADNI_SA_SLAGOM;
            return true;
        }
        else{
            return false;
        }
    }

    bool SkiniSlag(){
        if(tip == COKOLADNI_SA_SLAGOM){
            tip = COKOLADNI;
            return true;
        }
        else{
            return false;
        }
    }

    TipPreliva GetTipPreliva(){
        return tip;
    }

    void IspisPreliv(){
        cout<<"------------"<<endl;
        if(GetTipPreliva() == COKOLADNI){
            cout<<"TIP: COKOLADNI"<<endl;
        }
        else{
            cout<<"TIP: COKOLADNI_SA_SLAGOM"<<endl;
        }
        cout<<"------------"<<endl;
    }

};

class Kolac{
private:
    StanjeKolaca Stanje;
    int temperatura;
    Preliv preliv;
public:
    Kolac()
};

int main()
{

    return 0;
}
