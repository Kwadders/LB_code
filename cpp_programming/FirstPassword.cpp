
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
        short ActualPassword[2];
        short UserEntry[2];

        for(i=0; i<2; i++)
        {
                cout <<"Please Enter a number"<<endl;
                cin >>UserEntry[i];
        }

        for(i=0; i<2; i++ )
        {
               	cout <<"Array pos  "<< i ;
                cout <<" = "<<UserEntry[i]<<endl;
        }
        return  0;
}
