#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(char* S)
{
  if (S[0] == '\0')
    return;
  if (S[0] == S[1]) {
    int i = 0;
    while (S[i] != '\0') {
      S[i] = S[i + 1];
      i++;
    }
    removeDuplicates(S);
  }
  removeDuplicates(S + 1);
}
int main()
{
  char S1[10];
  cin>>S1;
  removeDuplicates(S1);
  cout << S1 << endl;
  return 0;
}