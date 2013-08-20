
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
        short Array[5];
        for(i=0; i<10; i++)
        {
                Array[i] = i;
 		cout <<" Current Value =  "<< Array[i] << endl;

        }
        //cout <<" First Value =  "<< Array[0] << endl;
        return  0;
}
