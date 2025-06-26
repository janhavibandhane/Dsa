#include <bits/stdc++.h>

using namespace std;

void count(int n){
    int cnt=0;
    while(n>0){
        cnt=cnt+1;  //thats why here 4 comes
        n=n/10; //7789 number will divide 4 time 778.9 and so on
    }
    cout<<cnt;
}
//1. rev number
void revNum(int n){
    int revnum=0;
    while(n>0){ //n=7789
        int lastDigit=n%10; //lastdigit=9 then lastdigit=8 
        n=n/10;
        revnum=(revnum*10)+lastDigit; //rev=(0*10)+9 rev=9
    }
    cout<<revnum; //9
}

//2.palndromNumber
void palndrom(int n){
    int ogNum=n;
    int revnum=0;
    while (n>0)
    {
        int lastDigit=n%10;
        revnum=(revnum*10)+lastDigit;
        n = n / 10;
    }
    cout<<"Number: "<<ogNum<<" REverse number: "<<revnum<<endl;
    if(revnum == ogNum){
            cout<<"Number is Palndrom";
        }else{
           cout<<"number is palndrom";
        }
}

//3. armstarong number
//if cube of numbers is equla to orignal num then it is armstarng
// 371 3^3+7^3+1^3=371
void armstrangnumber(int n){
    int ogNum=n;
    int sum=0;
    while (n>0)
    {
      int lastDigit=n%10;
      sum=sum+(lastDigit*lastDigit*lastDigit);
      n=n/10;
    }
    cout<<"Real number :-"<<ogNum<<" Armstrong number :- "<<sum<<endl;
    if(ogNum==sum){
        cout<<"Number is armstrong";
    }
    else{
        cout<<"number is not armstrong";
    }
    
}
// 4. print all divisons
void Divisors(int n){
   for(int i=1;i<=n;i++){
     if(n%i==0){
        cout<<i<<endl;
     }
   }
}
// 5.print factorial
void Factorial(int n){
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++){
      if(n%i==0){
        ls.push_back(i);
        if((n/i)!=i){
            ls.push_back(n/i);
        }
      }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) cout<<it<<" ";
}

//GCD means we took 2 num 2,4 and find common factors 1,2 and then bigger one is GCD here 2 is gcd
void GCD(int n1, int n2){
    int count=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            count=i;
        }
        
    }
    cout<<count;
}

//Euclidean algoritham
//GCS(N1,N2) == GCD(N1-N2,N2)


int main(){
    // count(7789); //4
    //revNum(7789); //9877
    //palndrom(121);
    // armstrangnumber(371);
    //Divisors(6);
    //Factorial(36);  //1 2 3 4 6 9 12 18 36 
    // GCD(6,36); //6
} 