    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int b,g,a[110],d[110],i,j,c=0;
        cin>>b;
        for(i=0;i<b;i++)
            cin>>a[i];
        cin>>g;
        for(i=0;i<g;i++)
            cin>>d[i];
        sort(a,a+b);
        sort(d,d+g);
        for(i=0;i<b;i++)
        {
            for(j=0;j<g;j++)
            {
                if((a[i]==d[j]||a[i]-1==d[j]||a[i]+1==d[j])&&d[j]>0)
                {
                    c++;
                    d[j]=0;
                    break;
                }
            }
        }
        cout<<c<<endl;
    }