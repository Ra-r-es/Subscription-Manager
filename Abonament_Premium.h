//
// Created by Rares on 15/04/2024.
//

#ifndef PROIECT_ABONAMENT_ABONAMENT_PREMIUM_H
#define PROIECT_ABONAMENT_ABONAMENT_PREMIUM_H
#include <iostream>
#include "Abonament.h"
#include <cstring>

class Abonament_Premium:public Abonament {
protected:
    int reducere;
public:
//Constructori
    Abonament_Premium();
    Abonament_Premium(std::string nume_abonament,float pret,int perioada);
    Abonament_Premium(std::string nume_abonament,float pret,int perioada,int reducere);
    Abonament_Premium(Abonament_Premium&); //Constructor de copiere
//Destructor
    ~Abonament_Premium();
//Getter
    float get_pret()const;
    int get_reducere()const;//returneaza reducerea pe care o are abonamentul

//Setter
    void set_reducere(int);//seteaza o noua reducere abonamentului
//Functii
    float pret_abonament() const;//returneaza pretul abonamentului
    void Afisare(std::ostream&);//Afiseaza detaliile despre abonament
    void copie(Abonament_Premium);//copiaza abonamentu dat ca parametru
// Supra Incarcare operatori
    friend std::istream& operator>>(std::istream&, Abonament_Premium&);//cin
    friend std::ostream& operator<<(std::ostream&,Abonament_Premium);//cout
    Abonament_Premium& operator=(Abonament_Premium&);//egal
    Abonament_Premium(const Abonament_Premium  &premium);
};


#endif //PROIECT_ABONAMENT_ABONAMENT_PREMIUM_H
