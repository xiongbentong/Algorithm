#include<cstdio>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,i,a,x,t;
    //x=0;
    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        //if(x!=0)
        //x++;
        while(1)
        {
            t=n;
            cin>>a;
            stack<int>in;
            stack<int>out;
            if(a==0)
                break;
            in.push(a);
            for(i=1; i<t; i++)
            {
                cin>>a;
                in.push(a);
            }
            while(1)
            {
                //getchar();
                if(in.empty()!=1&&in.top()==t)
                {
                    //printf("pop(%d)\n",in.top());
                    in.pop();
                    t--;
                }
                else
                {
                    if(!out.empty()&&out.top()==t)
                    {
                        //printf("pop(%d)\n",out.top());
                        out.pop();
                        t--;
                    }
                    else
                    {
                        if(in.empty())
                            break;
                        out.push(in.top());
                        in.pop();
                    }
                }
            }
            if(t==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
        cout<<endl;
    }
}