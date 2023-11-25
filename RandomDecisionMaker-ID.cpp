#include <iostream>
#include <cstdlib>
using namespace std;

class question{
public:
    void QuestionInput()
    {
        string quests;
        cout << "Taruh renunganmu disini, saya akan memberi suatu keputusan" << endl;
        cin >> quests;
    }

    void DecisionMaker()
    {
        cout << "Sebentar.." << endl;
        system("pause");
        srand(time(NULL)); // Seed the random number generator
        int randomNumber = rand() % 50 + 1; // Generate a random number between 1 and 10
        if (randomNumber < 50){
            cout << "Jangan, pikirkan lagi" << endl;
            system("pause");
        }
        else if (randomNumber > 25){
            cout << "Kamu mendapat 50/50, mau coba lagi?" << endl;
            cout << "Kalau mau coba lagi, mulai ulang program ini" << endl;
            system("pause");
        }
        else {
            cout << "Silahkan lakukan" << endl;
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