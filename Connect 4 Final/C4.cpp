#include <iostream>

using namespace std;

#include "C4F.h"

int main()
{
    char choice;
    srand(time(NULL));
    
	if (pickMode())//decide pvp (true) or pve (false)
		PvP(); //Start PvP
	else
		PvE(); //Start PvE
    
    //play again loop
    do
    {
        cout<<"\nWould you like to play again? (y/n) ";
        cin>>choice;
    }
    //validate
    while (!(choice == 'y' || choice == 'n' || choice == 'Y' || choice == 'N')); 
    //start again if they choose yes, otherwise, thanks for playing
    if (choice=='y'||choice=='Y')
        main();
    else
        cout<<"Thanks for playing! \v-William and Greeley\n"; 
    
	return 0;
}
