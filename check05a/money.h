/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
    int dollars;
    int cents;

public:
    void prompt();
    void display() const;

    double getDollars() const;
    void setDollars(double pDollars);

    double getCents() const;
    void setCents(double pCents);
};

#endif
