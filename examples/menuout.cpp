// Menu in cpp

#include <iostream>
#include <fstream>

using namespace std;

int main() {

  try {
    ofstream demoFile("demofile.txt");
    cout << "The document was succefully created!" << endl;
  } catch(string demoFile) {
    cout << "The document doesn't exists! Try again." << demoFile << endl;
  }

  cout << "MENU" <<endl;

  while (true) {
    cout << "1 - Access document." << endl;
    cout << "2 - Add new element." << endl;
    cout << "3 - Finish access." << endl;

    int opt;

    cout << "Option: ";
    cin >> opt;

    if (opt != 1 && opt != 2 && opt != 3) {
      while (opt != 1 && opt != 2 && opt != 3) {
        cout << "The option is unavailable! Try again." << endl;
        cout << "Option: ";
        cin >> opt;
      }

    }

    if (opt == 1) {
      cout << "-----" << endl;
      cout << "Accessing the document." << endl;
      cout << "-----" << endl;
    } else if (opt == 2) {
      cout << "-----" << endl;
      cout << "Adding a new element to the document." << endl;
      cout << "-----" << endl;
    } else {
      cout << "-----" << endl;
      cout << "Finishing the access." << endl;
      cout << "-----" << endl;
      break;
    }
  }

  return 0;

}
