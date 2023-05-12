#include <iostream>
using namespace std;

main()
{
    string tp;
    int whwin = 0, rdwin = 0, roswin = 0;
    while (tp != "Leave")
    {
        cout << "Put your charecteristic wine or to leave: ";
        cin >> tp;
        if (tp == "White" || tp == "W")
        {
            whwin = whwin + 1;
        }
        else if (tp == "Red" || tp == "R")
        {
            rdwin = rdwin + 1;
        }
        else if (tp == "Rose" || tp == "r")
        {
            roswin = roswin + 1;
        }
    }
    cout << "White wine: " << whwin << endl;
    cout << "Red wine: " << rdwin << endl;
    cout << "Rose wine: " << roswin << endl;
}