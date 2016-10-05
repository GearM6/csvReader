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

	ifstream in1("Campers_Test.csv");
	string line;
	getline(in1, line);
	while(cin.good()){
		cout << line;
		lines.push_back(line);
		getline(in1, line);
	}
	cout << lines.size();
    in1.close();

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