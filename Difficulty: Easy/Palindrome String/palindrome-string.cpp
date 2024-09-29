//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string reverse(string S){
	    string result = "";
	    for(int i = S.length()-1; i>=0; i--){
	        result.push_back(S[i]);
	    }
	    return result;
	}
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string rString = reverse(S);
	    for(int i=0 ; i<S.length(); i++){
	        if(rString[i] != S[i]){
	            return 0;
	        }
	    }
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends