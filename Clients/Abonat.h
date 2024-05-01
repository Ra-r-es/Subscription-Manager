//
// Created by Rares on 16/04/2024.
//

#ifndef PROIECT_ABONAMENT_ABONAT_H
#define PROIECT_ABONAMENT_ABONAT_H
#include "Persoana.h"
#include "Abonament.h"
#include "Abonament_Premium.h"
#include <cstring>
#include <iostream>
class Abonat : public Persoana{
protected:
    std::string nr_telefon;
    Abonament *x;
public:
//Constructor
    Abonat();
    Abonat(int,std::string,std::string,std::string,const Abonament&);
    Abonat(Abonat&);//Constructor de Copiere
//Destructor
    ~Abonat();
//Getter
    std::string get_nrTelefon()const;//returneaza nr de telefon
    const Abonament* getAbonament()const{
        return x;
    }//returneaza Abonamentul
//Setter
    void set_nrTelefon(std::string);//updateaza nr de telefon
    void set_Abonament(Abonament);//Updateaza Abonamentul
//Functii
    void afisare(std::ostream&);//afiseaza detaliile abonatului
    void afisare();
//Supra Incarcare operatori
    friend std::istream& operator>>(std::istream&, Abonat&);//cin
    friend std::ostream& operator<<(std::ostream&, Abonat);//cout
    Abonat& operator=(Abonat&);//egal
};


#endif //PROIECT_ABONAMENT_ABONAT_H
