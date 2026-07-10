#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()
using namespace std;

int main() {
    // 1. Plant the "seed" using the current time
    srand(time(0)); 

    // 2. Generate the random number
    // rand() % 100 gives a number from 0 to 99. Adding 1 makes it 1 to 100.
    int secretNumber = rand() % 100 + 1; 

    // Now you can start your game loop!
    cout << "Welcome to the Number Guessing Game!" << endl;

    int guess;
    do
    { 
        cout<<"Enter your guess (1-100):";
        cin>>guess;

        if(guess>secretNumber){
            cout<<"Too high! Try again."<<endl;
        }

        else if(guess<secretNumber){
            cout<<"Too low! Try again."<<endl;
        }
        else{
            cout<<"Congratulations! You guessed the correct number!"<<endl;
        }


        
    } while (guess!=secretNumber);
    


    
    return 0;
}