#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string BipartiteMatching(string strArr[], int arrLength) {
  multimap<char,char>edges;
  // code goes here
  vector<char>from_list;
  vector<char>to_list;  
  vector<char>gone;
  bool is_link = false;
  for(int i=0;i<arrLength;++i){
    cout<< "node: "  << strArr[i] << endl;
    edges.insert(std::make_pair(strArr[i].at(0),strArr[i].at(strArr[i].size()-1)));  
      if(find(from_list.begin(),from_list.end(),strArr[i].at(0)) == from_list.end()){
        from_list.push_back(strArr[i].at(0));
      }
      if(find(to_list.begin(),to_list.end(),strArr[i].at(strArr[i].size()-1)) == to_list.end()){
        to_list.push_back(strArr[i].at(strArr[i].size()-1));
      }
    }

  //for(auto fr:from_list){
    //cout<< "from: "  << fr << endl;
  //}
  //for(auto to:to_list){
    //cout<< "to: "  << to << endl;
  //}

  for(auto miter:edges){
    cout<< "from: "  << miter.first << " to: "  << miter.second << endl; 
    gone.push_back(miter.second);
    auto it =find(to_list.begin(),to_list.end(),miter.second);
    if(it!=to_list.end()){
      cout<< "There: " << *it << endl;
      to_list.erase(it);
      }
    }


  return strArr[0];

}

// keep this function call here
int main(void) { 
   
  string A[] = coderbyteInternalStdinFunction(stdin);
  int arrLength = sizeof(A) / sizeof(*A);
  cout << BipartiteMatching(A, arrLength);
  return 0;
    
}
