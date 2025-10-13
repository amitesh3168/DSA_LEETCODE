
class Solution {
public:
    int calPoints(vector<string>& operations) {
    stack<int>s1;
    for(string it :operations){
        if(it=="+"){
            int first = s1.top();
            s1.pop();
            int second = s1.top();
            s1.push(first);
            int final= first+second;
            s1.push(final);
        }else if (it =="D"){
            int sum = s1.top();
            sum=sum*2;
            s1.push(sum);
        }else if (it =="C"){
            s1.pop();
        }else {
            s1.push(stoi(it));
        }
    }
    int ans=0;
    while(!s1.empty()){
        ans+=s1.top();
        s1.pop();
    }
    return ans;
  }
};