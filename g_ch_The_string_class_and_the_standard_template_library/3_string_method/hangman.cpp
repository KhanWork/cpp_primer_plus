#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using std::string;
const int NUM = 26;
const string wordlist[NUM] = {
    "apiary", "beetle", "cereal", "danger", "ensign", "florid",
    "garage", "health", "insult", "jackal", "keeper", "loaner",
    "manage", "nonce",  "onset",  "plaid",  "quilt",  "remote",
    "stolid", "train",  "useful", "valid", "whence",  "xenon",
    "yearn",  "zippy"};

int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    std::srand(std::time(0));
    char play;
    cout << "Will you play a game? <y/n> ";
    cin >> play;
    play = tolower(play);
    while(play == 'y')
    {
        string target(wordlist[std::rand() % NUM]);
        int length = target.length();
        string attempt(length, '-');
        string badchars;
        int guesses = 6;
        cout << "Guess my secret word. It has " << length << " letters, and you guess\r\n"
             << "one letter at a time. You get " << guesses << " wrong guesses.\r\n";
        cout << "Your word: " << attempt << endl;

        while(guesses > 0 && attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if(badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
            {
                cout << "You already guessed that, try again.\r\n";
                continue;
            }
            int loc = target.find(letter);
            if(loc == string::npos)
            {
                cout << "Oh, bad guess!\r\n";
                --guesses;
                badchars += letter;
            }
            else
            {
                cout << "Good guess!\r\n";
                attempt[loc] = letter;
                loc = target.find(letter, loc + 1);
                while(loc != string::npos)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter, loc + 1);
                }
            }
            cout << "Your word: " << attempt << endl;
            if(attempt != target)
            {
                if(badchars.length() > 0)
                    cout << "Bad choices: " << badchars << endl;
                    cout << guesses << " bad guesses left\r\n";
            }
        }
        if(guesses > 0)
            cout << "That's right!\r\n";
        else
            cout << "Sorry, the word is " << target << ".\r\n";
        cout << "Will you play another? <y/n>";
        cin >> play;
        play = tolower(play);
    }

    cout << "Bye!\r\n";

    return 0;
}