#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <sstream>
#include <locale>

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
	string line, filePath;

	cout << "Drag and drop the file you want to catalog: ";
	cin >> filePath;
	cout << endl;
	file.open(filePath);
	if (file.fail()){   cout << "Failed to open file.\n";   return 0;}
	else{
		getline(file,line);
		if(file.is_open()){
			while(file.good()){
				getline(file, line);
				lines.push_back(line);
			}
			cout << "Number of elements: " << lines.size() << endl;
	    	file.close();
		}
		else{cout << "File not open, terminating program.\n";}
    }

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
    cout << input << " is in group: " << grouping[input] << endl;
}