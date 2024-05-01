//
// Created by Rares on 16/04/2024.
//

#include "Abonament_Premium.h"
#include <iostream>
#include <string>

Abonament_Premium::Abonament_Premium() {
    reducere = 0;
}
Abonament_Premium::Abonament_Premium(std::string nume_abonament, float pret, int perioada){
    set_nume_abonament(nume_abonament);
    set_pret(pret);
    set_perioada(perioada);
    reducere = 0;
}

Abonament_Premium::Abonament_Premium(std::string nume_abonament, float pret, int perioada, int reducere):Abonament(nume_abonament,pret,perioada), reducere(reducere) {
}

Abonament_Premium::Abonament_Premium(Abonament_Premium &a) {
    set_nume_abonament(a.get_nume_abonament());
    set_perioada(a.get_perioada());
    set_pret(a.get_pret());
    reducere = a.reducere;
}

Abonament_Premium::~Abonament_Premium() {
}

int Abonament_Premium::get_reducere() const {
    return reducere;
}

void Abonament_Premium::set_reducere(int reducere){
    this -> reducere = reducere;
}
void Abonament_Premium ::Afisare(std::ostream &out) {
    out << "Numele Abonamentului este:"<< get_nume_abonament() << std::endl;
    out << "Pretul Abonamentului este:"<< get_pret() << std::endl;
    out << "Perioada pe care a fost facut este:"<< get_perioada() << std::endl;
    out << "Pretul Abonamentului va fi redus cu:"<< get_reducere() << std::endl;
}

std::istream &operator>>(std::istream &in, Abonament_Premium &a) {
    std :: cout << "Introduceti Numele Abonamentului:";
    in >> a.nume_abonament;
    std :: cout << "Introduceti Pretul Abonamentului:";
    in >> a.pret;
    std :: cout << "Introduceti perioada pe care a fost facut abonamentul:";
    in >> a.perioada;
    std :: cout << "Introduceti reducerea abonamentului:";
    in >> a.reducere;
    return in;
}
std::ostream &operator<<(std::ostream &out,Abonament_Premium a){
    std::cout << std::endl << std::endl << a.pret << std::endl;
    out << "Numele Abonamentului este:"<< a.nume_abonament << std::endl;
    out << "Pretul Abonamentului este:"<< a.pret << std::endl;
    out << "Perioada pe care a fost facut este:"<< a.perioada << std::endl;
    out << "Reducerea abonamentului este de:" << a.reducere << std::endl;
    return out;
}

Abonament_Premium &Abonament_Premium::operator=(Abonament_Premium &a) {
    nume_abonament = a.nume_abonament;
    pret = a.pret;
    perioada = a.perioada;
    reducere = a.reducere;
    return *this;
}

void Abonament_Premium::copie(Abonament_Premium a) {
    reducere = a.reducere;
    nume_abonament = a.nume_abonament;
    pret = a.pret;
    perioada = a.perioada;
}


float Abonament_Premium::get_pret() const {
    return pret;
}

float Abonament_Premium::pret_abonament() const {
    return (pret-reducere)*perioada;
}

Abonament_Premium::Abonament_Premium(const Abonament_Premium  &premium) {
    reducere = premium.reducere;
    perioada = premium.perioada;
    nume_abonament = premium.nume_abonament;
    pret = premium.pret;
}







