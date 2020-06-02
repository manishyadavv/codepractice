//
// Created by MANISH YADAV on 02/06/20.
//

#include<iostream>
#include<sstream>

using namespace std;

void encodings(string ques, string asf){
    if(ques.size() == 0){
        cout << asf << endl;
    }
    else if(ques.size() == 1){
        char ch = ques[0];
        string roq = ques.substr(1, ques.length() - 1);
        if(ch != '0'){
            int num = ch - 48;
            char code = 'a' + num - 1;
            encodings(roq, asf + code);
        }
    }//ques kaa size 2 h
    else {
        char ch0 = ques[0];
        string roq0 = ques.substr(1, ques.length() - 1);
        if(ch0 != '0'){
            int num = ch0 - 48;
            char code = 'a' + num - 1;
            encodings(roq0, asf + code);
        }

        char ch1 = ques[1];
        string roq1 = ques.substr(2, ques.length() - 2);
        if(ch0 != '0'){
            int num = (ch0 - 48) * 10 + (ch1 - 48);
            if(num >= 10 && num <= 26)
            {
                char code = 'a' + num - 1;
                encodings(roq1, asf + code);
            }
        }
    }
}

int main(int argc, char** argv){
    encodings("1123", "");

}
