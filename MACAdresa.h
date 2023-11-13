//
// Created by fojtik on 13.11.2023.
//

#ifndef UKOL1_MACADRESA_H
#define UKOL1_MACADRESA_H



#pragma once
#include "Adresa.h"

class MACAdresa : public Adresa {
public:
    MACAdresa(const std::string& adresa);
    void VypisAdresu() const override;

    const std::string& ZiskejMACAdresu() const;

private:
    std::string macAdresa;
};

#endif //UKOL1_MACADRESA_H

