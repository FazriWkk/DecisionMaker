#include <iostream>
#include <cstdlib>
using namespace std;

class question{
public:
    void QuestionInput()
    {
        string quests;
        cout << "Stuck making a decision? Put your decision here and we'll decide!" << endl;
        cout << "Caution, this program uses an RNG and doesn't provide any valid decision, use this program for fun and joke, don't use it to sue someone or any other serious work" << endl;
        cin >> quests;
    }

    void DecisionMaker()
    {
        cout << "Please wait.." << endl;
        srand(time(NULL)); // Seed the random number generator
        int randomNumber = rand() % 50 + 1; // Generate a random number between 1 and 10
        system("pause");
        if (randomNumber < 50){
            cout << "Don't, think about it again" << endl;
            system("pause");
        }
        else if (randomNumber > 25){
            cout << "You got a 50/50, want to try again?" << endl;
            cout << "If you want to restart, open this program again" << endl;
            system("pause");
        }
        else {
            cout << "Do it!" << endl;
            system("pause");
        }
    }
};

int main()
{
    // Question input
    question Question;
    Question.QuestionInput();
    
    // Decision Maker
    Question.DecisionMaker();
}