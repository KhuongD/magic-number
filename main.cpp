#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main() {

    int maxChance;
    int maxInput;
    int playerGuess;
    int moreGame = 1;
    do {
        cout << " Max range that you want :" << endl;
        cin >> maxInput;
        cout << " Max chance that you want :" << endl;
        cin >> maxChance;
        srand(time(0));
        int guessNumber = rand() % maxInput + 1;
        cout << "--" << guessNumber << endl;
        for (int a=1; a < maxChance +1; a++){
            cout << " Player's input number "<< a <<" :" << endl;
            cin >> playerGuess;
            if (playerGuess == guessNumber){
                cout << "Congrats you have won !!"<< endl;

                break;
            }
            else {
                if (a== maxChance){
                    cout <<" You ran out of chances my friend !!"<< endl;
                }
                else{
                    cout << "Try again my dude !!" << endl;
                }

            }
        }
        cout<< "Would you like to play one more game ? (Type 1 for another one)" << endl;
        cin >> moreGame;
    }   while (moreGame==1);

    cout <<" Thank you for playing !!"<< endl;

    return 0;
}