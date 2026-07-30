// class Solution {
// public:
//     void moveZeroes(vector<int>& arr) {
//         int i=0,j=1;
//         int n = arr.size();
//         while(i<n && j<n){
//             if(arr[i]==0 && arr[j]==0){
//                 j++;
//             }else if(arr[i]==0 && arr[j]!=0){
//                 arr[i]=arr[j];
//                 arr[j]=0;
//                 i++;
//                 j++;
//             }else{
//                 i++;
//                 j++;
//             }

//         }
//     }
// };


// -------------2nd sol

class Solution {
public:
    void moveZeroes(vector<int>& v) {

        //  -----------1st-------- 

        // int cnt = 0;
        // int n = arr.size();
        // queue<int>q;
        // for(int i = 0; i<n; i++){
        //     if(arr[i] == 0){
        //         cnt++;
        //     }else{
        //         q.push(arr[i]);
        //     }
        // }
        // int i = 0;
        // while(!q.empty()){
        //     arr[i++] = q.front();
        //     q.pop();
        // }
        // for(int j = i; j<n; j++){
        //     arr[j] = 0;
        // }

        // vector<int>v(arr.size(), 0);
        // int j = 0;
        // for(int i = 0; i<arr.size(); i++){
        //     if(arr[i]!=0){
        //         v[j++] = arr[i];
        //     }
        // }
        // for(int i=0; i<v.size(); i++){
        //     arr[i] = v[i];
        // }

        // ----NEW TRY 
    
            int i = 0;
            int j = i+1;
            int n = v.size();
            while(j<n){
                if(v[i] == 0 && v[j]!=0){
                    swap(v[i],v[j]);
                    j++;
                    i++;
                }
                else if(v[i]!=0 && v[j]==0){
                    i = j;
                    j++;
                }
                else{
                    j++;
                }
            }

    }
};