#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int guess, guessesLeft;
    int upperLimit, lowerLimit;
    int randomNumber, guessesUsed;
    bool guessedCorrectNumber;
    cout<<"I thought of a number between 1 and 100!. Try to guess it."<<endl;

    lowerLimit = 1;
    upperLimit = 100;
    guessesLeft = 5;
    guessesUsed = 1;
    srand(time(0));
    randomNumber = (rand() % 100) + 1;
    cout<<"Range: ["<<lowerLimit<<", "<<upperLimit<<"], Number of guess left: "<<guessesLeft<<endl;
    cout<<"Your guess: ";
    cin>>guess;
    guessedCorrectNumber = false;
    while(guessedCorrectNumber == false){
        while(guessesLeft == 5){
            if(guess == randomNumber){
                cout<<"Congrats! You guessed my number in "<<guessesUsed<<" guesses."<<endl;
                guessedCorrectNumber = true;
                break;
            }
            else if(guess < randomNumber){
                lowerLimit = guess + 1;
                cout<<"Wrong! My number is bigger."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
            else {
                upperLimit = guess - 1;
                cout<<"Wrong! My number is smaller."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
        }
        while(guessesLeft == 4){
            cout<<"Range: ["<<lowerLimit<<", "<<upperLimit<<"], Number of guesses left: "<<guessesLeft<<endl;
            cout<<"Your guess: ";
            cin>>guess;
            if(guess == randomNumber){
                cout<<"Congrats! You guessed my number in "<<guessesUsed<<" guesses."<<endl;
                guessedCorrectNumber = true;
                break;
            }
            else if(guess < randomNumber){
                lowerLimit = guess + 1;
                cout<<"Wrong! My number is bigger."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
            else {
                upperLimit = guess - 1;
                cout<<"Wrong! My number is smaller."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
        }
        while(guessesLeft == 3){
            cout<<"Range: ["<<lowerLimit<<", "<<upperLimit<<"], Number of guesses left: "<<guessesLeft<<endl;
            cout<<"Your guess: ";
            cin>>guess;
            if(guess == randomNumber){
                cout<<"Congrats! You guessed my number in "<<guessesUsed<<" guesses."<<endl;
                guessedCorrectNumber = true;
                break;
            }
            else if(guess < randomNumber){
                lowerLimit = guess + 1;
                cout<<"Wrong! My number is bigger."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
            else {
                upperLimit = guess - 1;
                cout<<"Wrong! My number is smaller."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
        }
        while(guessesLeft == 2){
            cout<<"Range: ["<<lowerLimit<<", "<<upperLimit<<"], Number of guesses left: "<<guessesLeft<<endl;
            cout<<"Your guess: ";
            cin>>guess;
            if(guess == randomNumber){
                cout<<"Congrats! You guessed my number in "<<guessesUsed<<" guesses."<<endl;
                guessedCorrectNumber = true;
                break;
            }
            else if(guess < randomNumber){
                lowerLimit = guess + 1;
                cout<<"Wrong! My number is bigger."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
            else {
                upperLimit = guess - 1;
                cout<<"Wrong! My number is smaller."<<endl;
                guessesLeft--;
                guessesUsed++;
            }
        }
        while(guessesLeft == 1) {
            cout << "Range: [" << lowerLimit << ", " << upperLimit << "], Number of guesses left: " << guessesLeft << endl;
            cout << "Your guess: ";
            cin >> guess;
            if(guess == randomNumber){
                cout<<"Congrats! You guessed my number in "<<guessesUsed<<" guesses."<<endl;
                guessedCorrectNumber = true;
                guessesLeft--;
            }
            else if (guess != randomNumber) {
                cout << "Out of guesses! My number is: " << randomNumber << endl;
                guessedCorrectNumber = true;
                guessesLeft--;
            }

        }

    }
    return 0;
}