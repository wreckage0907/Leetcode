bool isGood(int* nums, int size){
    int res=0,sum=0,mc=0;
    for(int i=0;i<size;i++){
        sum+=nums[i];
        if(nums[i]>res){
            res=nums[i];
            mc=1;}
        else if (res==nums[i]) mc++;
    }
    return mc==2 && size == res+1 && sum-res-((res*(res+1))/2) == 0 ;

}