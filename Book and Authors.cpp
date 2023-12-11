#include <bits/stdc++.h>
using namespace std;

class Author {
	public:
		string name;
		string email;
		string gender;
};

class Book {
	public:
		string name;
		int price;
		int quantity;
		vector<Author> authors;
};

bool cmp(Book& a, Book& b) {
    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    vector<Book> books(n);
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        string tmp;
        getline(cin, tmp);
        getline(cin, books[i].name);
        cin >> books[i].price >> books[i].quantity;
        int num_authors;
        cin >> num_authors;
        books[i].authors.resize(num_authors);
        cin.ignore();
        for (int j = 0; j < num_authors; ++j) {
            getline(cin, books[i].authors[j].name);
            getline(cin, books[i].authors[j].email);
            getline(cin, books[i].authors[j].gender);
        }
    }

    sort(books.begin(), books.end(), cmp);

    for (auto book : books) {
        cout << "-----------------------\n";
        cout << "Book information :\n";
        cout << "Name : " << book.name << "\n";
        cout << "Price : " << book.price << "\n";
        cout << "Quantity : " << book.quantity << "\n";
        cout << "Author information :\n";
        int author_count = 1;
        for (auto author : book.authors) {
            cout << "#" << author_count++ << "\n";
            cout << "Name : " << author.name << "\n";
            cout << "Email : " << author.email << "\n";
            cout << "Gender : " << author.gender << "\n";
        }
    }

    return 0;
}