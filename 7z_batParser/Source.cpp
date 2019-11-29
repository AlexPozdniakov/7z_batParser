#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = experimental::filesystem;


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");

	// get path to current directory
	fs::path fullpath(argv[0]);		
	fs::path directory = fullpath.parent_path();

	string batparserName = fullpath.filename().generic_string();
	string batfilename = "archive_items.bat";
	ofstream batfile(batfilename, ios::out | ios::trunc);

	if (!batfile.is_open())
	{
		cout << "Error opening file " + batfilename;
		return 0;
	}

	for (const auto & item : fs::directory_iterator(directory))
	{
		fs::path p(item.path());
		
		string f = p.filename().generic_string();

		if (f == batfilename || f == batparserName)	// dont add exe file and generated bat file
			continue;

		string line = "7z a \"" + f + ".7z\" \"" + f + "\"";


		batfile << line << endl;
	}

	batfile << "pause" << endl;
	batfile.close();

	return 0;
}