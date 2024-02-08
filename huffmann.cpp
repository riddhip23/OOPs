#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,char>mp;
    mp["100100"]='a';
    mp["111111"]='\n';
    mp["100101"]='b';

    string encoded="100100111111100101";
    string decoded="";
    string currentcode="";

    for(char c:encoded)
    {
        currentcode+=c;
        if(mp.find(currentcode)!=mp.end())
        {
            if(mp[currentcode]=='\n')
            decoded+='\n';
            else 
            decoded+=mp[currentcode];
            currentcode="";
        }
    }
    cout<<"decoded string:"<<decoded<<endl;
    return 0;
}
