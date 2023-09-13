#include <iostream>
using namespace std;

// Abstract Base Class for IQ Game
class IQGame {
public:
    // Variables
    int point = 0;
    int life = 3;

    // Abstract method to play the game
    virtual void playGame() = 0;

    // Display information
    void displayInfo() {
        cout << "> Game Board <" << endl;
        cout << "Your Life: " << life << endl;
        cout << "Your Point: " << point << endl;
    }
};

// Inheritance: Gamer class inherits from IQGame
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

    // Polymorphism: Implement the playGame method
    void playGame() override {
        cout << "Welcome, " << getName() << "! Let's play the IQ Game." << endl;
        cout << "Answer the following questions:" << endl;

        cout << "......................" << endl;

        // Question 1- implement more questions similarly
        cout << "1.Summation between two numbers" << endl;
        cout << "3 + 5 = ";
        int ans1;
        cin >> ans1;
        if (ans1 == 8) {
            point += 10;
            cout << "10 points added. Total points: " << point << endl;
            cout << endl;

            // Question 2
            cout << "2.Multiplication of two numbers" << endl;
            cout << "2 * 8 = ";
            int ans2;
            cin >> ans2;
            if (ans2 == 16) {
                point += 10;
                cout << "10 points added. Total points: " << point << endl;
                cout << endl;

                // Question 3
                cout << "3.Subtraction of two numbers" << endl;
                cout << "187 - 179 = ";
                int ans3;
                cin >> ans3;
                if (ans3 == 8) {
                    point += 10;
                    cout << "10 points added. Total points: " << point << endl;
                    cout << endl;

                    // Question 4
                    cout << "4.Which is the Search Engine?" << endl;
                    cout << "1. Google\n2. Amazon\n3. Facebook\n4. Youtube" << endl;
                    int ans4;
                    cin >> ans4;
                    if (ans4 == 1) {
                        point += 10;
                        cout << "10 points added. Total points: " << point << endl;
                        cout << endl;

                        // Question 5
                        cout << "5.What is the capital of France?" << endl;
                        cout << "1. London\n2. Paris\n3. Rome\n4. Dhaka" << endl;
                        int ans5;
                        cin >> ans5;
                        if (ans5 == 2) {
                            point += 10;
                            cout << "10 points added. Total points: " << point << endl;
                            cout << endl;

                            // Question 6
                            cout << "6.What does CPU stand for?" << endl;
                            cout << "1. Central Process Unit\n2. Computer Processing Unit\n3. Central Processing Unit\n4. Central Power Unit" << endl;
                            int ans6;
                            cin >> ans6;
                            if (ans6 == 3) {
                                point += 10;
                                cout << "10 points added. Total points: " << point << endl;
                                cout << endl;

                                // Question 7
                                cout << "7.Add three numbers" << endl;
                                cout << "2 + 19 + 7 = ";
                                int ans7;
                                cin >> ans7;
                                if (ans7 == 28) {
                                    point += 10;
                                    cout << "10 points added. Total points: " << point << endl;
                                    cout << endl;

                                    // Question 8
                                    cout << "8.What is the chemical symbol for gold?" << endl;
                                    cout << "1. Au\n2. Gu\n3. Cu\n4. Pu" << endl;
                                    int ans8;
                                    cin >> ans8;
                                    if (ans8 == 1) {
                                        point += 10;
                                        cout << "10 points added. Total points: " << point << endl;
                                        cout << endl;

                                        // Question 9
                                        cout << "9.Which programming language is often used for web development?" << endl;
                                        cout << "1. Java\n2. C++\n3. Javascript\n4. Python" << endl;
                                        int ans9;
                                        cin >> ans9;
                                        if (ans9 == 3) {
                                            point += 10;
                                            cout << "10 points added. Total points: " << point << endl;
                                            cout << endl;

                                            // Question 10
                                            cout << "10.______ Output?" << endl;
                                            cout << "(2 * 2) - 2 + 1 = ";
                                            int ans10;
                                            cin >> ans10;
                                            if (ans10 == 1) {
                                                point += 10;
                                                cout << "10 points added. Total points: " << point << endl;
                                                cout << endl;
                                                cout << "**You Are Win!**" << endl;
                                                cout << endl;
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
        else {
            cout << "Incorrect. You lost a life." << endl;
            life--;

            if (life == 0)
            {
                cout << endl;
                cout << "**Game Over!**" << endl;
                cout << endl;
                displayInfo();
            }
            else
            {
                cout << "You have " << life << " lives remaining." << endl;
                cout << endl;
                cout << "Try the next question." <<endl;
                cout << endl;
                playGame(); //Continue the game
            }
        }
    }
};

int main() {
    // Encapsulation: Create an object of the Gamer class
    Gamer gamer;

    // Set the gamer's name
    string inputGamerName;
    cout << "Enter Your Name: ";
    cin >> inputGamerName;
    gamer.setName(inputGamerName);

    // Start the game
    gamer.playGame();
    gamer.displayInfo(); // Display final points and lives

    return 0;
}

