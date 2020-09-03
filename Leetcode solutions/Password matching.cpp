#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string StringChallenge(string password) {
  if (!((password.length() >= 7) && (password.length() <= 31))) { 
    return "false"; 
  } 
    int count = 0; 
    for (int i = 0; i <= 9; i++) { 
      string str1 = to_string(i); 
        if (password.find(str1) != std::string::npos) {
            count=1;
        }
    } 
    if (count == 0) { 
      return "false"; 
    } 
    count=0;
    for(int i=0;i<password.size();i++){
        if (password[i]=='@' || password[i]=='#' 
              || password[i]=='!' || password[i]=='~' 
              || password[i]=='$' || password[i]=='%' 
              || password[i]=='^' || password[i]=='&' 
              || password[i]=='*' || password[i]=='(' 
              || password[i]==')' || password[i]=='-' 
              || password[i]=='+' || password[i]=='/' 
              || password[i]==':' || password[i]=='.' 
              || password[i]==',' || password[i]=='<' 
              || password[i]=='>' || password[i]=='?' 
              || password[i]=='|') { 
             count=1;
        } 
    }
    if(count==0) return "false";
  
  
    count = 0; 
    for (int i = 65; i <= 90; i++) { 
      char c = (char)i; 
  
      string str1 =to_string(c); 
        if (password.find(str1) != std::string::npos) {
            count=1;
        }
    } 
    if (count == 0) { 
      return "false"; 
    } 

  count=0;
  transform(password.begin(), password.end(), password.begin(), ::tolower);
  string s1="password";
  int M = s1.length(); 
  int N = password.length(); 
  for (int i = 0; i <= N - M; i++) { 
    int j; 
    for (j = 0; j < M; j++) 
      if (password[i + j] != s1[j]) 
        break; 
  
      if (j == M) {
        count=1; 
        break;
      }
  } 
  if(count==1) return "false"; 
  return "true"; 

}

int main(void) { 
   
  // keep this function call here
  cout << StringChallenge("turkey90AAA=");
  return 0;
    
}
