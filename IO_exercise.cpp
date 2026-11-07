#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string response = "jj";

void DisplayMessage();
using namespace std;
int main() {
    DisplayMessage();

    getline(cin, response);
    cout << "Alors tu aimes" <<" ";
    cout << response;
    cout << ", moi aussi" << endl << endl;
    cout << string(10, 'e2');
    return 0;

}

void DisplayMessage() {
    string message = "Quelle est ta nourriture prefere? ";
    cout << message;
}