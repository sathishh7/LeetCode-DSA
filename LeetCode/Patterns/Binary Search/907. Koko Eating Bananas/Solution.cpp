class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int max = piles[0];

    for (int i = 0; i < piles.size(); i++) {
        if (max < piles[i]) {
            max = piles[i];
        }
    }

    int min_eat = max;
    int low=1;
    int high=max;

    while(low<=high) {
        int mid=(low+high)/2;
        long long hour = 0;
        for (int j = 0; j < piles.size(); j++) {
        double l=piles[j]/(double)mid;
        hour+=ceil(l);
          
        }
        if (hour > h) {
            low=mid+1;
        } else {
            if (min_eat > mid) {
                min_eat = mid;
            }
            high=mid-1;
        }
    }

    return min_eat;
}
};