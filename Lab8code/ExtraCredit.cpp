#include <iostream>
#include <string>

using namespace std;

string swapNthCase(const string & str, const int n);

//DO NOT MODIFY THE MAIN FUNCTION

int main(){
    //prompt for string
    string str;
    int n;
    cout << "Enter word: ";
    cin >> str;
    cout << "Enter N: ";
    cin >> n;
    //swap cases
    cout << "Swapped every Nth case: " << swapNthCase(str, n) << endl;

    return 0;
}

string swapNthCase(const string & str, const int n) {
    string result = str;
    int count = 0;
    for (int i = 0; i < result.length(); i++) {
        if (isalpha(result[i])) {
            count++;
            if (count % n == 0) {
                if (islower(result[i])) {
                    result[i] = toupper(result[i]);
                } else if (isupper(result[i])) {
                    result[i] = tolower(result[i]);
                }
            }
        }
    }
    return result;
}
