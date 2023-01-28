//Link: https://practice.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1

class Solution
{
    public:
    static bool cmp(pair<double, Item> a, pair<double, Item> b){
        return a.first > b.first;
    }
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector <pair<double, Item> > v;
        for(int i = 0; i<n; i++){
            double perUnitValue = (1.0 * arr[i].value)/arr[i].weight;
            pair<double, Item> p = make_pair(perUnitValue, arr[i]);
            v.push_back(p);
        }
        
        sort(v.begin(), v.end(), cmp);
        
        double totalValue = 0;
        for(int i = 0; i<n; i++){
            
            if(v[i].second.weight > W){
                //We will not be able to take the full item in  our knapsack
                //We have to partially add the item in our knapsack accoeding to the remaining capacity
                totalValue += W*v[i].first;
                W = 0;
            }  
            else {
                //We will be able to include the total item in our knapsack
                totalValue += v[i].second.value;
                W = W - v[i].second.weight;
            }
        }
        return totalValue;
    }
};
