#include "Rolodex.h"
#include "Card.h"
#include <cctype>
#include <algorithm>
using namespace std;

bool lastSort ( Card first, Card second )
{
    string first2 = first.getLast(), second2 = second.getLast();
	int i = 0;
	while ( (i<first2.length()) && (i<second2.length()) )
	{
		if (tolower(first2[i])<tolower(second2[i])) 
			return true;
		else if (tolower(first2[i])>tolower(second2[i])) 
			return false;
		++i;
	}
	if (first2.length() < second2.length()) 
		return true;
	else 
		return false;
}
void Rolodex::cardAdd(Card obj)
{
	roloit = rolo.begin();
    rolo.insert(rolo.begin(), obj);
	rolo.sort(lastSort);
	while (roloit != rolo.end())
	{
		if( !obj.getLast().compare(roloit->getLast()))
			return;
		else
			roloit++;
	}
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
    return *roloit;
}

Card Rolodex::flip()
{
	roloit++;
	return *roloit;
}

bool Rolodex::search(string who)
{
	list< Card >::iterator tempit = roloit;
    roloit = rolo.begin();
    while ( roloit != rolo.end() )
    {
        if ( !roloit->getLast().compare(who) )
            return true;
        else
            roloit++;
    }
	for ( roloit = rolo.begin(); roloit != rolo.end(); roloit++ )
		if ( roloit->getLast()[0] == who[0] )
			return true;
	
	cout << "\nCould not find: " << who << endl;
	roloit = tempit;
	return false;
}

void Rolodex::show(ostream& os)
{
    list< Card >::iterator temp = roloit;
	
    for ( roloit = rolo.begin(); roloit != rolo.end(); roloit++ )
        roloit->print(os);
        
    roloit = temp;
}
