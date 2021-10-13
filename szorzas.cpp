#include <string>

using namespace std;

string operator*(int mennyiseg, const string& str) {
    string eredmeny = "";
    for (int i = 0; i < mennyiseg; i++)
        eredmeny = eredmeny + str;
    return eredmeny;
}
/*
 #include <string>

using namespace std;

string operator*(int mennyiseg, const string& str) {
    string res;
    for (int i = 0; i < mennyiseg; i++) {
        res += str;
    }

    return res;
}
 */
