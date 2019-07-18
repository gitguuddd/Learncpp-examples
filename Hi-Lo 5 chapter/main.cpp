
#include <iostream>
#include <random> // for std::mt19937
#include <ctime> // for std::time

int getGuess(int count)
{
    while (1) // loop until user enters valid input
    {
        std::cout << "Guess #" << count << ": ";
        int guess;
        std::cin >> guess;

        if (std::cin.fail()) // has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            std::cin.ignore(32767, '\n'); // and remove the bad input
        }
        else
        {
            std::cin.ignore(32767, '\n'); // remove any extraneous input
            return guess;
        }
    }
}

// returns true if the user won, false if they lost
bool playGame(int guesses, int number)
{
    // Loop through all of the guesses
    for (int count = 1; count <= guesses; ++count)
    {

        int guess = getGuess(count);

        if (guess > number)
            std::cout << "Your guess is too high.\n";
        else if (guess < number)
            std::cout << "Your guess is too low.\n";
        else // guess == number
            return true;
    }

    return false;
}

bool playAgain()
{
    // Keep asking the user if they want to play again until they pick y or n.
    char ch;
    do
    {
        std::cout << "Would you like to play again (y/n)? ";
        std::cin >> ch;
    } while (ch != 'y' && ch != 'n');

    return (ch == 'y');
}

int main()
{
    std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr))); // Create a mersenne twister, seeded using the clock
    std::uniform_int_distribution<> die(1, 100); // generate random numbers between 1 and 100

    const int guesses = 7; // the user has this many guesses

    do // while the user still wants to play
    {
        int number = die(mersenne); // this is the number the user needs to guess

        std::cout << "Let's play a game.  I'm thinking of a number.  You have " << guesses << " tries to guess what it is.\n";

        bool won = playGame(guesses, number);
        if (won)
            std::cout << "Correct!  You win!\n";
        else
            std::cout << "Sorry, you lose.  The correct number was " << number << "\n";

    } while (playAgain());

    std::cout << "Thank you for playing.\n";
    return 0;
}