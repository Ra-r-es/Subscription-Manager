//
// Created by Rares on 16/04/2024.
//

#ifndef PROIECT_ABONAMENT_PERSOANA_H
#define PROIECT_ABONAMENT_PERSOANA_H
#include <iostream>
#include "Abonament.h"
#include "Abonament_Premium.h"
#include <cstring>
class Persoana {
protected:
    int id;
    std::string nume;
    std::string cnp;
public:
//Constructor
    Persoana();
    Persoana(int,std::string,std::string);
    Persoana(Persoana&);//Constructor de Copiere
//Destructor
    ~Persoana();
//Getter
    int get_id()const;//returneaza id-ul persoanei
    std::string get_nume()const;//rerturneaza numele persoanei
    std::string get_cnp()const;//returneaza cnp-ul persoanei
//Setter
    void set_id(int);//seteaza un nou id persoanei
    void set_nume(std::string);//seteaza un nou nume persoanei
    void set_cnp(std::string);//seteaza un nou cnp persoanei
//Functii
    virtual void afisare(std::ostream&);//Afiseaza detaliile despre Persoana
    virtual void afisare();
//Supra incarcare operatori
    friend std::istream& operator>>(std::istream&,Persoana&);//cin
    friend std::ostream& operator<<(std::ostream&,Persoana);//cout
    Persoana& operator=(Persoana&);//egal
};


#endif //PROIECT_ABONAMENT_PERSOANA_H
