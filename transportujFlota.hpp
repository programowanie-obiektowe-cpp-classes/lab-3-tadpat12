#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int sum_towar=0;
    unsigned int liczba=0;
    // Twoja implementacja tutaj
    Stocznia stocznia{};
    if(towar == 0){
        return 0;
    }
    else{
     while(towar>sum_towar){
       Statek* s1 = stocznia();
       int m = s1->transportuj();
       sum_towar = sum_towar+m;
       if (dynamic_cast<Zaglowiec*>(s1)){
         liczba++;
       }        
       delete s1;
     }
     return liczba;
    }
    
}