#define maxNUM 100


int* twoOutOfThree(int* nums1, int nums1Size, int* nums2, int nums2Size, int* nums3, int nums3Size, int* returnSize){
    char all_list[maxNUM+1]={0};
    for(int i =0;i<nums1Size;i++)
    {
        all_list[nums1[i]]|=1;
    }
    for(int i = 0; i<nums2Size;i++)
    {
        all_list[nums2[i]]|=2;
    }
    for(int i = 0; i<nums3Size;i++)
    {
        all_list[nums3[i]]|=4;
    }
    int j=0;
    int *res = (int *)malloc(sizeof(int)*maxNUM);
    for(int i=1;i<=maxNUM;i++)
    {
        if(all_list[i]==3||all_list[i]>4)
        {
            res[j++] = i;
        }
    }
    *returnSize = j;
    return res;
}