#include<iostream>
#include<string>
#include "Guild.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"

using namespace std;

void menu()
{
    cout<<"\n====================================\n";
    cout<<"        ELDORIA GUILD SYSTEM        \n";
    cout<<"====================================\n";
    cout<<"1. Recruit Warrior\n";
    cout<<"2. Recruit Knight\n";
    cout<<"3. Recruit Spellblade\n";
    cout<<"4. Show Guild Roster\n";
    cout<<"5. Exit\n";
    cout<<"------------------------------------\n";
    cout<<"Enter choice: ";
}

int main()
{
    Guild g("Eldoria");
    int choice;

    cout<<"\n====================================\n";
    cout<<"     Welcome to the Guild System    \n";
    cout<<"====================================\n";

    do
    {
        menu();
        cin>>choice;
        cin.ignore();

        if(choice==1)
        {
            string name;
            int health,power,armor;

            cout<<"\n--- Recruit Warrior ---\n";

            cout<<"Name: ";
            getline(cin,name);

            cout<<"Health: ";
            cin>>health;

            cout<<"Base Power: ";
            cin>>power;

            cout<<"Armor Rating: ";
            cin>>armor;
            cin.ignore();

            g += new Warrior(name,health,power,armor);

            cout<<"\nWarrior recruited successfully!\n";
        }

        else if(choice==2)
        {
            string name;
            int health,power,armor,charge;

            cout<<"\n--- Recruit Knight ---\n";

            cout<<"Name: ";
            getline(cin,name);

            cout<<"Health: ";
            cin>>health;

            cout<<"Base Power: ";
            cin>>power;

            cout<<"Armor Rating: ";
            cin>>armor;

            cout<<"Charge Bonus: ";
            cin>>charge;
            cin.ignore();

            g += new Knight(name,health,power,armor,charge);

            cout<<"\nKnight recruited successfully!\n";
        }

        else if(choice==3)
        {
            string name;
            int health,power,armor,mana,spell;

            cout<<"\n--- Recruit Spellblade ---\n";

            cout<<"Name: ";
            getline(cin,name);

            cout<<"Health: ";
            cin>>health;

            cout<<"Base Power: ";
            cin>>power;

            cout<<"Armor Rating: ";
            cin>>armor;

            cout<<"Mana Pool: ";
            cin>>mana;

            cout<<"Spell Power: ";
            cin>>spell;
            cin.ignore();

            g += new Spellblade(name,health,power,armor,mana,spell);

            cout<<"\nSpellblade recruited successfully!\n";
        }

        else if(choice==4)
        {
            cout<<"\n====================================\n";
            cout<<"            GUILD ROSTER            \n";
            cout<<"====================================\n";
            cout<<g;
            cout<<"====================================\n";
        }

        else if(choice==5)
        {
            cout<<"\nExiting Guild System...\n";
        }

        else
        {
            cout<<"\nInvalid choice. Try again.\n";
        }

    }while(choice!=5);

    return 0;
}