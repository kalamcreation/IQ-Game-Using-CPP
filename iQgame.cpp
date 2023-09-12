#include <iostream>
using namespace std;

// Class
class IQGame {
public:
    // Variables
    int point = 0;
    int life = 3;

    // Constructor
    IQGame() {
        cout << "***IQ Game***" << endl;
        cout << "Your Life: " << life << endl;
        cout << "Your Point: " << point << endl;
    }
};

// Inheritance
class Gamer : public IQGame {
private:
    string name;

public:
    // Constructor
    Gamer() {
        name = "Guest";
    }

    // Setter and getter methods
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }

    // Display information
    void displayInfo() {
        cout << "Game board" << endl;
        cout << "Gamer: " << getName() << endl;
        cout << "Your Life: " << life << endl;
        cout << "Your Point: " << point << endl;
    }

    // Method to play the game
    void playGame() {
        cout << "......................" << endl;

        // Question 1
        cout << "Summation between two numbers" << endl;
        cout << "3 + 5 = ";
        int ans1;
        cin >> ans1;
        if (ans1 == 8) {
            point += 10;
            cout << "10 points added. Total points: " << point << endl;

            // Question 2
            cout << "Multiplication of two numbers" << endl;
            cout << "2 * 8 = ";
            int ans2;
            cin >> ans2;
            if (ans2 == 16) {
                point += 10;
                cout << "10 points added. Total points: " << point << endl;

                // Question 3
                cout << "Subtraction of two numbers" << endl;
                cout << "187 - 179 = ";
                int ans3;
                cin >> ans3;
                if (ans3 == 8) {
                    point += 10;
                    cout << "10 points added. Total points: " << point << endl;

                    // Question 4
                    cout << "Which is the Search Engine?" << endl;
                    cout << "1. Google\n2. Amazon\n3. Facebook\n4. Youtube" << endl;
                    int ans4;
                    cin >> ans4;
                    if (ans4 == 1) {
                        point += 10;
                        cout << "10 points added. Total points: " << point << endl;

                        // Question 5
                        cout << "What is the capital of France?" << endl;
                        cout << "1. London\n2. Paris\n3. Rome\n4. Dhaka" << endl;
                        int ans5;
                        cin >> ans5;
                        if (ans5 == 2) {
                            point += 10;
                            cout << "10 points added. Total points: " << point << endl;

                            // Question 6
                            cout << "What does CPU stand for?" << endl;
                            cout << "1. Central Process Unit\n2. Computer Processing Unit\n3. Central Processor Unit\n4. Central Power Unit" << endl;
                            int ans6;
                            cin >> ans6;
                            if (ans6 == 3) {
                                point += 10;
                                cout << "10 points added. Total points: " << point << endl;

                                // Question 7
                                cout << "Add three numbers" << endl;
                                cout << "2 + 19 + 7 = ";
                                int ans7;
                                cin >> ans7;
                                if (ans7 == 28) {
                                    point += 10;
                                    cout << "10 points added. Total points: " << point << endl;

                                    // Question 8
                                    cout << "What is the chemical symbol for gold?" << endl;
                                    cout << "1. Au\n2. Gu\n3. Cu\n4. Pu" << endl;
                                    int ans8;
                                    cin >> ans8;
                                    if (ans8 == 1) {
                                        point += 10;
                                        cout << "10 points added. Total points: " << point << endl;

                                        // Question 9
                                        cout << "Which programming language is often used for web development?" << endl;
                                        cout << "1. Java\n2. C++\n3. Javascript\n4. Python" << endl;
                                        int ans9;
                                        cin >> ans9;
                                        if (ans9 == 3) {
                                            point += 10;
                                            cout << "10 points added. Total points: " << point << endl;

                                            // Question 10
                                            cout << "______ Output?" << endl;
                                            cout << "(2 * 2) - 2 + 1 = ";
                                            int ans10;
                                            cin >> ans10;
                                            if (ans10 == 1) {
                                                point += 10;
                                                cout << "10 points added. Total points: " << point << endl;
                                                cout << "You Are Win" << endl;
                                                displayInfo();
                                                return; // End the game
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        // Player lost a life
        if (life == 0) {
            cout << "Game Over" << endl;
            displayInfo();
        } else {
            --life;
            cout << "-1 Life" << endl;
            playGame();
        }
    }
};

int main() {
    // Class object
    Gamer gamer;
    int press;
    cout << "Play The Game, press 1" << endl;
    cout << "Set your name, press 2" << endl;
    cin >> press;

    if (press == 1) {
        gamer.playGame();
    } else if (press == 2) {
        string inputGamerName;
        cout << "Enter Your Name: ";
        cin >> inputGamerName;
        gamer.setName(inputGamerName);
        main();
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
