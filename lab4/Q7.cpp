#include <iostream>
#include <string>
using namespace std;

class GameManager;

class Player
{
private:
    string playerName;
    int health;
    int score;
    int level;

public:
    Player(string name, int h, int s, int l)
    {
        playerName = name;
        health = h;
        score = s;
        level = l;
    }

    friend class GameManager;
};

class GameManager
{
public:
    // 1. Display player details
    void displayDetails(Player p)
    {
        cout << "\n--- Player Details ---" << endl;
        cout << "Player Name: " << p.playerName << endl;
        cout << "Health: " << p.health << endl;
        cout << "Score: " << p.score << endl;
        cout << "Level: " << p.level << endl;
    }

    // 2. Check whether player is alive
    void checkAlive(Player p)
    {
        if (p.health > 0)
            cout << "Player Status: Alive" << endl;
        else
            cout << "Player Status: Dead" << endl;
    }

    // 3. Display current level and score
    void displayLevelScore(Player p)
    {
        cout << "Current Level: " << p.level << endl;
        cout << "Current Score: " << p.score << endl;
    }
};

int main()
{
    string name;
    int health, score, level;

    cout << "Enter Player Name: ";
    getline(cin, name);

    cout << "Enter Health: ";
    cin >> health;

    cout << "Enter Score: ";
    cin >> score;

    cout << "Enter Level: ";
    cin >> level;

    Player p(name, health, score, level);

    GameManager gm;

    gm.displayDetails(p);

    cout << endl;
    gm.checkAlive(p);

    cout << endl;
    gm.displayLevelScore(p);

    return 0;
}