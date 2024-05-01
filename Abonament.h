//
// Created by Rares on 15/04/2024.
//

#ifndef PROIECT_ABONAMENT_ABONAMENT_H
#define PROIECT_ABONAMENT_ABONAMENT_H
#include <iostream>
#include <string>
//Abonamentul costa 150 lei pe luna
class Abonament {
protected:

    std :: string nume_abonament;
    float pret;
    int perioada;
public:
//Constructori.
    Abonament();
    Abonament(std::string nume_abonament,float pret,int perioada);
    Abonament(Abonament&); // Constructor de Copiere.
//Destructor.
    virtual ~Abonament();
//Getter.
    std::string get_nume_abonament()const;//returneaza numele abonamentului
    virtual float get_pret()const;//returneaza pretul lunar al abonamentului
    int get_perioada()const;//returneaza perioada pe care este facut abonamentul
//Setter.
    void set_nume_abonament(std::string nume_abonament);//Seteaza un nou nume abonamentului
    void set_pret(float pret);//seteaza pretul abonamentului pe luna
    void set_perioada(int perioada);//seteaza o noua perioada pe care este facut abonamentul
//Functii ale clasei
    virtual float pret_abonament() const;//returneaza pretul total al abonamentului in fuctie de pret si perioada
    virtual void Afisare(std::ostream&);//Afiseaza detaliile despre abonament
    void Afisare();
//Supra Incarcare operatori:
    friend std::istream& operator>>(std::istream&, Abonament&); //cin
    friend std::ostream& operator<<(std::ostream&, Abonament&); //cout
    Abonament operator=(Abonament&); //egal
    Abonament(const Abonament &abonament);
};


#endif //PROIECT_ABONAMENT_ABONAMENT_H
