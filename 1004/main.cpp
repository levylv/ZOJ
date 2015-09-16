#include <iostream>
#include <string>
#define N 100
using namespace std;

string source;//源序列
string target;//目标序列
string stack;//栈
int sequence[N]; //输出序列
void print_sequence()//打印输出序列
{
    int i;
    for (i=0;i<2*source.length();i++)
    {
        if (sequence[i]==1)
        {
            cout<<"i ";
        }
        else
        {
            cout<<"o ";
        }
    }
    cout<<endl;
}
void dfs(int x,int y,int stack_top,int sequence_top)//x指向source，y指向target,stack_top指向栈顶，sequence_top指向输出序列
{
    char tmp;
    if(x==source.length()+1)//x超出source长度，则返回
    {
        return;
    }
    if(y==target.length())//y达到target长度，则输出序列
    {
        print_sequence();
        return;
    }
    if(stack[stack_top]==target[y])//若相同
    {
        stack[stack_top+1]=source[x];//先继续入栈
        sequence[sequence_top]=1;
        dfs(x+1,y,stack_top+1,sequence_top+1);
        tmp=stack[stack_top];//再尝试出栈，这里注意stack[stack_top]的回溯
        sequence[sequence_top]=2;
        dfs(x,y+1,stack_top-1,sequence_top+1);
        stack[stack_top]=tmp;
    }
    else//不同则继续入栈
    {        
        stack[stack_top+1]=source[x];
        sequence[sequence_top]=1;
        dfs(x+1,y,stack_top+1,sequence_top+1);
    }
}
int main()
{
    while(cin>>source>>target)
    { 
        cout<<'['<<endl;
        if (source.length()==target.length())//长度相同才dfs
        {
            stack[0]=source[0];//先往栈里放一个数
            sequence[0]=1;
            dfs(1,0,0,1);
        }
        cout<<']'<<endl;
        source.clear();
        target.clear();
        stack.clear();
    }
    return 0;
}
