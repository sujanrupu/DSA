//Link: https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

bool findPair(int arr[], int size, int n){
    sort(arr, arr + size);
    int i = 0, j = 1;
    while(i<size && j<size){
        if(i != j && (arr[i]-arr[j]==n || arr[j]-arr[i]==n))    return true;
        else if (arr[j]-arr[i] < n)  j++;
        else    i++;
    }
    return false;
}
