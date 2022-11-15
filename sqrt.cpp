// Online C++ compiler to run C++ program online
#include <iostream>
double morePrecesion(int x, int tempSol,int precesion){
        double factor=1,ans=tempSol;
        for(int i=0;i<precesion;i++){
            factor=factor/10;
            for(double j=ans;j*j<x;j+=factor){
                ans=j;
            }
        }
        return ans;
    }
    double mySqrt(int x) {
       long long int s=0,e=x,root=0;
        while(s<=e){
           long long int mid=s+(e-s)/2;
            if(mid*mid<=x){
                root=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        double actualRoot=morePrecesion(x,root,3);
        //cout<<"actualRoot= "<<actualRoot<<endl;
        return actualRoot;
    }
int main() {
    // Write C++ code here
    std::cout << "Hello world!"<<mySqrt(100000);

    return 0;
}