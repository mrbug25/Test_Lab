#include<bits/stdc++.h>
using namespace std;

int prec(char c){

    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
    
}

void infixToPostfix(string s){

    stack < char > st;
    string res;

    for(int i = 0; i < s.length(); i++){
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9'))
            res += c;
        else if( c == '(')
            st.push('(');
        
        else if(c == ')'){
            while( st.top() != '('){
                res += st.top();
                st.pop();
            }
        }

        else{
            while((!st.empty() ) && ( prec(s[i]) <= prec(st.top()))){
                res += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while(!st.empty()){
        res+= st.top();
        st.pop();
    }

    cout<<res<<endl;
}
int main(){

    string exp;

    cout<<"Enter infix expression :\n";
    cin>>exp;

    infixToPostfix(exp);

    return 0;
}