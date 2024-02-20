#include <iostream>
#include <string>

using namespace std;

const int MAX_TICKETS = 10;  // maximum number of tickets available
int tickets_remaining = MAX_TICKETS;  // number of tickets remaining

void purchase_ticket()
{
    if (tickets_remaining == 0)
    {
        cout << "Sorry, there are no tickets remaining." << endl;
    }
    else
    {
        string name;
        cout << "Enter your name: ";
        getline(cin, name);
        cout << "Thank you, " << name << ", for your purchase!" << endl;
        tickets_remaining--;
        cout << "There are now " << tickets_remaining << " tickets remaining." << endl;
    }
}

int main()
{
    cout << "Welcome to the ticket service!" << endl;

    while (tickets_remaining > 0)
    {
        cout << "There are " << tickets_remaining << " tickets remaining." << endl;
        cout << "Would you like to purchase a ticket? (y/n) "<<endl;
        char answer;
        cin >> answer;
        if (answer == 'y')
        {
            purchase_ticket();
        }
        else
        {
            break;
        }
    }

    cout << "Sorry, there are no tickets remaining." << endl;
    return 0;
}
