//ID:221405
//Name:Assatullaev Fayzulloh

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

class PeterJohn{
    int n,x;
    vector<int> v;
    public:
    void setvector(){
        cin >> n;
        for(int i=0; i<n ;i++){
        cin>>x;
        v.push_back(x);
    }
    }
    void peterAndJohn(){
    int peter=0, john=0, left=0, right=0;
    vector<int>::iterator it=v.begin();
    while(v.size()!=0){
        if(right>=left and v.size()!=0){
            if(*it > v[v.size()-1] or v.size()==1){
                peter+=*it;
                v.erase(it);
                right++;
            }else{
                peter+=v[v.size()-1];
                v.pop_back();
                right++;
            }
        }
        if(left<right and v.size()!=0){
            if(*it > v[v.size()-1] or v.size()==1){
                john+=*it;
                v.erase(it);
                left++;
            }else{
                john+=v[v.size()-1];
                v.pop_back();
                left++;
            }
        }
    }
    cout<<peter<<" "<<john<<endl;
}
};

int main(){
    PeterJohn pj;
    pj.setvector();
    pj.peterAndJohn();
    
    return 0;
}
