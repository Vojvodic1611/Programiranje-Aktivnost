#include <iostream>

using namespace std;

enum TipPreliva {COKOLADNI = 1, COKOLADNI_SA_SLAGOM};
enum StanjeKolaca {U_PRIPREMI = 1, PECE_SE , ZAGOREO, PRIPREMLJEN};

class Preliv{
private:
    TipPreliva tip;

public:
    Preliv(){
        tip = COKOLADNI;
    };
    Preliv(TipPreliva t){
            tip = t;
    };
    Preliv(const Preliv &KopijaPreliv){
        tip = KopijaPreliv.tip;
    };
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

    TipPreliva GetTipPreliva()const{
        return tip;
    }

    void SetTipPreliva(TipPreliva tip1){
        tip = tip1;
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

class Kolac:public Preliv{
private:
    StanjeKolaca Stanje;
    int temperatura;
    Preliv preliv;
public:
    Kolac():Preliv(){
        Stanje = U_PRIPREMI;
        temperatura = 20;
    };
    Kolac(StanjeKolaca stanje_kolaca, int temperatura1, TipPreliva tip_p):Preliv(tip_p){
        Stanje = stanje_kolaca;
        temperatura = temperatura1;
    };
    Kolac(const Kolac &kopijaKolaca){
        Stanje = kopijaKolaca.Stanje;
        temperatura = kopijaKolaca.temperatura;
        preliv = kopijaKolaca.preliv;
    };

    StanjeKolaca getStanje()const{
        return Stanje;
    }
    int getTemp()const{
        return temperatura;
    }
    Preliv getPreliv()const{
        return preliv;
    }

    bool StaviDaSePece(){
        if(preliv.GetTipPreliva() != COKOLADNI_SA_SLAGOM){
            Stanje = PECE_SE;
            temperatura += 20;
            return true;
        }
        return false;
    };
    bool ZavrsiPecenje(){
        if(Stanje == PECE_SE){
            Stanje = U_PRIPREMI;
            temperatura = 20;
            return true;
        }
        return false;
    };
    bool ZavrsiKolac(){
        if(Stanje == U_PRIPREMI){
            Stanje = PRIPREMLJEN;
            return true;
        }
        return false;
    };
    bool PovecajTemperaturu(){
        if(Stanje == PECE_SE){
            if(temperatura < 100){
                temperatura += 20;
            }
            else{
                Stanje = ZAGOREO;
                temperatura = 20;
            }
            return true;
        }
        return false;
    };
    bool SmanjiTemperaturu(){
        if(Stanje == PECE_SE){
            if(temperatura>40){
                temperatura -= 20;
                return true;
            }
        }
        return false;
    };
    bool DodajSlag(){
        if(Stanje == U_PRIPREMI){
                if(preliv.GetTipPreliva() == COKOLADNI){
                    preliv.SetTipPreliva(COKOLADNI_SA_SLAGOM);
                    return true;
                }
        }
        return false;
    };
    bool UkloniSlag(){
        if(Stanje == U_PRIPREMI){
                if(preliv.GetTipPreliva() == COKOLADNI_SA_SLAGOM){
                    preliv.SetTipPreliva(COKOLADNI);
                    return true;
                }
        }
        return false;
    }
};

    void IspisiPreliv(const Preliv &prelivN){
        switch(prelivN.GetTipPreliva()){
        case 1:
            cout<<"------------------"<<endl;
            cout<<"Preliv: COKOLADNI"<<endl;
            cout<<"------------------"<<endl;
            break;
        case 2:
            cout<<"------------------"<<endl;
            cout<<"Preliv: COKOLADNI_SA_SLAGOM"<<endl;
            cout<<"------------------"<<endl;
            break;
        }
    }
    void IspisiKolac(const Kolac &kolacN){
        cout<<"Stanje : ";
        switch(kolacN.getStanje()){
        case 1 :
            cout<<"U pripremi"<<endl;
            break;
        case 2 :
            cout<<"Pece se"<<endl;
            break;
        case 3 :
            cout<<"Zagore je. Jako lose pravis kolace"<<endl;
            break;
        case 4 :
            cout<<"Pripremljen je"<<endl;
            break;
        }
        cout<<"TEMPERATURA : "<<kolacN.getTemp()<<endl;
        IspisiPreliv(kolacN.getPreliv());
    }


int meni(){
    int i;
    do{
        cout<<"1. Stavi da se pece"<<endl;
        cout<<"2. Ispeci kolac"<<endl;
        cout<<"3. Zavrsi kolac"<<endl;
        cout<<"4. Povecaj temperaturu"<<endl;
        cout<<"5. Smanji temperaturu"<<endl;
        cout<<"6. Dodaj slag"<<endl;
        cout<<"7. Ukloni slag"<<endl;
        cout<<"8. Ispis kolac"<<endl;
        cout<<"9. Ispis preliv"<<endl;
        cout<<"10. Exit"<<endl;
        cin>>i;
    }while(i<0 && i>10);
    return i;

}


int main()
{
    Kolac kolac;
    int provera;
    do
    {
        provera=meni();
        switch(provera)
        {
        case 1:
            kolac.StaviDaSePece();
            break;
        case 2:
            kolac.ZavrsiPecenje();
            break;
        case 3:
            kolac.ZavrsiKolac();
            break;
        case 4:
            kolac.PovecajTemperaturu();
            break;
        case 5:
            kolac.SmanjiTemperaturu();
            break;
        case 6:
            kolac.DodajSlag();
            break;
        case 7:
            kolac.UkloniSlag();
            break;
        case 8:
            IspisiKolac(kolac);
            break;
        case 9:
            IspisiPreliv(kolac.getPreliv());
            break;
        }
    }while(provera!=10);
    Preliv p;
    return 0;
}
