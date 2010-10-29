#include "Rolodex.h"
#include "Card.h"
#include <cctype>
using namespace std;

bool lastSort ( Card first, Card second )
{
    string string1 = first.getLast(), string2 = second.getLast();
    int i = 0;
    while ( (i < string1.length()) && (i < string2.length()) )
    {
        if ( isalpha(string1[i]) < isalpha(string2[i]) )
            return true;
        else if ( isalpha(string1[i]) > isalpha(string2[i]) )
            return false;
    }
    if (string1.length()<string2.length()) 
        return true;
    else 
        return false;
}
void Rolodex::cardAdd(Card obj)
{
    rolo.insert(rolo.begin(), obj);
    rolo.sort(lastSort);
    search(obj.getLast());
}

Card Rolodex::cardRemove()
{
    rolo.erase(roloit);
    Card temp = *roloit;
    
    if ( roloit == rolo.end())
        roloit = rolo.begin();
    else
        roloit++;
        
    return temp;
}

Card Rolodex::getCurrentCard()
{
    Card temp = *roloit;
    return temp;
}

void Rolodex::search(string who)
{
    Card temp;
    list< Card >::iterator tempit = roloit;
    roloit = rolo.begin();
    while ( roloit != rolo.end() )
    {
        temp = *roloit;
        if ( !temp.getLast().compare(who) )
        {
            roloit = roloit;
            return;
        }
        else
            roloit++;
    }
    if ( temp.getLast().compare(who) )
    {
        cout << "Name not found, please retype and try again." << endl;
        roloit = tempit;
    }
}

void Rolodex::show(ostream& os)
{
    list< Card >::iterator temp = roloit;
    Card tempit = *roloit;
    for ( roloit = rolo.begin(); roloit != rolo.end(); roloit++ )
        tempit.print(os);
        
    roloit = temp;
}
