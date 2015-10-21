//
//  main.cpp
//  PalindromeNumber
//
//  Created by 李佳 on 15/9/21.
//  Copyright © 2015年 LiJia. All rights reserved.
//

#include <iostream>

class Solution {
public:
    bool isPalindrome(int x)
    {
//        int orgX = x;
//        int reverseNum = x % 10;
//        x /= 10;
//        int tmpNum = 0;
//        while (x)
//        {
//            tmpNum = x % 10;
//            reverseNum = reverseNum * 10 + tmpNum;
//            x /= 10;
//        }
//        return reverseNum == orgX;
        return solution1(x);
    }
    
    bool solution1(int x)
    {
        int left = 0;
        int tmp = 0;
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        while (x > left)
        {
            tmp = x % 10;
            left = left * 10 + tmp;
            if (left == x)
                return true;
            x /= 10;
        }
        return x == left;
    }
    
};

int main(int argc, const char * argv[])
{
    Solution* so = new Solution;
    printf("%d",so->isPalindrome(1232321));
    delete so;
    return 0;
}
