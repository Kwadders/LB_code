
#include <iostream>
using namespace std;

/****************************************************************
*Author: Lewis Bucke                                            *
*Date: 4th June 2013                                            *
*First Passworf program                                         *
*****************************************************************/
int main()
{
	short PasswordSize = 10;
        short i; //Declare counting variable
        //short ActualPassword[2];
        short UserEntry[10];
	short ActualPassword[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	cout<<"***PASSWORD ENTRY***"<<endl;
	cout<<"Please  Enter Password"<<endl; // these will print out password entry  and plaese  enter passwrod it will also not repaet it thought the loop

	//this will  denfine how long it will go though the loop given by the predetermined size
        for(i=0; i<PasswordSize; i++)
        {
                cout<<"*";
                cin >>UserEntry[i]; //it will take in each char and assgin it to 16 bits  array 
        }

	//this will loop round the amout of times as the pasword size to count each char and check it matchs 
        for(i=0; i<PasswordSize; i++ )
        {

		//this is making sure that the user entry is the same ans the actul password
          	if(ActualPassowr[i]  == UserEntry[i]
		{
			//this is  going to print out the user enrty (char)
                	cout <<UserEntry[i]<<endl;
		}
		else
		{
			cout <<"ERROR: INCORRECT"<<endl; //this will print out "error" 
			return 0;
		}

        }
	cout << "CORRECT PASSWORD ENTERED"<<endl;
        return  0;

}
