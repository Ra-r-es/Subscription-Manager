//
// Created by Rares on 17/04/2024.
//

#include "Clienti.h"
#include "Abonat.h"
Clienti::Clienti(){
}

Clienti::Clienti(vector<Abonat *> a) {
    abonati = a;
}

Clienti::Clienti(Clienti &a) {
    abonati = a.abonati;
}

Clienti::~Clienti() {

}

void Clienti::AdaugaClient(Abonat *a) {
    abonati.emplace_back(a);
}

void Clienti::StergeClient() {
    abonati.pop_back();
}

void Clienti::StergeClient(int n) {
    if (n <= abonati.size())
        abonati.erase(abonati.begin()+n);
    else
        cout << "Nu exista al " << n << "-lea Client";
}

void Clienti::AfiseazaClienti() {
    for (int i = 0; i < abonati.size(); ++i){
        std :: cout << *abonati[i];
    }
}

void Clienti::NrAbonatiPremium() {
    int nr_abonati_premium = 0;
    for (int i = 0; i < abonati.size(); ++i){
        const Abonament* abonament = abonati[i]->getAbonament();
        if (const Abonament_Premium *premium = dynamic_cast<const Abonament_Premium*>(abonament)){
            nr_abonati_premium++;
        }
    }
    cout << "Numarul de abonati premium este: " << nr_abonati_premium;
    cout << endl;
}
float Clienti ::SumaPret_Abonamente() {
    float sum = 0;
    for (int i = 0; i < abonati.size(); ++i){
        const Abonament* abonament = abonati[i]->getAbonament();
        if (const Abonament_Premium *premium = dynamic_cast<const Abonament_Premium*>(abonament)) {
            sum += (premium->get_pret() - premium->get_reducere()) * premium->get_perioada();
        } else {
            sum += abonati[i]->getAbonament()->get_pret() * abonati[i]->getAbonament()->get_perioada();
        }
    }
    return sum;
}

std::ostream &operator<<(ostream &out, Clienti c) {
    out << "Lista clientilor este: " << endl << endl;
    for (int i = 0; i < c.abonati.size(); ++i){
        out <<"Datele Abonatului " << i+1 <<" sunt:" << endl;
        c.abonati[i]->afisare(cout);
        out << endl;
    }
    return out;
}

Clienti &Clienti::operator=(Clienti &c) {
    abonati = c.abonati;
    return *this;
}

Clienti Clienti::operator+(Clienti &c) {
    for(int i = 0; i < c.abonati.size(); ++i)
        abonati.push_back(c.abonati[i]);
    return *this;
}











