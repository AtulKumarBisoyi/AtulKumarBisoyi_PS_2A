class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for(int num = left; num <= right; num++){
            bool selfDividing = true;
            int workNum = num;
            while(workNum){
                //n-th digit is 0 or n-th digit of "num" cannot divide "num"
                if(workNum%10==0 || num%(workNum%10)!=0){
                    selfDividing = false;
                    break;
                }
                //if workNum<10, there won't be next iteration
                workNum/=10;
            }
            if(selfDividing) result.push_back(num);
        }
        return result;
    }
};

