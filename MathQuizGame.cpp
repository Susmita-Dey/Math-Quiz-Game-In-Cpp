#include <bits\stdc++.h>
#include <windows.h>
using namespace std;

void easyMath()
{
    int ans[5], skipCount = 0, ansCount = 0, correctAns = 0;
    int answer[5] = {1600, 779, 67, 120, 121};
    string ques[5] = {
        "Q1) 40x40=___?", "Q2) 999-33-87-100=___?", "Q3) What is 22+47?",
        "Q4) To stay in a hotel costs $40 per night. You stay for three nights and check out on the fourth morning. How much will you pay?", "Q5) 120+240+400-240-400+1=___?"};

    cout << "\n**************** Welcome To Level Easy ****************" << endl;
    cout << ":::::: Instructions ::::::" << endl;
    cout << "Enter your asnwers after the questions asked\nYou may skip questions by entering 0." << endl;

tryagain:
    for (int i = 0; i < 5; i++)
    {
        cout << ques[i] << endl;
        cin >> ans[i];
        if (ans[i] != 0)
        {
            ansCount++;
            if (ans[i] == answer[i])
            {
                correctAns++;
                cout << "Correct Answer!" << endl;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
                cout << "Answer = " << answer[i] << endl;
            }
        }
        else
        {
            skipCount++;
            cout << "Answer = " << answer[i] << endl;
        }
    }
    if (correctAns >= 3)
    {
        cout << "       Congratulations! You have completed this level.\n"
             << endl;
        cout << "Total no. of questions asked = 5." << endl;
        cout << "You have answered " << correctAns << " correctly!" << endl;
        cout << "You have given " << (5 - correctAns - skipCount) << " wrong answers." << endl;
        cout << "You have skipped " << skipCount << " questions.\n"
             << endl;
    }
    else
    {
        cout << "       You Failed! Try again!!!\n"
             << endl;
        cout << "Total no. of questions asked = 5." << endl;
        cout << "You have answered " << correctAns << " correctly!" << endl;
        cout << "You have given " << (5 - correctAns - skipCount) << " wrong answers." << endl;
        cout << "You have skipped " << skipCount << " questions.\n"
             << endl;
        goto tryagain;
    }
}

void mediumMath()
{
    int ans[5], skipCount = 0, ansCount = 0, correctAns = 0;
    int answer[5] = {10, 2, 20, -989, 750};
    string ques[5] = {
        "Q1) What is 10% of 100?", "Q2) If a train leaves a station at 10 p.m., travels at 30 miles per hour and covers 120 miles, what would the time(in a.m.) be?", "Q3) What is 180/9?",
        "Q4) Subtract 999 from 10. What do you have?", "Q5) If I have a liter bottle of cola and I drink 250 ml's, how much is left?"};

    cout << "\n**************** Welcome To Level Medium ****************" << endl;
    cout << ":::::: Instructions ::::::" << endl;
    cout << "Enter your asnwers after the questions asked\nYou may skip questions by entering 0." << endl;

tryagain:
    for (int i = 0; i < 5; i++)
    {
        cout << ques[i] << endl;
        cin >> ans[i];
        if (ans[i] != 0)
        {
            ansCount++;
            if (ans[i] == answer[i])
            {
                correctAns++;
                cout << "Correct Answer!" << endl;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
                cout << "Answer = " << answer[i] << endl;
            }
        }
        else
        {
            skipCount++;
            cout << "Answer = " << answer[i] << endl;
        }
    }
    if (correctAns >= 3)
    {
        cout << "       Congratulations! You have completed this level.\n"
             << endl;
        cout << "Total no. of questions asked = 5." << endl;
        cout << "You have answered " << correctAns << " correctly!" << endl;
        cout << "You have given " << (5 - correctAns - skipCount) << " wrong answers." << endl;
        cout << "You have skipped " << skipCount << " questions." << endl;
    }
    else
    {
        cout << "       You Failed! Try again!!!\n"
             << endl;
        cout << "Total no. of questions asked = 5." << endl;
        cout << "You have answered " << correctAns << " correctly!" << endl;
        cout << "You have given " << (5 - correctAns - skipCount) << " wrong answers." << endl;
        cout << "You have skipped " << skipCount << " questions." << endl;
        goto tryagain;
    }
}

