/*
Author: Dabananda Mitra
Email: dabananda.dev@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Portfolio: https://dmitra.netlify.app/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
Time & Date: 2026-02-07 09:34:36 AM (Dhaka, Bangladesh)
*/

/*
Author: Dabananda Mitra
Email: imdmitra@gmail.com
GitHub: https://github.com/dabananda
LinkedIn: https://www.linkedin.com/in/dabanandamitra/
Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)
Time & Date: 2024-03-04 03:23:31 PM (Dhaka, Bangladesh)
*/

#include <ctime>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string getCurrentDateTime() {
  time_t now = time(0);
  struct tm* localTime = localtime(&now);

  char buffer[80];
  strftime(buffer, sizeof(buffer), "%Y-%m-%d %I:%M:%S %p", localTime);

  return buffer;
}

int main() {
  string filePath;
  string authorInfo =
      "/*\n"
      "Author: Dabananda Mitra\n"
      "Email: dabananda.dev@gmail.com\n"
      "GitHub: https://github.com/dabananda\n"
      "LinkedIn: https://www.linkedin.com/in/dabanandamitra/\n"
      "Portfolio: https://dmitra.netlify.app/\n"
      "Department of Computer Science and Engineering (CSE), Session: 2019-2020, Institute of Science Trade & Technology (ISTT)\n"
      "Time & Date: " +
      getCurrentDateTime() +
      " (Dhaka, Bangladesh)\n"
      "*/\n\n";

  // Input file path
  cout << "Enter the file path: ";
  getline(cin, filePath);

  // Open the file
  ifstream inputFile(filePath);
  if (!inputFile.is_open()) {
    cerr << "Error opening file: " << filePath << endl;
    return 1;
  }

  // Read the content of the file
  stringstream buffer;
  buffer << inputFile.rdbuf();
  string fileContent = buffer.str();

  // Add author information at the beginning
  fileContent = authorInfo + fileContent;

  // Close the input file
  inputFile.close();

  // Open the file for writing
  ofstream outputFile(filePath);
  if (!outputFile.is_open()) {
    cerr << "Error opening file for writing: " << filePath << endl;
    return 1;
  }

  // Write the modified content to the file
  outputFile << fileContent;

  // Close the output file
  outputFile.close();

  // Commit and push to GitHub
  string commitMessage;
  cout << "Enter the commit message: ";
  getline(cin, commitMessage);

  string command = "git add " + filePath + " && git commit -m \"" + commitMessage + "\" && git push";
  system(command.c_str());

  cout << "Changes committed and pushed to GitHub successfully." << endl;

  return 0;
}
