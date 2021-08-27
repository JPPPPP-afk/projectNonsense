#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>
#include<cstring>
using namespace std;

void addHeart(const string str,const string fmt)
{
    cout<<fmt;
    for (int i = 0; i < str.size(); i = i + 2){
        cout << str[i] << str[i + 1];
        cout<<fmt;
    }
    cout<<endl;
}


// int main(int argc, char* argv[])
// {
//     try{
//         if(argc<3)
//         {
//             throw "Not Enough Arguement";
//         }
//         string str = argv[1];
//         string fmt = argv[2];
//         string result = addHeart(str,fmt);
//         cout<<str<<" "<<fmt<<endl;
//         cout<<result;
//     }catch (const char* msg)
//     {
//         cerr<<msg<<endl;
//     }
// }

int main(int argc, char* argv[])
{
    try
    {
        if (argc<3)
        {
            throw "Not Enough Arguement, SENTENCE OR EMOJI MISSING!";
        }
        string str = argv[1];
        string fmt = argv[2];
        string finalFmt = "["+fmt+"]";
        if(fmt[0]!='[') addHeart(str,finalFmt);
        else{addHeart(str,fmt);}
    }catch (const char* msg)
    {
        cerr<<msg<<endl;
    }
    // char temp [3];
    // strcpy(temp,str[0]);
    // // string result = addHeart(str,fmt);
    // cout<<temp[0]<<endl;
    // return 0;
    // for (int i = 0; i < str.size(); i = i + 2)
    //     cout << str[i] << str[i + 1];
    // int i=0;
    // while(i<5)
    // {
    //     cin>>temp[i];
    //     cout<<"success"<<endl;
    //     i++;
    // }
    // for(i=0;i<5;i++)
    // {
    //     cout<<temp[i];
    // }
    return 0;

}