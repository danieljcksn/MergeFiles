#include <bits/stdc++.h>

using namespace std;

int main(){
	const filesystem::path filesToBeMerged="filesToBeMerged";

	// Create a file to store the merged files
	ofstream mergedFile("mergedFile.txt");

	// Iterate through all the files in the directory
	for(auto& file: filesystem::directory_iterator(filesToBeMerged)){
		// Open the file
		ifstream fileToBeMerged(file.path());

		cout << "Merging: " << '\n' << file.path() << '\n';

		// Copy the contents of the file to the merged file
		mergedFile << fileToBeMerged.rdbuf();
		mergedFile << '\n';
	}

	return 0;
}