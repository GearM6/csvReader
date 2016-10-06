#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
	int campTotal;
	int campGroup;
	int campCapacity;
	int maxCapacity;
	int maxFemale;
	int maxMale;

	vector<string> lines;
	ifstream file;
	string line;

	file.open("campersList.csv");
	if (file.fail()){   cout << "Failed to open file.\n";   return 0;}
	else{
		getline(file,line);
		if(file.is_open()){
			while(file.good()){
				getline(file, line);
				lines.push_back(line);
				cout << line << endl;
			}
			cout << "Number of lines: " << lines.size() << endl;
	    	file.close();
		}
		else{cout << "File not open, terminating program.\n";}
    }
	/*
	string stringIn = "my,csv,,is 10233478,separated,by commas";
	vector<std::string> commaSeparated(1);
	int commaCounter = 0;
	
	for (int i=0; i<stringIn.size(); i++) {
    if (stringIn[i] == ",") {
        commaSeparated.push_back("");
        commaCounter++;
    } else {
        commaSeparated.at(commaCounter) += stringIn[i];
    }
	*/
}