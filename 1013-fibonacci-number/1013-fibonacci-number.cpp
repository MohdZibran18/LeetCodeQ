class Solution {
public:
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    return fibo(num-1)+fibo(num-2);
}
    int fib(int n) {
        int sum=fibo(n);
        return sum;
    }
};