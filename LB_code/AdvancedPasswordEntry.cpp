
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
	cout<<"Please  Enter Password"<<endl;
        for(i=0; i<PasswordSize; i++)
        {
                cout<<"*";
                cin >>UserEntry[i];
        }

        for(i=0; i<PasswordSize; i++ )
        {
          	if(ActualPassword[i] == UserEntry[i])
		{
                	cout <<UserEntry[i]<<endl;
		}
		else
		{
			cout <<"ERROR: INCORRECT"<<endl;
			return 0;
		}

        }
	cout << "CORRECT PASSWORD ENTERED"<<endl;
        return  0;

}
