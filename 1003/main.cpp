<<<<<<< HEAD
#include <iostream>
using namespace std;

int flag1,flag2;//定义两个flag,flag1=1表示分低者没说谎，flag2=1表示分高者没说谎

void dfs(int x,int y,int n)//深度优先搜索加回溯
{
    if (flag2==1)//一旦找到相斥解，全部返回，释放递归
    {
        return;
    }
    if(x==1&&y==1)//找到相斥解
    {
        flag1=1;
        flag2=1;
        return;
    }
    if(y==1)//说明分低者可分解，未说谎
    {
        flag1=1;
    }
    if (n>100)//超过100因子就回溯
    {
        return;
    }
    if (x%n==0)
    {
        dfs(x/n,y,n+1);
    }
    if (y%n==0)
    {
        dfs(x,y/n,n+1);
    }
    dfs(x,y,n+1);
    return;
}


int main()
{
    int x,y,temp;
    while(cin>>x>>y)
    {
        if(x<y) //使x为分高者，y为分低者
        {
            temp=x;
            x=y;
            y=temp;
        }
        flag1=0;//初始化，假设均说谎了
        flag2=0;
//        n=2;
        dfs(x,y,2);
        if(flag2==1||flag1==0)//分低者说谎，或者分低者不说谎且分高者也不说谎，则分高者胜
        {
            cout<<x<<endl;
        }
        else //分低者不说谎且分高者说谎，则分低者胜
        {
            cout<<y<<endl;
        }
    }
    return 0;
}
=======
#include <iostream>
using namespace std;

int flag1,flag2;//定义两个flag,flag1=1表示分低者没说谎，flag2=1表示分高者没说谎

void dfs(int x,int y,int n)//深度优先搜索加回溯
{
    if (flag2==1)//一旦找到相斥解，全部返回，释放递归
    {
        return;
    }
    if(x==1&&y==1)//找到相斥解
    {
        flag1=1;
        flag2=1;
        return;
    }
    if(y==1)//说明分低者可分解，未说谎
    {
        flag1=1;
    }
    if (n>100)//超过100因子就回溯
    {
        return;
    }
    if (x%n==0)
    {
        dfs(x/n,y,n+1);
    }
    if (y%n==0)
    {
        dfs(x,y/n,n+1);
    }
    dfs(x,y,n+1);
    return;
}


int main()
{
    int x,y,temp;
    while(cin>>x>>y)
    {
        if(x<y) //使x为分高者，y为分低者
        {
            temp=x;
            x=y;
            y=temp;
        }
        flag1=0;//初始化，假设均说谎了
        flag2=0;
//        n=2;
        dfs(x,y,2);
        if(flag2==1||flag1==0)//分低者说谎，或者分低者不说谎且分高者也不说谎，则分高者胜
        {
            cout<<x<<endl;
        }
        else //分低者不说谎且分高者说谎，则分低者胜
        {
            cout<<y<<endl;
        }
    }
    return 0;
}
>>>>>>> cc4c945c30892c287acadd73f2198083e37e7e94
