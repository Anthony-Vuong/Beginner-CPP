#include <iostream>

using namespace std;

int main()
{
    
    int rooms {0}; 
    const double room_price {32.5}; // const - will always be this value
    const double tax_rate {0.06};
    const int quote_expiration {30};
    
    cout << "Enter number of rooms: ";
    cin >> rooms;
    
    cout << "You want " << rooms << " rooms." << endl;
    cout << "Price per room is " << room_price << "." << endl;
    cout << "The tax rate is " << tax_rate << "." << endl;
    cout << "For your quote we will charge " << (room_price * rooms) + (room_price * rooms * tax_rate) << "." << endl;
 	cout << "And you have " << quote_expiration << " before this quote expires." << endl;
    return 0;
}
