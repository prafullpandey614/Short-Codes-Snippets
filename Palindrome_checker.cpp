 bool isPalindrome(string digits){
        int cnt = 0 ;
        for(int i = 1; i <10;++i){ //mmodify the loop accordingly
            if((digits[i])&1) cnt++;
        }
        if(cnt>1) return 0;
        return 1;
    }
