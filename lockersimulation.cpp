/*
Programmer - Student  Name: Justin Winchester

Program Name: Locker Door TOGGLE Simulation 

Program Number:  1 

Input: Any N <= 1000; (Must be whole number to simulate actual locker door)
 An integer value from the user that will represent a number of lockers and a number of students that will interact with the locker doors by opening or closing them.
 Doors of lockers state whether open or closed in this case will be represented by boolean values;

Description: This Program will be designed to simulate a certain number of students that will visit a set of N lockers each with their respective locker number they 
begin at one student per locker, and students will interact with any 
doors from that point onward that are a in increments of their same numbers. Exp: Student one will interact with every door 1 + 1 = 2, 2 + 1 (one being his #) ,.. and 
so on, 3 interacting with his door and 6,9..., etc. 
i will need to design an algorithm that simulates the lockers and a student to interact with each locker's door in their own way.  If the door is open, they will close it 
and vice versa.
This program will use loops and conditional statements to simulate these interactions in this scenario.  





*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	 int n; // Receive input on any whole integer n <= 1000; 
 	
	cout << " Please Enter the number of lockers" << endl; //Recieve user input regarding number of lockers and students (n)
		cin >> n;
	 bool lockarray[n+1];//Declare array to store values of locker numbers
	for(int lockz = 1; lockz <= n; lockz++)//Loop to ensure simulation is staged properly and door are iniitally closed
	{
		lockarray[lockz]=false; 
	}//set all values to closed i:e, closed=false : open = true.
	
	for(int lockz = 1; lockz <= n; lockz++)
	{ 
        		// This nested for loop combiination will simulate the lockers and the students interactions with them
       		
	for(int studz = lockz; studz <= n; studz += lockz)
		{
		   
		
				lockarray[studz] = !lockarray[studz];//To alter the state of the lockers to whatever is 
							     //the opposite condition, (from open to closed), or (from false to true), 
							     // or vice versa.    
	
		}
	}
	 cout<<"       THE LOCKERS THAT HAVE MANAGED TO REMAIN OPEN ARE        " << endl;

	//End loop "cout" Results of Program Simulation Calculation. 
	//Print Function For Lockers that have remained open
	for(int lockz= 1; lockz <= n ; lockz++)
	{
		if(lockarray[lockz]) // ?If open?
		{        
			cout<< "Locker # " << lockz << " " << " : " << " " << "is "<< " "  << ":" << " " << "Open " <<endl; 
		}
	}

return 0; 
}
	
