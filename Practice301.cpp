// Practice301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//import but not
#include <iostream>
#include <vector>

//
using namespace std;



//new method
//the "&" passes in the memory address of the input, so it modifies what is passed in 
//default is "pass by value"
//this is called "pass by reference"
int doubleNumber(int& x)
{
    return x *= 2;
}



int main()
{
    //print stuff
    std::cout << "\"I'm Glad the Sky is Painted Blue\n";
    std::cout << "\"I'm glad the sky is painted blue,\n";
    std::cout << "\"And the earth is painted green,\n";
    std::cout << "\"With such a lot of nice fresh air\n";
    std::cout << "\"All sandwiched in between.\n";



    //for loop practice
    for (int i = 0; i < 10; i++)
    {
        //check if even or odd
        if (i % 2 == 0)
        {
            //print even
            cout << i << " is even" << endl;
        }
        else 
        {
            //print odd
            cout << i << " is odd" << endl;
        }
    }


    //array practice
    //int numbers[] = { 4,9,1,5,2 };

    //vector practice
    vector<int> numbers;

    //push_back is same as add to end
    numbers.push_back(4);
    numbers.push_back(8);
    numbers.push_back(1);
    numbers.push_back(17);


    //looping through array practice
    for (int n : numbers)
    {
        //print it out
        cout << " Looping through my array. I'm currently at " << n << "\n";
    }




    //random doubling numbers
    int x = 42;
    int x2 = doubleNumber(x);

    cout << "original x: " << x << ". New value: " << x2 << endl;









    //variables
    string name;
    cout << "What is your name? ";

    //keyboard input, accepts single individual strings separated by a space
    cin >> name;

    //check everything
    if (name == "Balu")
    {
        cout << "Pleased to meet you, " << name << "\n";
    }
    else
    {
        cout << "Oh, hello. I was actually looking for Balu  \n";
    }

    





    //always returns 0 if no errors
    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
