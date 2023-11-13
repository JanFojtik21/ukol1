//
// Created by fojtik on 13.11.2023.
//

#include "Adresa.h"

// Implementace konstruktoru pro třídu Adresa
// Inicializuje členskou proměnnou typAdresy poskytnutým argumentem

Adresa::Adresa(AdresaTyp typ) : typAdresy(typ) {}
// Implementace getter metody pro třídu Adresa
// Vrací hodnotu členské proměnné typAdresy
AdresaTyp Adresa::ZiskejTypAdresy() const {
    return typAdresy;
}
// Implementace statické metody pro třídu Adresa
// Převádí enum AdresaTyp na string

std::string Adresa::TypAdresyNaString(AdresaTyp typ) {
    return (typ == AdresaTyp::IP) ? "IP" : "MAC";
}