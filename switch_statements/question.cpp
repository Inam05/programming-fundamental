/*Develop a quiz game where the user can choose different quiz categories (science, history, literature) using only switch statement.
 Ask a random question from the selected category.*/
#include <iostream>
using namespace std;
int main(){
int category;
cout<<"Enter the number & select your category";
cin>>category;
    switch (category) {
        case 1:
            cout << "Science Question: What is the chemical symbol for water?\n";
            // Add more science questions as needed
            break;
        case 2:
            cout << "History Question: Who was the first President of the United States?\n";
            // Add more history questions as needed
            break;
        case 3:
            cout << "Literature Question: Who wrote 'Romeo and Juliet'?\n";
            // Add more literature questions as needed
            break;
        default:
            cout << "Invalid category selection.\n";
            break;
    }
}