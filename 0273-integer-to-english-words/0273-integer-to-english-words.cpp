class Solution {
          
        
public:
    string numberToWords(int num) {
        if(num==0) return "Zero";
        return work(num).substr(1);
    }
    
    string work(int n){
        string less20[20]={"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
        string tens[10]= {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
        
        if(n>=1000000000) return work(n/1000000000)+" Billion"+work(n%1000000000);
        if(n>=1000000) return work(n/1000000)+" Million"+work(n%1000000);
        if(n>=1000) return work(n/1000)+" Thousand"+work(n%1000);
        if(n>=100) return work(n/100)+" Hundred"+work(n%100);
        if(n>=20) {
            // cout<<n<<n/10<<endl;
            return " "+tens[n/10 - 2]+work(n%10);
        }
        if(n>=1) return " "+less20[n];
        return "";
    }
};