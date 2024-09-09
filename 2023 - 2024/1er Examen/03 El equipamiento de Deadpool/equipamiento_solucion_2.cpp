#include <iostream>
#include <map>
using namespace std;

int n, amount;
string action;
char weapon;
map<char, int> equipment;


int main()
{
  cin>>n;
  for (int i = 0; i < n; i++){
    cin>>action>>weapon;
    
    if (action == "add"){
      cin>>amount;
      equipment[weapon] += amount;
    }else if(action == "remove"){
      cin>>amount;
      if (equipment[weapon] < amount){
        equipment[weapon] = 0;
      }else{
        equipment[weapon] -= amount;
      }
      
      
    }else if(action == "query"){
      cout<<equipment[weapon]<<endl;
    }
    
  }
  return 0;
}