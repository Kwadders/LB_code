
#include <iostream>
#include <string>
using namespace std;


//Function declarations
int PasswordChecker(void);
void MainMenu(void);
void Calculator(int Option);
void CalculatorMenu();
void ChangePassword(void);

// delcare globals varbiles 
string Password = "ABCDEF";

/****************************************************************
*Author: Lewis Bucke                                            *
*Date: 18th June 2013                                           *
*Initial program: Main menu and password checker                *
*****************************************************************/
int main()
{

	cout<<"*****************************************"<<endl;
	cout<<"LEWIS'S CODE...HANDS OFFF!!!!"<<endl;

	if(PasswordChecker())       // this calling on the code in password checker 
	{
		//cout<< "CORRECT PASSWORD"<<endl;
		cout<<"\033[2J\033[1;1H";
		MainMenu();
	}
	else
	{
		cout <<"INCORRECT PASSWORD"<<endl;
	}
	cout<<"*****************************************"<<endl;

}



/****************************************************************
*Author: Lewis Bucke                                            *
*Date: 18th June 2013                                           *
*reads in user input and check it against the real password     *
*****************************************************************/
int PasswordChecker(void)
{
	string UserInput;
	int i;

	for(i = 0; i < 3; i++)
	{
        	cout<<"**PASSWORD***"<<endl;
        	cout<<"Please  Enter Password"<<endl; // these will print out password entry  and plaese  enter passwrod it will also not repaet it thought the loop

        	getline(cin, UserInput);// this reads  in the string

	        if(UserInput == Password)
		{ // user has entered the correct password return true to calling function
			return 1;
		}
	}
	return 0; //if we are here failed password 3 times
}


/****************************************************************
*Author: Kwadwo Kissiedu                                        *
*Date: 2nd July 2013                                           	*
*Displays the Main menu and dtermines which menu user wants to  *
*show								*
*****************************************************************/
void MainMenu(void)
{
	int Option;
	//print out menu name
	cout<<"*****************************************"<<endl;
	cout<<"			MAIN MENU		"<<endl;
	cout<<"*****************************************"<<endl;

	//Display Menu options to user
	cout<<"1) CALCULATOR"<<endl;
	cout<<"2) CHANGE PASSWORD"<<endl;
	cout<<"3) EXIT"<<endl;

	//Read in user input
	cin>>Option;

	//Show user input
	cout<<"USER INPUT = "<<Option<<endl;

	//Use Switch statment to determine whiKwadwch menu option
	//has been selected. 
	//****Better than using if statement because we have more options and 
	//***and also makes code more readible**/
	switch(Option)
	{
		case 1:
                	cout<<"\033[2J\033[1;1H";
                	//cout<<"CALCULATOR"<<endl;
			CalculatorMenu();
			break;
		case 2:
			cout<<"\033[2J\033[1;1H";
			cout<<"CHANGE PASSOWRD"<<endl;
			break;
		case 3:
			cout<<"\033[2J\033[1;1H";
			cout<<"EXIT"<<endl;
			break;
		default: //default case to catch errors
			cout<<Option<<"  IS NOT A VALID ENTRY"<<endl;
			break;
	}
}


void CalculatorMenu(void)
{
	int Option;
        //print out menu name
        cout<<"*****************************************"<<endl;
        cout<<"                 CALCULATOR              "<<endl;
        cout<<"*****************************************"<<endl;

	while(1)
	{
        	//Display Menu options to user
		cout<<"Please select Option"<<endl;
       		cout<<"1) ADD"<<endl;
	        cout<<"2) SUBTRACT"<<endl;
        	cout<<"3) MUITIPLY"<<endl;
		cout<<"4) DIVDIE "<<endl;
		cout<<"5) EXIT "<<endl;

        	//Read in user input
        	cin>>Option;
		cout<<Option<<endl;

		if((Option >= 5) || (Option == 0))
			return;

		Calculator(Option);
	}
}
//Modify this to take in more than two input values!!!!
//clue ...Use an array and a loop

void Calculator(int Option)
{
	/*unsigned*/  int Value[10];
	int  i;
	/*unsigned */long long Total;

	i=0;

	while(i<10)
	{
		Total = 0;
		cout<<"\033[2J\033[1;1H";
		cout<<"Enter a Value"<<endl;
		cin>>Value[i++];
	}
	//cout<<"Enter a Value"<<endl;
	//cin>>Value[1];
	i=0;
	while(i<10)
	{
		cout<<"value"<<i<<"="<<Value[i]<<endl;
		i++;
	}

	switch(Option)
	{
		case 1:
			//cout<<"\033[2J\033[1;1H";
			i = 0;
			while(i<10)
			{
				Total += Value[i];
				i++;
			}
			//cout<<"ADDITION"<<endl;
			break;
		case 2:
			i = 0;
			while(i<10)
			{
			//cout<<"\033[2J\033[1;1H";
				Total -= Value[i];
				i++;
			//cout<<"SUBTRACT"<<endl;
			}
			break;
		case 3:
			i = 0;
			while(i<10)
			{
			//cout<<"\033[2J\033[1;1H";
				Total *= Value[i];
				i++;
			}
			//cout<<"MULTIPLY"<<endl;
			break;
		case 4:
			i = 0;
			while(i<10)
			{
			//cout<<"\033[2J\033[1;1H";
				Total /= Value[i];
				i++;
			}
			//cout<<"DIVIDE"<<endl;
			break;
		default:
			cout<<"\033[2J\033[1;1H";
                        cout<<Option<<"  IS NOT A VALID ENTRY"<<endl;
                        break;
	}

	cout<<"TOTAL = "<<Total<<endl;
}

void ChangePassword(void)
{}


