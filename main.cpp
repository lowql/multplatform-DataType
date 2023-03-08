#include <iostream>
#include <string>
using namespace std;
string getOsName(){
        #ifdef _WIN32
        return "Windows 32-bit";
        #elif _WIN64
        return "Windows 64-bit";
        #elif __APPLE__ || __MACH__
        return "Mac OSX";
        #elif __linux__
        return "Linux";
        #elif __FreeBSD__
        return "FreeBSD";
        #elif __unix || __unix__
        return "Unix";
        #else
        return "Other";
        #endif
}  
template<typename T, typename Y> 
void typeSize(T& t, Y& y) {
    cout<<left<<setw(25)<<"The size of the type of "<<right<<y<<"= "<<sizeof(t)<<'\n';
}
int main(){
    cout<<getOsName()<<'\n';
    bool bool_n;
    typeSize(bool_n, "bool");
    char char_n;
    typeSize(char_n, "char");
    short int sInt_n;
    typeSize(sInt_n, "short int");
    int int_n;
    typeSize(int_n, "Int");
    long int lInt_n;
    typeSize(lInt_n, "long int");
    float float_n;
    typeSize(float_n, "float");
    double double_n;
    typeSize(double_n, "double");
    long double ldouble_n;
    typeSize(ldouble_n, "long double");
}