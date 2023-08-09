class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int> s;
        vector <int> v;
        int n=asteroids.size(), i=0;
        while(i<n){
            if(s.empty() || asteroids[i]>0){
                s.push(asteroids[i]);
            }
            else{
                while(!s.empty() && s.top()>0 && s.top()<-asteroids[i]){
                    s.pop();
                }
                if(s.empty() || s.top()<0){
                    s.push(asteroids[i]);
                }
                else if(s.top()==-asteroids[i]){
                    s.pop();
                }
            }
            i++;
        }
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};