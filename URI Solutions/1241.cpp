#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x.size()<y.size())
            cout<<"nao encaixa"<<endl;
        else
        {
              if(x==y)
                cout<<"encaixa"<<endl;
              else if(y==x.substr(x.size()-y.size(),y.size()))
                      cout<<"encaixa"<<endl;
               else
                  cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}
