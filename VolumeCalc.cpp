#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string cube;
    int side;
    string shape;
    string rectangular_prism;
    int recone;
    int rectwo;
    int recthree;
    string irregular_prism;
    int irrbase;
    int irrheight;
    string Again;




    cout << "Welcome to the Volume Calculator " << endl;
    cout << "What shape would you like to calculate the volume of" << endl;
    do { cout << "Enter either cube, rectangular_prism, or irregular_prism" << endl;
    cin >> shape;

    if ( shape == "cube") {

        cout << "What is the length of the side of the cube?";
        cin >> side;
        cout << "The volume of your cube is " << side*side*side << endl;
        } else if ( shape == "rectangular_prism") {
            cout << "what are the measurements of the rectangular prism?" << endl;
            cout << "Length : ";
            cin >> recone;
            cout << "width : ";
            cin >> rectwo;
            cout << "height : ";
            cin >> recthree;
            cout << "The volume of your rectangular prism is " << recone*rectwo*recthree << endl;
        } else if ( shape == "irregular_prism") {
            cout << "What are the dimensions of your irregular prism?" << endl;
            cout << "base : ";
            cin >> irrbase;
            cout << "height: ";
            cin >> irrheight;
            cout << "The volume of your irregular prism is " << irrbase*irrheight << endl;
         } else {
            cout << "That is not a valid option" << endl;
        }

        cout << "Do you want to calculate another volume? Enter Yes or No ";
        cin >> Again;
        } while ( Again == "Yes");

        cout << "Thank You" << endl;

    return 0;
}
