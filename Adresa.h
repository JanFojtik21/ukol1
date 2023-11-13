//
// Created by fojtik on 13.11.2023.
//

#ifndef UKOL1_ADRESA_H
#define UKOL1_ADRESA_H

#include <string>


// Výčtový typ pro typ adresy (IP nebo MAC)
enum class AdresaTyp {
    IP,
    MAC
};


// Abstraktní třída Adresa

class Adresa {
public:
    //Konstruktor pro nastavení typu adresy.

    Adresa(AdresaTyp typ);

    // Getter pro typ adresy.
    AdresaTyp ZiskejTypAdresy() const;

    // Virtuální metoda pro výpis adresy.
    virtual void VypisAdresu() const = 0;
    // Metoda pro převod typu adresy na string.
    static std::string TypAdresyNaString(AdresaTyp typ);
  //Virtuální destruktor pro správné odstranění subclasses.
    virtual ~Adresa() = default;


    // Member variable for the type of address

private:
    AdresaTyp typAdresy;
};



#endif //UKOL1_ADRESA_H
