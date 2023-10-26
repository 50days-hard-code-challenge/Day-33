vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    queue<int>q1;
    queue<int>q2;
    set<int>v;
    int n=a.size();
    q1.push(a[n-1]);
    v.insert(q1.front());
    for(int i=n-2;i>=0;i--){
         int flag=0;
         while(!q1.empty()){
            if(q1.front()>a[i]){
              flag = 1;
            }
            q2.push(q1.front());
            q1.pop();
         }
         if(!flag){
             v.insert(a[i]);
         }
         while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
         }
         q1.push(a[i]);
    }
    vector<int>result;
    for(i:v){
        result.push_back(i);
    }
    return result;
    
}
