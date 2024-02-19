// Doubly Linked List:
// 1.Music playlist creation
// -Design a system to keep track of songs in a playlist
// -Song details are represented by nodes in a doubly linked list.
// -Navigate through previous and next song in the list
// -Display the songs according to producer, singer and genre.
// -Other customisations if you want to add
// Music playlist creation
// -Design a system to keep track of songs in a playlist
// -Song details are represented by nodes in a doubly linked list.
// -Navigate through previous and next song in the list
// -Display the songs according to producer, singer and genre.
#include <iostream>
using namespace std;

class Node
{
public:
    string name;
    string producer;
    string singer;
    string genre;
    Node *next;
    Node *prev;
    Node()
    {
        cout << "Enter song name: ";
        getline(cin >> ws, name);
        cout << "Enter producer name: ";
        getline(cin >> ws, producer);
        cout << "Enter singer name : ";
        getline(cin >> ws, singer);
        cout << "Enter the genre of the song: ";
        getline(cin >> ws, genre);
        next = NULL;
        prev = NULL;
    }
};

Node *createPlaylist(int n)
{
    Node *hi = NULL;
    Node *ptr = NULL;
    for (int i = 0; i < n; i++)
    {
        Node *newnode = new Node();
        if (hi == NULL)
        {
            hi = newnode;
            newnode->prev = NULL;
            ptr = newnode;
        }
        else
        {
            newnode->prev = ptr;
            ptr->next = newnode;
            ptr = newnode;
        }
    }
    return hi;
}

void addSong(Node *&a)
{
    Node *ptr = a;
    Node *newnode = new Node();
    if (a == NULL)
    {
        newnode->prev = NULL;
        a = newnode;
        cout << "Successfully added song\n";
    }
    else
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        newnode->prev = ptr;
        ptr->next = newnode;
        cout << "Successfully added song\n";
    }
}

void deleteSong(Node *&a)
{
    Node *ptr = a;
    Node *temp = NULL;
    string sname;
    if (a == NULL)
    {
        cout << "Playlist is empty\n";
        return;
    }
    cout << "Enter song to remove: ";
    cin.ignore();
    getline(cin, sname);
    while (ptr != NULL)
    {
        if (ptr->name == sname)
        {
            if (ptr->prev == NULL)
            {
                a = ptr->next;
                if (a != NULL)
                {
                    a->prev = NULL;
                }
            }
            else if (ptr->next == NULL)
            {
                temp = ptr->prev;
                temp->next = ptr->next;
            }
            else
            {
                temp = ptr->prev;
                temp->next = ptr->next;
                ptr->next->prev = temp;
            }
            delete ptr;
            cout << "Song removed successfully\n";
            return;
        }
        ptr = ptr->next;
    }
    cout << "Song not found\n";
}

void displayPlaylistMenu(Node *&a)
{
    Node *ptr = a;
    if (a == NULL)
    {
        cout << "Playlist is empty\n";
        return;
    }
    else
    {
        int choice = 0;
        cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
             << endl;
    b:
        cout << "1.Previous Song\n2.Next Song\n3.Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (ptr == a)
            {
                cout << "This is the first song\n";
                goto b;
            }
            else
            {
                ptr = ptr->prev;
                cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
                     << endl;
                goto b;
            }
            break;
        case 2:
            if (ptr->next == NULL)
            {
                cout << "This is the last song\n";
                goto b;
            }
            else
            {
                ptr = ptr->next;
                cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
                     << endl;
                goto b;
            }
            break;
        case 3:
            return;
        default:
            cout << "Invalid choice\n";
            goto b;
        }
    }
}

void displayPlaylist(Node *&a)
{
    int count = 0;
    Node *ptr = a;
    if (a == NULL)
    {
        cout << "Playlist is empty\n";
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
                 << endl;
            count++;
            ptr = ptr->next;
        }
        cout << "Number of songs: " << count << endl;
    }
}

void displayParticularSongs(Node *&a)
{
    int count = 0;
    Node *ptr = a;
    string sname;
    if (a == NULL)
    {
        cout << "Playlist is empty\n";
        return;
    }
    else
    {
        int choice;
    b:
        cout << "Display songs according to:\n1.Singer\n2.Producer\n3.Genre\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter singer name: ";
            cin.ignore();
            getline(cin, sname);
            count = 0;
            ptr = a;
            while (ptr)
            {
                if (ptr->singer == sname)
                {
                    cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
                         << endl;
                    count++;
                }
                ptr = ptr->next;
            }
            if (count == 0)
            {
                cout << "No songs found\n";
            }
            break;
        case 2:
            cout << "Enter producer name: ";
            cin.ignore();
            getline(cin, sname);
            count = 0;
            ptr = a;
            while (ptr)
            {
                if (ptr->producer == sname)
                {
                    cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
                         << endl;
                    count++;
                }
                ptr = ptr->next;
            }
            if (count == 0)
            {
                cout << "No songs found\n";
            }
            break;
        case 3:
            cout << "Enter genre: ";
            cin.ignore();
            getline(cin, sname);
            count = 0;
            ptr = a;
            while (ptr != NULL)
            {
                if (ptr->genre == sname)
                {
                    cout << ptr->name << "\nSinger: " << ptr->singer << "\nProducer: " << ptr->producer << "\nGenre: " << ptr->genre << endl
                         << endl;
                    count++;
                }
                ptr=ptr->next;
            }
            if (count == 0)
            {
                cout << "No songs found\n";
            }
            break;
        default:
            cout << "Invalid choice\n";
            goto b;
        }
    }
}

int main()
{
    int n;
    cout << "Enter number of songs to add to playlist: ";
    cin >> n;
    Node *hi = createPlaylist(n);
    int choice;
    char ans = 'y';
    do
    {
        cout << "Enter your choice: \n1.Add a song\n2.Remove a song\n3.Show full playlist\n4.Show current song (shift to previous and to the next one)\n5.Search for a song by name/produce/singer\n6).Exit\nEnter your choice(1-6)"<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:addSong(hi);
            break;
        case 2:
            deleteSong(hi);
     break;
        case 3:
            displayPlaylist(hi);
            break;
        case 4:
            displayPlaylistMenu(hi);
            break;
        case 5:
            displayParticularSongs(hi);
            break;
        case 6:
            cout << "Exiting....";
            return 0;
        default:
            cout << "Wrong choice" << endl;
        }
        cout << "Do you want to continue? (y/n): ";
        cin >> ans;
    } while (ans == 'y');
 
    return 0;
}