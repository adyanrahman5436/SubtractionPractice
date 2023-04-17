/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

//this program will randomly generate 2 one digit numbers so that someone
//can practice their subtraction skills. The first number will always be 
//greater than the 2nd number going left to right

int main()
{
    int random1, random2, randAns1, randAns2, yourAnswer;
    
    //this is seeding the random number generator, however cin is used
    //so that zylabs can provide the first input
    
    unsigned int seed;
    
    seed = time(0);
    srand(seed);
    
    //generating 2 numbers at random between 0 and 9
    
    random1 = rand() % 10;
    random2 = rand() % 10;
    
    //if the first random number is greater than the second, the output will display
    //the 1st number minus thee second number. Then it will ask for a user input 
    //for their value. if it is the same as the difference of the 2 numbers, it 
    //will display correct. otherwise it will display incorrect. 
    
    if(random1 > random2)
    {
        cout << "What is " << random1 << " - " <<  random2 << "? ";
        cin >> yourAnswer;
        randAns1 = random1 - random2;
        
        if(yourAnswer == randAns1)
        {
            cout << " correct ";
        }
        else
        {
            cout << " incorrect ";
        }
        
        cout << random1 << " - " <<  random2 << " = " << randAns1 << endl;
        
    }
    
    //if the 2nd random number is greater than or equal to the 1st, the output will display
    //the 2nd number minus the 1st number. Then it will ask for a user input 
    //for their value. if it is the same as the difference of the 2 numbers, it 
    //will display correct. otherwise it will display incorrect. 
    
    if(random2 >= random1)
    {
        cout << "What is " << random2 << " - " << random1 << "? ";
        cin >> yourAnswer;
        randAns2 = random2 - random1;
        
        if(yourAnswer == randAns2)
        {
            cout << " correct ";
        }
        else
        {
            cout << " incorrect ";
        }
        
        cout << random2 << " - " <<  random1 << " = " << randAns2 << endl;
    }
   
   
    return 0;
}



