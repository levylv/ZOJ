<<<<<<< HEAD
#include <iostream>
using namespace std;

int flag1,flag2;//��������flag,flag1=1��ʾ�ֵ���û˵�ѣ�flag2=1��ʾ�ָ���û˵��

void dfs(int x,int y,int n)//������������ӻ���
{
    if (flag2==1)//һ���ҵ����⣬ȫ�����أ��ͷŵݹ�
    {
        return;
    }
    if(x==1&&y==1)//�ҵ�����
    {
        flag1=1;
        flag2=1;
        return;
    }
    if(y==1)//˵���ֵ��߿ɷֽ⣬δ˵��
    {
        flag1=1;
    }
    if (n>100)//����100���Ӿͻ���
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
        if(x<y) //ʹxΪ�ָ��ߣ�yΪ�ֵ���
        {
            temp=x;
            x=y;
            y=temp;
        }
        flag1=0;//��ʼ���������˵����
        flag2=0;
//        n=2;
        dfs(x,y,2);
        if(flag2==1||flag1==0)//�ֵ���˵�ѣ����߷ֵ��߲�˵���ҷָ���Ҳ��˵�ѣ���ָ���ʤ
        {
            cout<<x<<endl;
        }
        else //�ֵ��߲�˵���ҷָ���˵�ѣ���ֵ���ʤ
        {
            cout<<y<<endl;
        }
    }
    return 0;
}
=======
#include <iostream>
using namespace std;

int flag1,flag2;//��������flag,flag1=1��ʾ�ֵ���û˵�ѣ�flag2=1��ʾ�ָ���û˵��

void dfs(int x,int y,int n)//������������ӻ���
{
    if (flag2==1)//һ���ҵ����⣬ȫ�����أ��ͷŵݹ�
    {
        return;
    }
    if(x==1&&y==1)//�ҵ�����
    {
        flag1=1;
        flag2=1;
        return;
    }
    if(y==1)//˵���ֵ��߿ɷֽ⣬δ˵��
    {
        flag1=1;
    }
    if (n>100)//����100���Ӿͻ���
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
        if(x<y) //ʹxΪ�ָ��ߣ�yΪ�ֵ���
        {
            temp=x;
            x=y;
            y=temp;
        }
        flag1=0;//��ʼ���������˵����
        flag2=0;
//        n=2;
        dfs(x,y,2);
        if(flag2==1||flag1==0)//�ֵ���˵�ѣ����߷ֵ��߲�˵���ҷָ���Ҳ��˵�ѣ���ָ���ʤ
        {
            cout<<x<<endl;
        }
        else //�ֵ��߲�˵���ҷָ���˵�ѣ���ֵ���ʤ
        {
            cout<<y<<endl;
        }
    }
    return 0;
}
>>>>>>> cc4c945c30892c287acadd73f2198083e37e7e94