void hardMath()
{
    int skipCount = 0, ansCount = 0, correctAns = 0;
    double ans[5], answer[5] = {24, 2000, 2, 464.01, 5};
    string ques[5] = {
        "Q1) How many right angles does a cube have?", "Q2) 3,000-800+400-1200+600=___?", "Q3) If a skipping rope is 2 meters long, how many 100-cm pieces could I cut it into?",
        "Q4) Add the following, please: 90+33+0.01+100+241=___?", "Q5) A man must take a pill every half an hour. He starts at 10 a.m. How many pills will he have taken by 12:01 p.m.?"};

    cout << "\n**************** Welcome To Level Hard ****************" << endl;
    cout << ":::::: Instructions ::::::" << endl;
    cout << "Enter your answers after the questions asked\nYou may skip questions by entering 0." << endl;

tryagain:
    for (int i = 0; i < 5; i++)
    {
        cout << ques[i] << endl;
        cin >> ans[i];
        if (ans[i] != 0)
        {
            ansCount++;
            if (ans[i] == answer[i])
            {
                correctAns++;
                cout << "Correct Answer!" << endl;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
                cout << "Answer = " << answer[i] << endl;
            }
        }
        else
        {
            skipCount++;
            cout << "Answer = " << answer[i] << endl;
        }
    }
    if (correctAns >= 3)
    {
        cout << "       Congratulations! You have completed this level.\n"
             << endl;
        cout << "Total no. of questions asked = 5." << endl;
        cout << "You have answered " << correctAns << " correctly!" << endl;
        cout << "You have given " << (5 - correctAns - skipCount) << " wrong answers." << endl;
        cout << "You have skipped " << skipCount << " questions." << endl;
    }
    else
    {
        cout << "       You Failed! Try again!!!\n"
             << endl;
        cout << "Total no. of questions asked = 5." << endl;
        cout << "You have answered " << correctAns << " correctly!" << endl;
        cout << "You have given " << (5 - correctAns - skipCount) << " wrong answers." << endl;
        cout << "You have skipped " << skipCount << " questions.\n"
             << endl;
        goto tryagain;
    }
}

int main()
{
    // set color of the terminal
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED |
                                                                 FOREGROUND_GREEN |
                                                                 FOREGROUND_INTENSITY |
                                                                 BACKGROUND_BLUE);

    // clear terminal
    system("cls");
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    char *dt = ctime(&now);

    cout << "\nLocal Date and Time: " << dt << endl
         << endl;

    int level;
    char ch;
lvl:
    cout << "---------------------- Welcome To Math Quiz Game ----------------------" << endl;
    cout << "Choose your level of playing the game!!" << endl;
    cout << "1)Easy \n 2)Medium \n 3)Hard" << endl;
    cin >> level;
    switch (level)
    {
    case 1:
        cout << "---------------------- Easy Level Quiz ----------------------" << endl;
        easyMath();
        break;

    case 2:
        cout << "---------------------- Medium Level Quiz ----------------------" << endl;
        mediumMath();
        break;

    case 3:
        cout << "---------------------- Hard Level Quiz ----------------------" << endl;
        hardMath();
        break;

    default:
        cout << "You have entered an invalid input. Please choose again!!" << endl;
        goto lvl;
        break;
    }
    cout << endl;

    cout << "Do you wanna play again?\nInput y for yes and n for no." << endl;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        goto lvl;
    }
    else
    {
        cout << "\n\n-----------!!Come later again to play!!-----------\n\n";
    }

    return 0;
}