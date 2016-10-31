#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <locale>

using namespace std;

vector<string> catalog(string path){
	vector<string> temp;
	ifstream file;
	string line;


	file.open(path); //Open the file
	if (file.fail()){   cout << "Failed to open file.\n";   return 0;}
	else{
		getline(file,line); //Receive the input
		if(file.is_open()){ // if the file is open, proceed
			while(file.good()){ // read all the good input from the file
				getline(file, line); // add the current line from the file to the vector 
				line.push_back(line);
			}
			cout << "Number of elements: " << temp.size() << endl; //Report the number of collected elements
	    	file.close(); //Close the file
	    	return temp; //return the vector
		}
		else{cout << "File not open, terminating program.\n";}
    }
}

int main(){
	enum gender {male, female};

	struct person
	{
		string name;
		gender pGender;
		int groupNumber;

	};

	int campTotal;
	int campGroup;
	int campCapacity;
	int maxCapacity;
	int maxFemale = maxCapacity/2;
	int maxMale = maxCapacity/2;

	vector<string> lines;
	string filePath;

	cout << "Drag and drop the file you want to catalog: ";
	cin >> filePath;
	cout << endl;

	lines = catalog(filePath);

    map<string,string> grouping;
    for (int i = 0; i < lines.size(); ++i)
    {
    	istringstream stream(lines[i]);
    	string temp;
    	vector<string> v;
	    while(getline(stream,temp,',')){
	    	int j = 0;
	    	v.push_back(temp);
	    	j++;
	    }    
	    grouping[v[0]] = v[4];
	    cout << v[0] << "\n";
    }

    string input;
    cout << "Enter the name you want to find: (type 'done' to quit)\n";
    cin.ignore(1000, '\n');
    getline(cin, input);
    while(cin.good()){
    	if (input == "done" or input == "Done")
    		{break;}
    	else if (grouping[input] == ""){
    		cout << "Person not found.\n";
    	}
    	else {
    		cout << input << " is in group: " << grouping[input] << endl;    		
    	}
    	getline(cin, input);
    }
    
}