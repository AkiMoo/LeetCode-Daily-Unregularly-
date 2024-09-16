class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int ans;
        int clockwise = 0, anticlockwise = 0;
        int arr[3] = {0}, j = 0, n = distance.size();
        for(int i = 0;i<n;i++){
            if(i==start||i==destination){
                j++;
            }
            arr[j]+=distance[i];
        }
        return min(arr[1],arr[2]+arr[0]);
    }
};
