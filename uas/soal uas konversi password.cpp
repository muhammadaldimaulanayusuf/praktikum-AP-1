#include <iostream>
#include <string>
using namespace std;

string convertPassword(const string& password) {
string convertedPassword;
for (char ch : password) {
if (isalpha(ch)) {
char shiftedChar = static_cast<char>(((tolower(ch) - 'a' + 2) % 26) + 'a');
convertedPassword += shiftedChar;
} else if (isdigit(ch)) {
int digit = ch - '0';
int convertedDigit = digit * 2;
convertedPassword += to_string(convertedDigit);
} else {
convertedPassword += ch;
}
}
return convertedPassword;
}

bool isValidPassword(const string& password) {
if (password.length() > 8) {
return false;
}

for (size_t i = 1; i < password.length(); ++i) {
if (password[i] == password[i - 1]) {
return false;
}
}

return true;
}

int main() {
string inputPassword;
cout << "Masukkan password: ";
cin >> inputPassword;

if (isValidPassword(inputPassword)) {
string converted = convertPassword(inputPassword);
cout << "Password yang dimasukkan: " << inputPassword << endl;
cout << "Password yang tersimpan: " << converted << endl;
} else {
cout << "Password tidak valid sesuai aturan (point a)." << endl;
}

return 0;
}