class Solution {
public:
    int atoi(const char *str) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if( !str || *str == '\0' ) return 0;
        
        while( *str != '\0' && *str == ' ' ) {
            ++str;
        };
        
        bool negtiveSign = false;
        if( *str != '\0' && *str == '-' ) {
            negtiveSign = true;
            ++str;
        } else if( *str != '\0' && *str == '+' ) {
            ++str;
        }
        
        if( *str != '\0' && ('9' < *str || *str < '0') ) {
            return 0;
        }
        
        int num = 0;
        while( *str != '\0' && '0' <= *str && *str <= '9' ) {
            num += num*10 + *str - '0';
            ++str;
        }
        
        if( negtiveSign ) {
            num *= -1;
        }
        
        return num;
    }
};