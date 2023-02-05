//Link: https://practice.geeksforgeeks.org/problems/max-min/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
   public:
    int findSum(int A[], int N)
    {
        int a, b;
    	sort(A, A + N);
    	for(int i = 0; i<N; i++){
    	    a = A[0];
    	    b = A[N - 1];
    	}
    	int sum = (a + b);
    	return sum;
    }

};
