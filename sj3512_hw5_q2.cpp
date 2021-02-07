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
    srand(time(0));
    randomNumber = (rand() % 100) + 1;
    cout<<randomNumber<<endl;
    cout<<"Range: ["<<lowerLimit<<", "<<upperLimit<<"], Number of guess left: "<<guessesLeft<<endl;
    cout<<"Your guess: ";
    cin>>guess;
        for(guessesUsed = 1; guessesUsed <= 5; guessesUsed++) {
            guessesLeft = 5 - guessesUsed;
            if (guess == randomNumber) {
                cout << "Congrats! You guessed my number in " << guessesUsed << " guesses." << endl;
                guessesUsed =  6;
            }
            else if(guessesLeft == 0){
                cout << "Out of guesses! My number is: " << randomNumber << endl;
            }
            else if (guess < randomNumber) {
                lowerLimit = guess + 1;
                cout << "Wrong! My number is bigger." << endl;
                cout << "Range: [" << lowerLimit << ", " << upperLimit << "], Number of guesses left: " << guessesLeft
                     << endl;
                cout << "Your guess: ";
                cin >> guess;
            } else {
                upperLimit = guess - 1;
                cout << "Wrong! My number is smaller." << endl;
                cout << "Range: [" << lowerLimit << ", " << upperLimit << "], Number of guesses left: " << guessesLeft
                     << endl;
                cout << "Your guess: ";
                cin >> guess;
            }
        }
    return 0;
}
