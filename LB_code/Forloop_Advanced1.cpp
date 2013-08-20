#include <iostream>
using namespace std;

/****************************************************************
*Author: Lewis Bucke                                            *
*Date: 30th April 2013                                          *
*Description: Function to output "HellowWorld" a number of      *
times defined by i                                              *
*****************************************************************/
int main()
{
        //Lewi's first CPP code  this code is used to repeat helo world 5 times
        int i; //Declare counting variable
        for(i=10; i>0; i--)
        {
                /*Print "Hello World" for values 10-5
                  Print "Bye Bye world" for values 5-0*/
                if((i<=10) && (i>5))
                {
                        cout << "Hello world" <<endl; // this is what it says it also counts how much it repeats
                }
                else
                //if(i<=5) //Can delete this line without changing logic
                {
                        cout << "Bye Bye World"<<endl; //Print out values when i less than 5#include <iostream>
                }
        }
        return  0;
}

