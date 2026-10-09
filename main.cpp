#include <iostream>
#include "Address.h"
#include "Date.h"

int main() {
    Date d;
    d.init("09/21/2007");
    d.printDate();

    Address a;
    a.init("505 Main St", "Townsville", "IN", "51254");
    a.printAddress();

    return 0;
}