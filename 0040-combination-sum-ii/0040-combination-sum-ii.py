class Solution:
    def solve(self, candidates: List[int],arr,result,idx,target):
        if(target==0):
            result.append(list(arr))
            return
        for i in range(idx,len(candidates)):
            if(i>idx and candidates[i-1]==candidates[i]):
                 continue
            if candidates[i]>target:
                 break
            arr.append(candidates[i])
            self.solve(candidates,arr,result,i+1,target-candidates[i])
            arr.pop()
            

    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        arr=[]
        result=[]
        self.solve(candidates,arr,result,0,target)
        return result