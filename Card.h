#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

class Card
{
    public:
        Card();
        Card( string first, string last, string occ, string add, string phone );
        void setLast(const string last);
        string getLast();
        void setFirst(const string first);
        string getFirst();
        void setOcc(const string occup);
        string getOcc();
        void setAddress(const string add);
        string getAddress();
        void setPhone(const string phone);
        string getPhone();
        void print(ostream& os);
    private:
        string lastName;
        string firstName;
        string Occupation;
        string Address;
        string mPhone;
};

#endif
