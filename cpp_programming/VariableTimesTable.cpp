
#include <iostream>
using namespace std;

/****************************************************************
*Author: Lewis Bucke                                            *
*Date: 30th April 2013                                          *
*Description: Starting to to learn about arrays                 *
*****************************************************************/
int main()
{
        short i; //Declare counting variable
	short Multiplier;	
        short Array[10];

	cout<<"Enter a value"<<endl;
        cin >> Multiplier;
        for(i=0; i<10; i++)
        {
 		if (i==0)
		{	//																																											
                	cout <<"Times Table of "<< Multiplier << endl;
		}
                Array[i] = i * Multiplier;;
 		cout <<" Current Value =  "<< Array[i] << endl;
        }
        //cout <<" First Value =  "<< Array[0] << endl;
        return  0;
}
