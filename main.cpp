#include <iostream>
#include "include/NFA.h"
#include <set>
#include <vector>
#include <map>

using namespace std;

int main()
{

	NFA nfa;
	nfa.dashOperator('a','c');
	cout<<nfa.getStates().size()<<endl;
    /*Parser p("hhh");
    vector<string> tokens = p.segmentation("num: digit+ | digit+ . digits ( \L | E digits) ");
    for(int i = 0; i < tokens.size(); i++){
        cout << tokens[i] << endl;
    }
    cout << "Hello world!" << endl;
    set<char> s;
    s.insert('\0');
    s.insert('1');
    cout << *s.begin() << endl;*/
    return 0;
}
