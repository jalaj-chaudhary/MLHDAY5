#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char name[50];
    cout << "What is your name, warrior?" << endl;
    cin.getline(name, 50);
    cout << "You better move fast, " << name << ". The goblins are attacking in the city." << endl;
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    
system("cls");
    int choiceOne_Path;
    cout << "# What would you like to do?" << endl;
    cout << "\t >> Enter '1' to follow the kingdom Chief?" << endl;
    cout << "\t >> Enter '2' to find your own path?" << endl;
    retry:
    cout << "\nEnter your choice: ";
    cin >> choiceOne_Path;
    if(choiceOne_Path == 1)
    {
        cout << "\n!!!----------------------Chapter One: Escape----------------------!!!" << endl;
        cout << "\nYou: Where are we going?" << endl;
        cout << "Chief: Soon you will know. Just follow me." << endl;
        cout << "# Running behind the chief." << endl;
    }
    else if(choiceOne_Path == 2)
    {
        cout << "\n!!!----------------------Chapter One: Escape----------------------!!!" << endl;
        cout << "\nYou: I am going to find a way out!" << endl;
        cout << "Chief: You are insane. You will get killed out there." << endl;
        cout << "You: I have my secrets and I know my way out." << endl;
        cout << "# You jump over the nearby broken wall" << endl;
        cout << "# and run off towards the City Wall." << endl;
    }
    else
    {
        cout << "You are doing it wrong, warrior! Press either '1' or '2', nothing else!" << endl;
        goto retry;
    }
    cout << "\n----------------------Press any key to continue----------------------" << endl;
    getch();
    return 0;
}
