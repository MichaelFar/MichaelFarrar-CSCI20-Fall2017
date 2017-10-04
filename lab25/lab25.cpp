#include <iostream>
#include <string>
using namespace std;

class book{
    private:
    
    string UserInputTitle;
    string UserInputAuthor;
    string UserInputCopyright;
    public:
    string SetTitle(string UserInputTitle);
    string SetAuthor(string UserInputAuthor);
    string SetCopyrightDate(string UserInputCopyright);
    string GetTitle()const;
    string GetAuthor()const;
    string GetCopyrightDate()const;
    

};

string book::SetTitle(string Title){
    string userInputTitle;
    userInputTitle = Title;
    
}

string book::SetAuthor(string Author){
    string userInputAuthor;
    userInputAuthor = Author;
    
}

string book::SetCopyrightDate(string CopyRight){
    string userInputCopyright;
    userInputCopyright = CopyRight;
    
    
}

string book::GetTitle() const{
    return UserInputTitle;
}

string book::GetAuthor() const{
    return UserInputAuthor;
}

string book::GetCopyrightDate() const{
    return UserInputCopyright;
}

int main()
{
    string userInputTitle;
    string userInputAuthor;
    string userInputCopyright;
    book one;
    
    cout << "Please choose a title" << endl;
    cin >> userInputTitle;
    one.book::SetTitle(userInputTitle);
    cout << "Please choose an Author" << endl;
    cin >> userInputAuthor;
    one.SetAuthor(userInputAuthor);
    cout << "Please choose a copyright date" << endl;
    cin >> userInputCopyright;
    one.book::SetCopyrightDate(userInputCopyright);
    one.book::GetTitle();
    one.book::GetAuthor();
    one.book::GetCopyrightDate();
    
}

