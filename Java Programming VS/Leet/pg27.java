class pg27{
    public int removeElement(int[] nums, int val) {
        int a=nums.length-1;
        for(int i=0;i<nums.length;++i){
            if(nums[i]==val){
                for(int j=i;j<a;++j){
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
            --a;
            }
        }
        System.out.println(a);
        return ((int)Math.abs(a));       
    }
}