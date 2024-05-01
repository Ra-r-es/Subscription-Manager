//
// Created by Rares on 16/04/2024.
//

#ifndef PROIECT_ABONAMENT_CLIENTI_H
#define PROIECT_ABONAMENT_CLIENTI_H

#include <iostream>
#include <vector>
#include "Abonat.h"
#include "Abonament_Premium.h"
#include "Abonament.h"
using namespace std;

class Clienti {
protected:
    vector<Abonat*> abonati;
public:
//Constructori
    Clienti();
    Clienti(vector<Abonat*>);

    Clienti(Clienti&);//Constructor de Copiere
//Destructor
    ~Clienti();
//Functii
    void AdaugaClient(Abonat*);//Adauga clienti
    void StergeClient();//Sterge ultimul Client
    void StergeClient(int n);//Sterge al n-lea client
    void AfiseazaClienti();//Afiseaza Clientii
    void NrAbonatiPremium();//Afiseaza numarul abonatilor premium
    float SumaPret_Abonamente();//suma de bani încasată de la toți abonații considerând perioada ca fiind nr de luni si prețul este plătit pe fiecare lună.
//Supra Incarcare Operatori
    friend std::ostream& operator<<(std::ostream&,Clienti);//cout
    Clienti& operator=(Clienti&);//egal
    Clienti operator+(Clienti&);//concateneaza la finalul vectorului de Abonati noii Clienti
};

#endif //PROIECT_ABONAMENT_CLIENTI_H
