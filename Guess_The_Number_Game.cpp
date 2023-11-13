#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;
int main() 
{
    srand(static_cast<unsigned int>(time(0))); 
    // used for makingit sure every time the random is different from the previous run code
    int guess_num, gen_rand_num;
    int attempt=0;
    gen_rand_num=rand() % 100+1; 
    //Genrates the random number
    
    cout << "Welcome to the Guess the Number Game!!\n";
    cout << "The number has been selected try to guess it.\n";
    do
    {
        cout << "Enter your guess: ";
        cin >> guess_num;
        ++attempt;
        if (guess_num > gen_rand_num)
        {
            cout << "Guessed Number is Too high! Try again.\n";
        } 
        else if (guess_num < gen_rand_num)
        {
            cout << "Guessed Number is Too low! Try again.\n";
        } 
        else 
        {
            cout << "Awesome!! You guessed the correct number in "<<attempt<<" attempts. \n";
        }
    } while(guess_num != gen_rand_num);
    return 0;
}