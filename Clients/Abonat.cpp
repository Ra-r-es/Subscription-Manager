//
// Created by Rares on 17/04/2024.
//
#include <iostream>
#include "Abonat.h"
#include "Abonament_Premium.h"
#include "Abonament.h"
#include "string"

Abonat::Abonat() {
    nr_telefon = "";
}

Abonat::Abonat(int id, std::string nume, std::string cnp, std::string numar_telefon, const Abonament& a){
    this -> id = id;
    this -> nume = nume;
    this -> cnp = cnp;
    nr_telefon = numar_telefon;
    x = nullptr;
    if (typeid(a) == typeid(Abonament_Premium)) {
        x = new Abonament_Premium(dynamic_cast<const Abonament_Premium&>(a));
    } else {
        x = new Abonament(a);
    }
}

Abonat::Abonat(Abonat &a){
    id = a.id;
    nume = a.nume;
    cnp = a.cnp;
    nr_telefon = a.nr_telefon;
    x = nullptr;
    if (typeid(a) == typeid(Abonament_Premium)) {
        x = new Abonament_Premium(dynamic_cast<Abonament_Premium&>(a));
    }
    else {
        x = new Abonament;
        x = a.x;
    }
}


Abonat::~Abonat() {
    delete x;
}

std::string Abonat::get_nrTelefon() const {
    return nr_telefon;
}

void Abonat::set_nrTelefon(std::string nr_telefon) {
    this -> nr_telefon = nr_telefon;
}

void Abonat::set_Abonament(Abonament a) {
    delete x;
    x = nullptr;
    if (typeid(a) == typeid(Abonament_Premium)) {
        x = new Abonament_Premium(dynamic_cast<Abonament_Premium&>(a));
    }
    else {
        x = new Abonament;
        *x = a;
    }
}

void Abonat::afisare(std::ostream &out) {
    Persoana::afisare(out);
    out << "Numarul de telefon: " << nr_telefon << std::endl;
    out << "Detalii abonament:" << std::endl;
    x->Afisare(out);
}
void Abonat :: afisare(){
    afisare(std::cout);
}

std::istream &operator>>(std::istream &in, Abonat &a) {
    std :: cout << "Introduceti Id-ul Persoanei:";
    in >> a.id;
    std :: cout << "Introduceti Numele Persoanei:";
    in >> a.nume;
    std :: cout << "Introduceti Cnp-ul Persoanei:";
    in >> a.cnp;
    std :: cout << "Introduceti numarul de telefon:";
    in >> a.nr_telefon;
    std::cout <<  std::endl;
    std :: cout << "Introduceti informatiile despre abonament:" << std::endl;
    std :: cout << "Este abonament premium? (1 = DA, 0 = NU): ";
    int isPremium;
    in >> isPremium;
    if (isPremium) {
        a.x = new Abonament_Premium;
        in >> *dynamic_cast<Abonament_Premium*>(a.x);
    } else {
        a.x = new Abonament;
        in >> *a.x;
    }
    return in;
}
std::ostream& operator<<(std::ostream& out,Abonat a){
    a.afisare(out);
    return out;
}

Abonat &Abonat::operator=(Abonat &a) {
    nr_telefon = a.nr_telefon;
    x = a.x;
    return *this;
}









