#include "Card.h"
using namespace std;

Card::Card()
{
    firstName = '\0';
    lastName = '\0';
    Address = '\0';
    Occupation = '\0';
    mPhone = '\0';
}

Card::Card( string first, string last, string occ, string add, string phone )
{
    firstName = first;
    lastName = last;
    Occupation = occ;
    Address = add;
    mPhone = phone;
}
    
void Card::setLast(const string last)
{
    lastName = last;
}

string Card::getLast()
{
    return lastName;
} 

void Card::setFirst(const string first)
{
    firstName = first;
}

string Card::getFirst()
{
    return firstName;
}

void Card::setOcc(const string occup)
{
    Occupation = occup;
}

string Card::getOcc()
{
    return Occupation;
}

void Card::setAddress(const string add)
{
    Address = add;
}

string Card::getAddress()
{
    return Address;
}
void Card::setPhone(const string phone)
{
    mPhone = phone;
}

string Card::getPhone()
{
    return mPhone;
}

void Card::print(ostream& os)
{	
	os << "\nName: " << getLast() << ", " << getFirst() << "\nOccupation: " << getOcc() 
        << "\nAddress: " << getAddress() << "\nPhone Number: " << getPhone() << endl;
}
