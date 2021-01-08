#include <iostream>
#include <string>
#include <windows.h>
using std::cout;
using std::cin;
using std::string;
int sysStatus = 1;
string cmdInput;
int main() {
    cout << "[Developer Tool Kit[v1.0|1/8/21]\n";
    while (sysStatus == 1) {
        cout << ">"; cin >> cmdInput;
        if (cmdInput == "main.Shutdown") {
            return 0;
        }

        else if (cmdInput == "win.New") {
            ShellExecute(NULL, "open", "DTK.exe", NULL, NULL, SW_SHOWDEFAULT);
        }

        else if (cmdInput == "math.Sim"){
            long double numX = 1;
            long double numSum = 0;
            string oppsType;
            cout << "Long double number used per cycle.\n";
            cout << ">numX:"; cin >> numX;
            cout << "Operation used |+|-|/|*|";
            cout << "\n";
            cout << ">oppsType:"; cin >> oppsType;
            cout << "Long double number.";
            cout << "\n";
            cout << ">numSum:"; cin >> numSum;
            ShellExecute(NULL, "open", "DTK.exe", NULL, NULL, SW_SHOWDEFAULT);
            while (1 == 1){
                if (oppsType == "+") {
                    numSum += numX;
                }
                else if (oppsType == "-") {
                    numSum -= numX;
                }
                else if (oppsType == "*") {
                    numSum *= numX;
                }
                else if (oppsType == "/") {
                    numSum /= numX;
                }
                else {
                    cout << "Invalid operation used!";
                    cin >> numX;
                    return 0;
                }
                cout << numSum; cout << "\n";
            }
        }


        else {
            cout << cmdInput; cout << " is not recognized as an input command.\n";
        }
}
}
