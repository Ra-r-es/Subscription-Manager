#include "Abonament.h"
#include <string>

Abonament ::Abonament() {
    nume_abonament = "";
    pret = 0;
    perioada = 0;
}
Abonament::Abonament(std::string nume_abonament,float pret,int perioada) {
    this -> nume_abonament = nume_abonament;
    this -> pret = pret;
    this -> perioada = perioada;
}
Abonament::Abonament(Abonament &a) {
    nume_abonament = a.nume_abonament;
    pret = a.pret;
    perioada = a.perioada;
}
Abonament::~Abonament() {
}

std::string Abonament::get_nume_abonament() const {
    return nume_abonament;
}
float Abonament::get_pret() const {
    return pret;
}
int Abonament::get_perioada() const {
    return perioada;
}
void Abonament::set_nume_abonament(std::string nume_abonament) {
    this -> nume_abonament = nume_abonament;
}
void Abonament::set_perioada(int perioada) {
    this -> perioada = perioada;
}
void Abonament::set_pret(float pret) {
    this -> pret = pret;
}

float Abonament::pret_abonament() const {
    return pret*perioada;
}
void Abonament::Afisare(std::ostream &out) {
    out << "Numele Abonamentului este:"<< nume_abonament << std::endl;
    out << "Pretul Abonamentului este:"<< pret << std::endl;
    out << "Perioada pe care a fost facut este:"<< perioada << std::endl;
}

void Abonament::Afisare() {
    Afisare(std::cout);
}

std::istream &operator>>(std::istream &in, Abonament &a) {
    std :: cout << "Introduceti Numele Abonamentului:";
    in >> a.nume_abonament;
    std :: cout << std::endl;
    std :: cout << "Introduceti Pretul Abonamentului:";
    in >> a.pret;
    std :: cout << std::endl;
    std :: cout << "Introduceti perioada pe care a fost facut abonamentul:";
    in >> a.perioada;
    std :: cout << std::endl << std::endl;
    return in;
}
std:: ostream &operator<<(std::ostream &out, Abonament& a){
    out << "Numele Abonamentului este:"<< a.nume_abonament << std::endl;
    out << "Pretul Abonamentului este:"<< a.pret << std::endl;
    out << "Perioada pe care a fost facut este:"<< a.perioada << std::endl;
    return out;
}

Abonament Abonament::operator=(Abonament &a) {
    nume_abonament = a.nume_abonament;
    pret = a.pret;
    perioada = a.perioada;
    return *this;
}

Abonament::Abonament(const Abonament  &abonament) {
    nume_abonament = abonament.nume_abonament;
    pret = abonament.pret;
    perioada = abonament.perioada;
}




