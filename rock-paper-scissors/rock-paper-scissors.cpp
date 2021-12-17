

#include<iostream>
#include<stdlib.h> //for random generating functions
#include<ctime>

using namespace std;

int main()
{
    //static random time(null)
    //computer will generate a random number EVRY TIME the program starts
    //srand() --> in ctime header file
    srand(time(NULL)); 
    int user = 0;
    int computer = 0;
    cout << "Let's play rock paper scissors!" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Select a value from 1 to 3"<<endl;
    cin >> user;

    //user choices
    if(user == 1){
        cout << "You choose Rock" << endl;
    }
    else if(user == 2){
        cout << "You choose Paper" << endl;
    }
    else {
        cout << "You choose Scissors" << endl;
    }

   
    //random number generated in the 1-3 interval
    computer = rand() % 3 + 1;
    //computer choices
    if(computer == 1){
        cout << "Computer choose Rock" << endl;
    }
    else if(computer == 2){
        cout << "Computer choose Paper" << endl;
    }
    else {
        cout << "Computer choose Scissors" << endl;
    }

    //tell the results
    //match
    if(user == computer){
        cout << "We have a tie!" << endl;
    }

   //user chosses rock
    else if(user == 1){
        if(computer == 2){
            cout << "You loose" << endl;
        }
        if(computer == 3){
            cout << "You win!" << endl;
        }
    }

    //user chooses paper
    else if(user == 2){
        if(computer == 1){
            cout << "You win!" << endl;
        }
        if(computer == 3) {
            cout << "You loose..." << endl;
        }
    }

    //user chooses scissors
    else if(user == 3){
        if(computer == 1){
            cout << "You loose..." << endl;
        }
        if(computer == 2){
            cout << "You win!" << endl;
        }
    }
    return 0;
}

