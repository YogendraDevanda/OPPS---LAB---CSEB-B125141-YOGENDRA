#include <iostream>
#include <string>
using namespace std;

class Song
{
private:
    string songName;
    string artistName;
    float duration;

public:
    Song(string song, string artist, float time)
    {
        songName = song;
        artistName = artist;
        duration = time;
    }

    friend void compareSongs(Song s1, Song s2);
};

void compareSongs(Song s1, Song s2)
{
    cout << "\n--- Song Details ---" << endl;

    cout << "Song 1: " << s1.songName << endl;
    cout << "Artist: " << s1.artistName << endl;
    cout << "Duration: " << s1.duration << " minutes" << endl;

    cout << "\nSong 2: " << s2.songName << endl;
    cout << "Artist: " << s2.artistName << endl;
    cout << "Duration: " << s2.duration << " minutes" << endl;

    if (s1.duration > s2.duration)
    {
        cout << "\n" << s1.songName << " is longer." << endl;
    }
    else if (s2.duration > s1.duration)
    {
        cout << "\n" << s2.songName << " is longer." << endl;
    }
    else
    {
        cout << "\nBoth songs have the same duration." << endl;
    }
}

int main()
{
    string song1, artist1;
    string song2, artist2;
    float duration1, duration2;

    cout << "Enter Song 1 Name: ";
    getline(cin, song1);

    cout << "Enter Artist 1 Name: ";
    getline(cin, artist1);

    cout << "Enter Duration of Song 1: ";
    cin >> duration1;
    cin.ignore();

    cout << "\nEnter Song 2 Name: ";
    getline(cin, song2);

    cout << "Enter Artist 2 Name: ";
    getline(cin, artist2);

    cout << "Enter Duration of Song 2: ";
    cin >> duration2;

    Song s1(song1, artist1, duration1);
    Song s2(song2, artist2, duration2);

    compareSongs(s1, s2);

    return 0;
}