#include "Card.h"
#include "Rolodex.h"
#include <iostream>
#include <cstring>
using namespace std;

void listElem(Rolodex temp)
{
    temp.show(cout);
}

void view(Rolodex temp)
{
	temp.getCurrentCard().print(cout);
}

void search(Rolodex temp)
{
	string who;
	
	cout << "\nEnter the last name of the person you are looking for: ";
	cin >> who;
	if (temp.search(who))
		temp.getCurrentCard().print(cout);
	else
		return;
}

void modify(Rolodex temp)
{
	temp.getCurrentCard().print(cout);
	string answer;
	cout << "Please enter the field you want to modify (First Name, Last Name, Occupation, Address, or Phone),\nor type 'done' if finished: ";
	cin >> answer;
	while ( 1 )
	{
		if ( !strcasecmp(answer.c_str(), "first name") )
			temp.getCurrentCard().setFirst(answer);
		else if ( !strcasecmp(answer.c_str(), "last name") )
			temp.getCurrentCard().setLast(answer);
		else if ( !strcasecmp(answer.c_str(), "occupation") )
			temp.getCurrentCard().setLast(answer);
		else if ( !strcasecmp(answer.c_str(), "address") )
			temp.getCurrentCard().setOcc(answer);
		else if ( !strcasecmp(answer.c_str(), "phone") )
			temp.getCurrentCard().setPhone(answer);
		else if ( !strcasecmp(answer.c_str(), "done") )
		{
			temp.cardAdd(temp.cardRemove());
			
			return;
		}
			cout << "Please enter a valid parameter: ";
			cin >> answer;
	}
}

int main(void)
{
    Rolodex mainrolo;
    int i;
    Card card[10];
	card[0].setFirst("Tony");
	card[0].setLast("Hansen");
	card[0].setAddress("12 E. St.\nNY, NY 33333");
	card[0].setOcc("Writer");
	card[0].setPhone("555-9999");
	card[1].setFirst("Jon");
	card[1].setLast("Smyth");
	card[1].setAddress("CMU Computer Services Pittsburg, PA");
	card[1].setOcc("Computer Hardware");
	card[1].setPhone("555-1324");
	card[2].setFirst("Alonza");
	card[2].setLast("Heard");
	card[2].setAddress("123 Anyplace Ave\nMalden, MA");
	card[2].setOcc("Mechanic");
	card[2].setPhone("555-5678");	
	card[3].setFirst("Jen");
	card[3].setLast("Reyes");
	card[3].setAddress("325 Oak Rd\nWilmington, MA");
	card[3].setOcc("Graphic Artist");
	card[3].setPhone("555-4950");	
	card[4].setFirst("Alan");
	card[4].setLast("Lupine");
	card[4].setAddress("1 Bigelow Ave.\nLawrence, MA");
	card[4].setOcc("Vet");
	card[4].setPhone("555-7654");	
	card[5].setFirst("Jewel");
	card[5].setLast("Proverb");
	card[5].setAddress("34 Washington St.\nWaltham, MA");
	card[5].setOcc("Landscaper");
	card[5].setPhone("555-3333");	
	card[6].setFirst("Paul");
	card[6].setLast("Revere");
	card[6].setAddress("45 Commonwealth Ave.\nBoston, MA");
	card[6].setOcc("Radical Revolutionary");
	card[6].setPhone("555-1776");	
	card[7].setFirst("Adolf");
	card[7].setLast("Coors");
	card[7].setAddress("Boston, MA");
	card[7].setOcc("Beer Manufacturer");
	card[7].setPhone("555-2337");	
	card[8].setFirst("Seymour");
	card[8].setLast("Papert");
	card[8].setAddress("MIT");
	card[8].setOcc("Lego Professor");
	card[8].setPhone("555-1111");
	card[9].setFirst("Fred");
	card[9].setLast("Milton");
	card[9].setAddress("12 Freedom Way\nNashua, NH");
	card[9].setOcc("Sales");
	card[9].setPhone("555-9981");	
    
	for ( i = 0; i < 10; i++ )
		mainrolo.cardAdd(card[i]);
    
    listElem(mainrolo);
    search(mainrolo);
    
	return 0;
}
