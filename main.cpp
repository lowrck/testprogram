#include <iostream>
#include <map>
#include <iterator>
#include <sstream>

using namespace std;

void reverseStr(string &str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
        swap(str[i], str[n-i-1]);
}

int main() {
    map <char, string> alphabet;
    string input;
    string output;
    string count1;
    int count2, counter1;
    alphabet.insert ( pair<char, string>('a',".-") );
    alphabet.insert ( pair<char, string>('b',"-...") );
    alphabet.insert ( pair<char, string>('c',"-.-.") );
    alphabet.insert ( pair<char, string>('d',"-..") );
    alphabet.insert ( pair<char, string>('e',".") );
    alphabet.insert ( pair<char, string>('f',"..-.") );
    alphabet.insert ( pair<char, string>('g',"--.") );
    alphabet.insert ( pair<char, string>('h',"....") );
    alphabet.insert ( pair<char, string>('i',"..") );
    alphabet.insert ( pair<char, string>('j',".---") );
    alphabet.insert ( pair<char, string>('k',"-.-") );
    alphabet.insert ( pair<char, string>('l',".-..") );
    alphabet.insert ( pair<char, string>('m',"--") );
    alphabet.insert ( pair<char, string>('n',"-.") );
    alphabet.insert ( pair<char, string>('o',"---") );
    alphabet.insert ( pair<char, string>('p',".--.") );
    alphabet.insert ( pair<char, string>('q',"--.-") );
    alphabet.insert ( pair<char, string>('r',".-.") );
    alphabet.insert ( pair<char, string>('s',"...") );
    alphabet.insert ( pair<char, string>('t',"-") );
    alphabet.insert ( pair<char, string>('u',"..-") );
    alphabet.insert ( pair<char, string>('v',"...-") );
    alphabet.insert ( pair<char, string>('w',".--") );
    alphabet.insert ( pair<char, string>('x',"-..-") );
    alphabet.insert ( pair<char, string>('y',"-.--") );
    alphabet.insert ( pair<char, string>('z',"--..") );


    alphabet.insert ( pair<char, string>('_',"..--") );
    alphabet.insert ( pair<char, string>(',',".-.-") );
    alphabet.insert ( pair<char, string>('.',"---.") );
    alphabet.insert ( pair<char, string>('?',"----") );

    cout << "input charecter" << endl;
    getline(cin, input);
    cout << input << endl;
    for(int i = 0; i < input.length(); i++) {
       // cout << input[i] << endl;
        map<char, std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>>::iterator search = alphabet.find(input[i]);
        string b3;
        if (search != alphabet.end()) {
            //element found;
            b3 = search->second;
        }
       // cout << b3 << endl;
        stringstream ss;
        ss << b3.length();
        count1 += ss.str();
        output += b3;
        output += " ";
    }
    reverseStr(count1);
    for(int i = 0; i < count1.length(); i++) {
        output.substr
        count1[i]
    }
    cout << output << " " << count1 << endl;
    return 0;
}

