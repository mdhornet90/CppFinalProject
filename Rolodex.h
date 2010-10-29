#ifndef ROLODEX_H
#define ROLODEX_H
#include "Card.h"
#include <string>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

class Rolodex
{
    public:
        void cardAdd(Card obj);
        Card cardRemove();
        Card getCurrentCard();
        void search(string who);
        void show(ostream& os);
    private:
        list< Card > rolo;
        list< Card >::iterator roloit;
};
                
#endif
