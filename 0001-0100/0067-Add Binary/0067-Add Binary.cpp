class Solution {
  public:
    string addBinary(string a, string b) {
        string result;
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(int m=i;m>=0;m--){
            if(a[m]=='0'){
                a.pop_back();
            }
            else{
                break;
            }
        }
        for(int n=j;n>=0;n--){
            if(b[n]=='0'){
                b.pop_back();
            }
            else{
                break;
            }
        }
        i=a.size()-1;
        j=b.size()-1;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i--] - '0';
            }
            if (j >= 0) {
                sum += b[j--] - '0';
            }
           result += (sum % 2) ? '1' : '0';
            carry = sum / 2;
        }
        reverse(result.begin(), result.end());        
        return result;
    }
};
