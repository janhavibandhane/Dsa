#include <iostream>
#include <vector>

using namespace std;

// pairs
void pairs(){
    pair<int,int> a={1,3};
    cout<< a.first;
    
    pair<int,pair<int,int>> p={1,{2,3}};
    cout<<p.first<<p.second.first<<p.second.second;

}
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);  //add 2 in back

    vector<pair<int, int>> c;
    c.push_back({1, 2});           // creates a pair, then pushes
    c.emplace_back(3, 4);          // constructs pair(3, 4) in-place
}

//Iterator nothing but points to the memory where elemtn liing [10,20] index 0=10
void Iterators(){
    vector<int>::iterator it= d.begin();
    it++;
    cout<<*(it)<<" ";


}
int main(){
    pairs();
}