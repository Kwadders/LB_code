
#include <iostream>
using namespace std;

/****************************************************************
*Author: Lewis Bucke                                            *
*Date: 4th June 2013                                            *
*First Passworf program                                         *
*****************************************************************/
int main()
{
        short i; //Declare counting variable
        //short ActualPassword[2];
        short UserEntry[2];
	short ActualPassword[2] = {1, 2};

        for(i=0; i<2; i++)
        {
                cout <<"Please Enter a number"<<endl;
                cin >>UserEntry[i];
        }

        for(i=0; i<2; i++ )
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
