#include <iostream>
using namespace std;

class Quiz {
public:
    int score = 0;
    char answer;

    void question1() {
        cout << "\nQ1. C++ was developed by?\n";
        cout << "A. Dennis Ritchie\nB. Bjarne Stroustrup\nC. James Gosling\n";
        cin >> answer;

        if (answer == 'B' || answer == 'b') {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong!\n";
        }
    }

    void question2() {
        cout << "\nQ2. Which symbol is used for input in C++?\n";
        cout << "A. >>\nB. <<\nC. ==\n";
        cin >> answer;

        if (answer == 'A' || answer == 'a') {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong!\n";
        }
    }

    void question3() {
        cout << "\nQ3. Which function ends program?\n";
        cout << "A. stop()\nB. return 0\nC. end()\n";
        cin >> answer;

        if (answer == 'B' || answer == 'b') {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong!\n";
        }
    }

    void question4() {
        cout << "\nQ4. Which keyword creates class?\n";
        cout << "A. object\nB. class\nC. struct\n";
        cin >> answer;

        if (answer == 'B' || answer == 'b') {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong!\n";
        }
    }

    void question5() {
        cout << "\nQ5. Which operator is used for scope resolution?\n";
        cout << "A. ::\nB. ==\nC. &&\n";
        cin >> answer;

        if (answer == 'A' || answer == 'a') {
            cout << "Correct!\n";
            score++;
        }
        else {
            cout << "Wrong!\n";
        }
    }

    void startQuiz() {
        cout << "===== QUIZ GAME =====\n";

        question1();
        question2();
        question3();
        question4();
        question5();

        cout << "\nFinal Score = " << score << "/5\n";
    }
};

int main() {
    Quiz q;
    q.startQuiz();

    return 0;
}