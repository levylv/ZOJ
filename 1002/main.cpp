#include <iostream>
using namespace std;

char map[4][4];
int n,max_num;
bool panduan(int x,int y)
{
    int i,j;
    for (i=x-1;i>=0;i--)
    {
        if (map[i][y]=='X')
        {
            break;
        }
        if (map[i][y]=='O')
        {
            return false;
        }
    }
    for (j=y-1;j>=0;j--)
    {

        if (map[x][j]=='X')
        {
            break;
        }
        if (map[x][j]=='O')
        {
            return false;
        }
    }
    return true;
}
void findsum(int k,int cur_num)
{
    int x,y;
    x=k/n;
    y=k%n;
    if (k==n*n)
    {
        if (cur_num>max_num)
        {
            max_num=cur_num;
            return;
        }
    }
    else
    {
        if(map[x][y]=='.'&&(panduan(x,y)==true))
        {
            map[x][y]='O';
            findsum(k+1,cur_num+1);
            map[x][y]='.';
        }
        findsum(k+1,cur_num);
    }
    return;
}

int main()
{
    int i,j=0;
    while(cin>>n&&n!=0)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>map[i][j];
            }
        }
        max_num=0;
        findsum(0,0);
        cout<<max_num<<endl;
    }

	return 0;
}

