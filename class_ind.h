#ifndef EXT
#define EXT
#ifndef IRR
#define IRR
#ifndef ENG
#define ENG
#ifndef BASE
#define BASE
#ifndef MOBIL
#define MOBIL
#include<string>

class indikator{
protected:
    std::string var[7]; 
    double total;
    double maks;
    std::string element;
public:   
    double ind[7];
    indikator();
    double getTotal();
    std::string getVar(int i);
    void set(int i,double a);
    std::string getElement();
};
class eksterior : public indikator{
public:
    eksterior();
    void set(int i,double n);
};
class mesin : public indikator{
public:
    mesin();
    void set(int i,double n);
};
class interior : public indikator{
public:
    interior();
    void set(int i,double n);
};

#endif
#endif
#endif
#endif
#endif