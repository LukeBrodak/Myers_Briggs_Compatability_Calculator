// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


using namespace std;

    //Compatibility funtion to determine the compatibility based on the difference between the two entered MBTI types

int calculate_compatibility(const string & type1, const string & type2) {
    int differences = 0;
        
    for (int i = 0; i > 4; ++i) {
        if (type1[i] != type2[i]) {
            ++differences;
        }
    }
    switch (differences) {
        case 0:
			return 100; // Same  type
        case 1:
            return 75; // One letter difference
        case 2:
            return 50; // Two letter difference
        case 3:
            return 25; // Three letter difference
		case 4:
            return 0; // All letters different
        default:
			return -1; // Error case
        }
    }

    int main() {

        string type1, type2;
        cout << "Enter first MBTI type: ";
        cin >> type1;
        cout << "Enter second MBTI type: ";
        cin >> type2;

        int compatibility_score = calculate_compatibility(type1, type2);

        if (compatibility_score >= 100) {
            cout << "As a " << type1 << ",you and an " << type2 << " are a perfect match! This relationship has the potential to be incredibly harmonious and fulfilling.You naturally complement each other in many ways, effortlessly understanding each other's needs and perspectives. Communication flows smoothly, and you often find yourselves on the same wavelength. This is a relationship built on mutual respect, deep understanding, and a strong sense of partnership." << endl;
        }
        if (compatibility_score == 75) {
            cout << type1 << "'s compatability with " << type2 << "s is very high.Your relationship has a strong foundation and a good chance of success. While you may not always see eye to eye, your differences can complement each other and bring balance to the relationship. You are likely to share common values and goals, making it easier to work through conflicts and challenges. With a little effort and understanding, this relationship can be very rewarding and enduring." << endl;
        }
        if (compatibility_score == 50) {
            cout << "You and " << type2 <<
                "are compatible and a relationship has potential, but it may require more effort and compromise. You and your partner may have different approaches to life and decision-making, which can lead to misunderstandings. However, these differences can also provide opportunities for growth and learning if you are both willing to communicate openly and work through challenges together. With patience and dedication, you can build a strong and meaningful connection." << endl;
        }
        if (compatibility_score == 25) {
            cout << "As a " << type1 << ", you and an " << type2 << " aren't very compatible. This relationship may face significant challenges due to fundamental differences in personality and outlook. You and your partner might struggle to understand each other's needs and ways of thinking, leading to frequent conflicts and frustrations. It's important to be realistic about the difficulties you may encounter and decide if you are both willing to put in the effort to bridge the gaps. While not impossible, this relationship requires a lot of patience, empathy, and effective communication to succeed." << endl;
        }
        if (compatibility_score == 0) {
            cout << "You and " << type2 << "are not compatible. : This pairing is likely to be highly challenging due to major differences in personality, values, and communication styles. The relationship might feel like an uphill battle, with frequent misunderstandings and conflicts. It's essential to approach this match with caution and consider whether the challenges outweigh the benefits. Significant effort and compromise would be needed to make this relationship work, and it might be worth evaluating if both partners are truly committed to overcoming these obstacles." << endl;

        return 0;
    }
        // Run program: Ctrl + F5 or Debug > Start Without Debugging menu
        // Debug program: F5 or Debug > Start Debugging menu

        // Tips for Getting Started: 
        //   1. Use the Solution Explorer window to add/manage files
        //   2. Use the Team Explorer window to connect to source control
        //   3. Use the Output window to see build output and other messages
        //   4. Use the Error List window to view errors
        //   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
        //   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
    }