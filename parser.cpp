#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    string url,scheme,authority,path;

    int par,p,par2,s;

    cout<<"Please enter a URL: ";
    cin>>url;
    par2 = url.find(":");

    for (int i=0;i<url.size();i++)
    {
        if(url[i]=='/' && url[i+1]=='/')
        {
            par = i;
            i++;
        }
        else if(url[i]=='/' && url[i+1]!='/')
        {
            p=i;
            break;
        }
    }

    scheme = url.substr(0,par2+1);

    s = ((url.size()-par2)-(url.size()-p))-1;
    authority = url.substr(par,s);

    path = url.substr(p);

    cout<<endl;
    cout<<"Scheme: "<<scheme<<endl;
    cout<<"Authority: "<<authority<<endl;
    cout<<"Path: "<<path<<endl;
    return 0;
}