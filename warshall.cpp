#include<fstream>
#include<iostream>
#include<algorithm>
fstream f("input.dat",ios::in);
fstream g("output.dat",ios::out);
int M[100][100];
int n;
using namespace std;
int read_data()
{
    f>>n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) for(int j=1;j<=n;j++)  f>>M[i][j]; f.close()
}
int main()
{
    read_data();
    for(int i=1;i<=n;i++)
        {for(int j=1;j<=n;j++)
        for(int j=1;j<=n;j++)
        {if(k!=i && k!=j && i!=j)
        {M[i,j]=min(M[i,k],M[k,j])}}

}
