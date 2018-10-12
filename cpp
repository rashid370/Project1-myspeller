#include<fstream>
#include<istream>
#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int file_size (string FName)
{
    int size = 0;
    string line;
    ifstream myfile(FName);

    while (getline(myfile, line))
        ++size;
    myfile.close();
    return size;
}

int main()
{
	string wordSearch; //Word to be searched

	cout<<"Insert Word: ";
	cin>>wordSearch; //Asks user for their word search
	cout<<"The word you are looking is: "<<wordSearch<<endl;

//Call for function to validate input
//Call for function to count for how many searches came up before finding word of interest
//Call for function to find definition
//Call for function to find definitions with wildcard
//Call for function to find definitions with prefix


}



int main ()
{
	string dict;
	cout<<"Select dictionary name: ";
	cin>>dict;
    string array[file_size(dict)]; // creates array to hold names

   	int counter=0; 

    string line; //this will contain the data read from the file
    ifstream myfile (dict); //opening the file.
    if (myfile.is_open()) //if the file is open
    {
        while (! myfile.eof() ) //while the end of file is NOT reached
        {
            getline (myfile,line); //get one line from the file
            array[counter] = line;
            cout << array[counter] << endl; //and output it
            counter++;
        }
        myfile.close(); //closing the file
    }
   else cout << "Unable to open file"; //if the file is not open output
   return 0;
}
