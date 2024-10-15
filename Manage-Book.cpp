#include<bits/stdc++.h>
using namespace std;

class Book 
{
    private:
        string title;
        string author;
        int publicationYear;
    
    public:
        Book(string na, string au, int ye)
        {
            title = na;
            author = au;
            publicationYear = ye;
        }

        void display()
        {
            cout    <<  "title: "    <<  title    <<  endl;
            cout    <<  "Author: "  <<  author  <<  endl;
            cout    <<  "PublicationYear: " <<  publicationYear <<  endl;
        }
};

int main()
{
    string title;
    string author;
    int publicationYear;

    cout    <<  "enter title : "   <<  endl;
    getline(cin, title);

    cout    <<  "enter author : "   <<  endl;
    getline(cin, author);

    cout    <<  "publicationYear : "    <<  endl;
    cin >>  publicationYear;

    Book book(title, author, publicationYear);
    book.display();

    return 0;
}