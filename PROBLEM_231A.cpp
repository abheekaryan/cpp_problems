#include<iostream>
using namespace std;
int main()
{
    int n,p=3;
    // INTERING THE NUMBER OF TERMS
    cin>>n;
    // INITIALISING THE PETA , VASYA , TONYA INPUT I.E THEIR RESPONSES
    int a[n][p],i,j,c,k,m=0;

    for(i=0;i<n;++i)
    {
        for(j=0;j<3;++j)
        {
            cin>>k;
            if(k==0||k==1)
            {
                a[i][j]=k;
            }
        }
    }
    // CHECKING THE GIVEN CONDITION
    for(i=0;i<n;++i)
    {
        c=0;
        for(j=0;j<3;++j)
        {
           if(a[i][j]==1)
              {
               c++;
              }
        }
        if(c>=2)
        {
        m=m+1;
        }
    }

    cout<<endl<<m<<endl;
  return 0;
}
