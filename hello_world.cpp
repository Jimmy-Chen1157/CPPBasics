#include <iostream>
#include <vector>


using namespace std;

void PrintNameAge(string name, string age){
    cout << "Hello " << name << endl;
    cout << "Your age is " << age << " years old" << endl;
}

void PrintDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day Number";
    }

    cout << dayName;
}

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(string iTitle, string iAuth, int iPages){
            title = iTitle;
            pages = iPages;
            author = iAuth;
        }
};

class Author{
    public:
        string name;
        int age;
        vector<Book> books;
        int currentIndex = 0;

        Author(string iName, int iAge){
            name = iName;
            age = iAge;
        }

        void AddBooks(string bookName, int pages){
            books.push_back(Book(bookName, name, pages));
            currentIndex++;
        }
};

ostream& operator << (ostream& COUT, Author& auth){
    COUT << auth.name;
    return COUT;
}


int main(){
    Author auth1("Jimmy Chen", 15);
    auth1.AddBooks("The Drifter", 900);
    auth1.AddBooks("Python", 700);

    cout << auth1 << endl;

    return 0;
}

