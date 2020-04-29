class FirstUnique {
    map<int, int> occur;
    queue<int> q;
public:
    FirstUnique(vector<int>& nums) {
        for(int x : nums){
            add(x);
        }
    }
    
    int showFirstUnique() {
        while(!q.empty() && occur[q.front()] >= 2){
            q.pop();
        }
        if(q.empty()){
            return -1;
        }
        return q.front();
    }
    
    void add(int value) {
        occur[value]++;
        q.push(value);
    }
};

/**
 * Your FirstUnique object will be instantiated and called as such:
 * FirstUnique* obj = new FirstUnique(nums);
 * int param_1 = obj->showFirstUnique();
 * obj->add(value);
 */