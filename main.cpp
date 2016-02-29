#include <iostream>
#include <string.h>



// char *strpbrk(const char *s, const char *accept);	            находит первое вхождение любого символа, перечисленного в accept

using namespace std;

int main(int argc, char **argv) {
    string tmp = strpbrk(argv[1],"_");
    tmp.erase(0,1);

    int num = atoi(tmp.c_str());
    num++;
    string tmp2 = to_string(num);

    cout<<tmp<<endl;
    cout<<num<<endl;
    cout<<tmp2<<endl;

    return 0;

}