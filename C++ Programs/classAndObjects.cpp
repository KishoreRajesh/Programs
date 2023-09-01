#include <iostream>
using namespace std;

class book {
    public :
        string title;
        string author;
        int pages;
};

int main(){
    book book1 ;
        book1.title = "Computer Programming in C";
        book1.author = "V. Rajaraman";
        book1.pages = 363;

    cout << book1.pages;
}