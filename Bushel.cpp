/*********************************
 * Bushel code
 *  Created by Kenneth Hobday & Elvet Potter II       01/21/2020
 *********************************/

#include <iostream>
using namespace std;

#include "Bushel.h"

// Bushel contructor - empty

bushel::bushel()
{ apples = 0;
  oranges = 0;
}

// Bushel contructor with counts

bushel::bushel(int a,int o)
{ apples = a;
  oranges = o;
}

// Bushel input

bool bushel::get(istream &in)
{ in >> apples >> oranges;
  return(in.good());
}

// Bushel output

void bushel::put(ostream &out)
{ out << apples << " Apples ";
  out << oranges << " Oranges";
}

// Bushel equal

bool bushel::operator==(bushel b)
{
    if (apples == b.apples && oranges == b.oranges)
        return true;
    else
        return false;
}
bool bushel::lesser(bushel b)
{
    if (apples< b.apples && oranges<b.oranges)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
bool bushel::greater(bushel b)
{
    if (apples > b.apples && oranges > b.oranges)
    {
        return true;
    }
    else
    {
        return false;
    }
}
