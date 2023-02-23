//Link: https://practice.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

void twoStacks :: push1(int x)
{
    top1++;
    arr[top1] = x;
}
void twoStacks ::push2(int x)
{
    top2--;
    arr[top2] = x;
}
int twoStacks ::pop1()
{
    if(top1 == -1)  return -1;
    return arr[top1--];
}
int twoStacks :: pop2()
{
    if(top2 == size)     return -1;
    return arr[top2++];
}
