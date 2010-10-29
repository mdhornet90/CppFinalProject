#include "Card.h"
#include "Rolodex.h"
#include <iostream>
using namespace std;

void listElem(Rolodex temp)
{
    temp.show(cout);
}

int main(void)
{
    Rolodex mainrolo;
    int i;
    
    Card card1( "Tony", "Hansen", "Writer", "12 E. St.\nNY, NY 33333", "555-9999"), 
         card2("Jon", "Smyth", "Computer Hardware", "CMU Computer Services Pittsburgh, PA", "555-1324"), 
         card3("Alonza", "Heard", "Mechanic", "123 Anyplace Ave\nMalden, MA", "555-5678"), 
         card4("Jen", "Reyes", "Graphic Artist", "325 Oak Rd\nWilmington, MA", "555-4950"), 
         card5("Alan", "Lupine", "Vet", "1 Bigelow Ave.\nLawrence, MA", "555-7654"), 
         card6("Jewel", "Proverb", "Landscaper", "34 Washington St.\nWaltham, MA", "555-3333"),
         card7("Paul", "Revere", "Radical Revolutionary", "45 Commonwealth Ave.\nBoston, MA", "555-1776"), 
         card8("Adolf", "Coors", "Beer Manufacturer", "Boston, MA", "555-2337"), 
         card9("Seymour", "Papert", "Lego Professor", "MIT", "555-1111"), 
         card10("Fred", "Milton", "Sales", "12 Freedom Way\nNashua, NH", "555-9981");
         
    mainrolo.cardAdd(card1);
    mainrolo.cardAdd(card2);
    mainrolo.cardAdd(card3);
    mainrolo.cardAdd(card4);
    mainrolo.cardAdd(card5);
    mainrolo.cardAdd(card6);
    mainrolo.cardAdd(card7);
    mainrolo.cardAdd(card8);
    mainrolo.cardAdd(card9);
    mainrolo.cardAdd(card10);
    
    listElem(mainrolo);
    
    return 0;
}
