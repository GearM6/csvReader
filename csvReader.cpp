#include <iostream>
#include <fstream>
#include <vector>
#include <map>

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
<<<<<<< HEAD

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
=======
	cout << "Running\n";
	getline(file,line);
	while(file.good() && !file.eof()){
		getline(file, line);
		lines.push_back(line);
		cout << line << endl;
	}
	cout << lines.size();
    file.close();
    


    typedef std::tr1::unordered_map<int,unsigned int> CounterMap;
	CounterMap counts;
	for (int i = 0; i < lines.size(); ++i)
	{
   		CounterMap::iterator i(counts.find(lines[i]));
   		if (i != counts.end()){
      		i->second++;
   		} else {
      		counts[lines[i]] = 1;
   		}
	}


>>>>>>> origin/master
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