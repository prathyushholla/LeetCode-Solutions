class Solution {
public:
    bool match(char a, char b){
        if(a=='(' && b==')'){
            return true;
        }
        if(a=='{' && b=='}'){
            return true;
        }
        if(a=='[' && b==']'){
            return true;
        }
        return false;
    }
    bool isValid(string s) {
        stack<char> stack;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                stack.push(s[i]);
            }
            else if(s[i] == ')'||s[i] =='}'||s[i] ==']'){
                if(stack.empty()){
                    return false;
                }
                else if(match(stack.top(),s[i])){
                    stack.pop();
                }
                else{
                    return false;
                }             
            }
        }
        return stack.empty(); 
    }
};
