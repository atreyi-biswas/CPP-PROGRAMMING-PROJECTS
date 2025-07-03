#include<iostream>
#include<cmath>
#include<windows.h>
#include<vector>
#include<string>


using namespace std;

void show_calculator(){

    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"---                        SCIENTIFIC                           ---"<<endl;
    cout<<"---                        CALCULATOR                           ---"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         +            |          -          |          *         -"<<endl;
    cout<<"-        ADD           |       SUBTRACT      |       MULTIPLY     -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         /            |          m          |          L         -"<<endl;
    cout<<"-       DIVIDE         |         MOD         |         LOG        -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         S            |          C          |          P         -"<<endl;
    cout<<"-       SQUARE         |        CUBE         |        POWER       -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         s            |          c          |          t         -"<<endl;
    cout<<"-        SIN           |         COS         |         TAN        -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         r            |          a          |          .         -"<<endl;
    cout<<"-    SQUARE ROOT       |       ANY ROOT      |       RESTART      -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
   

}

void display_output(double ans){

    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"---                               ////////////////////////////  ---"<<endl;
    cout<<"---      CURRENT OUTPUT           |          "<<ans<<"               |  ---"<<endl;
    cout<<"---                               |                          |  ---"<<endl;
    cout<<"---                               ////////////////////////////  ---"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         +            |          -          |          *         -"<<endl;
    cout<<"-        ADD           |       SUBTRACT      |       MULTIPLY     -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         /            |          m          |          L         -"<<endl;
    cout<<"-       DIVIDE         |         MOD         |         LOG        -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         S            |          C          |          P         -"<<endl;
    cout<<"-       SQUARE         |        CUBE         |        POWER       -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         s            |          c          |          t         -"<<endl;
    cout<<"-        SIN           |         COS         |         TAN        -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-         r            |          a          |          .         -"<<endl;
    cout<<"-    SQUARE ROOT       |       ANY ROOT      |       RESTART      -"<<endl;
    cout<<"-                      |                     |                    -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
   

}



///////////////////////////////////////////////////////////////////////////////////////////////////////



float add_numbers(vector<float>&a, float n){
    
    float sum=0;

    for(int i=0; i<=n-1; i++){
        sum+=a[i];
        
    }
    
    return sum;
    

}

float sub_numbers(vector<float>&a, float n){

    float sub=a[0];

    for(int i=1; i<=n-1; i++){
        sub-=a[i];
        
    }
    
    return sub;
    

}

float mul_numbers(vector<float>&a, float n){
    
    float mul=1;

    for(int i=0; i<=n-1; i++){
        mul*=a[i];
        
    }
    
    return mul;
    

}

float div_numbers(float n1, float n2){
    
    float div=n1/n2;

    return div;
    

}

float mod_numbers(int n1, int n2){
    
    float mod=n1%n2;

    return mod;
    

}

float log10_numbers(float n){
    
    float log=log10(n);

    return log;
    

}

float log2_numbers(float n){
    
    float log=log2_numbers(n);

    return log;
    

}

float loge_numbers(float n){
    
    float loge=log(n);

    return loge;
    

}

float sq_numbers(int n){
    
    float sq=sqrt(n);

    return sq;
    

}

float cu_numbers(int n){
    
    float cu = n*n*n;

    return cu;
    

}

float pow_numbers(float n, float p){
    
    float pow = 1;

    if(p==0) pow=1;
    else{
        for(int i=0; i<p; i++){
            pow*=n;
        }
    }

    return pow;
    

}

float sinr_numbers(float n){
    
    float si = sin(n);

    return si;

}

float sind_numbers(float n){
    
    float si = sin(n*(M_PI/180));

    return si;

}

float cosr_numbers(float n){
    
    float co = cos(n);

    return co;

}

float cosd_numbers(float n){
    
    float co = cos(n*(M_PI/180));

    return co;

}

float tanr_numbers(float n){
    
    float ta = tan(n);

    return ta;

}

float tand_numbers(float n){
    
    float ta = tan(n*(M_PI/180));

    return ta;

}

float sqr_numbers(float n){
    
    float sq = sqrt(n);

    return sq;

}

float ar_numbers(float n, float r){
    
    float ar = pow(n, 1.0/r); // as root of any number is base^(1/power)

    return ar;

}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////




int main(){

    show_calculator();
    string o; //operation

    cout<<"Enter an operation: ";
    cin>>o;

    if(o == "+"){ //ADDITION

        vector<float>a; //array of elements for addition
        int n; //number of numbers to add

        cout<<"How many numbers do you want to add?: ";
        cin>>n;
        
        cout<<"Enter Elements to Add: ";
        for(int i=0; i<=n-1; i++){
            float q;
            cin>>q;
            a.push_back(q);
        }

        float ans = add_numbers(a,n);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl;
    }

    else if(o == "-"){ //SUBTRACTION

        vector<float>a; //array of elements for subtraction
        int n; //number of numbers to subtract

        cout<<"How many numbers do you want to subtract?: ";
        cin>>n;
        
        cout<<"Enter Elements to Subtract: ";
        for(int i=0; i<=n-1; i++){
            float q;
            cin>>q;
            a.push_back(q);
        }

        float ans = sub_numbers(a,n);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "*"){ //MULTIPLY

        vector<float>a; //array of elements for multiplication
        int n; //number of numbers to multiply

        cout<<"How many numbers do you want to multiply?: ";
        cin>>n;
        
        cout<<"Enter Elements to Multiply: ";
        for(int i=0; i<=n-1; i++){
            float q;
            cin>>q;
            a.push_back(q);
        }

        float ans = mul_numbers(a,n);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 

    }

    else if(o == "/"){ //DIVIDE

        float n1;
        float n2; // 2 numbers to divide
        
        cout<<"Enter TWO NUMBERS to Divide: ";
        cin>>n1>>n2;
        
        float ans = div_numbers(n1,n2);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "m"){ //MODULUS

        int n1;
        int n2; // finding mod of 2 numbers
        
        cout<<"Enter TWO NUMBERS to find their Mod: ";
        cin>>n1>>n2;
        
        float ans = mod_numbers(n1,n2);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "L"){ //LOGARITHM

        float n;
        int c;
        cout<<"Choose BASE: 10, 2 or 3(e)";
        cin>>c;
        if(c == 10){
            cout<<"Enter number to find their Log(Base 10): ";
            cin>>n;
        
            int ans = log10_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl; 
        }

        if(c == 2){
            cout<<"Enter number to find their Log(Base 2): ";
            cin>>n;
        
            int ans = log2_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl; 
        }

        if(c == 3){
            cout<<"Enter number to find their Log(Base e): ";
            cin>>n;
        
            int ans = loge_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl; 
        }
    }

    else if(o == "S"){ //SQUARE

        float n;
        
        cout<<"Enter number to find their Square: ";
        cin>>n;
        
        float ans = sq_numbers(n);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl;
         
    }

    else if(o == "C"){ //CUBE

        float n;
        
        cout<<"Enter number to find their Cube: ";
        cin>>n;
        
        float ans = cu_numbers(n);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "P"){ //POWER

        float n; //number
        float p; //power
        
        cout<<"Enter number : ";
        cin>>n;
        cout<<"Enter power : ";
        cin>>p;
        
        
        float ans = pow_numbers(n,p);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "s"){ //SINE

        float n; //number
        
        char c; //charcter
        
        
        cout<<"Enter number : ";
        cin>>n;
        cout<<"r(radian) or d(degree) : ";
        cin>>c;
        
        if(c == 'r'){ //radian

            float ans = sinr_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl;
        }
        
        else if(c == 'd'){ //degree

            float ans = sind_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl;
        } 
    }

    else if(o == "c"){ //COSINE

        float n; //number
        char c; //charcter
        
        
        cout<<"Enter number : ";
        cin>>n;
        cout<<"r(radian) or d(degree) : ";
        cin>>c;
        
        if(c == 'r'){ //radian

            float ans = cosr_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl;
        }
        
        else if(c == 'd'){ //degree

            float ans = cosd_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl;
        } 
    }

    else if(o == "t"){ //TANGENT

        float n; //number
        char c; //charcter
        
        
        cout<<"Enter number : ";
        cin>>n;
        cout<<"r(radian) or d(degree) : ";
        cin>>c;
        
        if(c == 'r'){ //radian

            float ans = tanr_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl;
        }
        
        else if(c == 'd'){ //degree

            float ans = tand_numbers(n);
            cout<<"The result is "<<ans;
            cout<<endl;

            display_output(ans);
            cout<<endl;
        } 
    }

    else if(o == "r"){ //SQUARE ROOT

        float n; //number
        
        cout<<"Enter number : ";
        cin>>n;
        
        float ans = sqr_numbers(n);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "a"){ //ANY ROOT

        float n; //number
        float r; //root
        
        cout<<"Enter number : ";
        cin>>n;
        cout<<"Enter it's root : ";
        cin>>r;
        
        float ans = ar_numbers(n,r);
        cout<<"The result is "<<ans;
        cout<<endl;

        display_output(ans);
        cout<<endl; 
    }

    else if(o == "."){
        show_calculator();
        string o; //operation

        cout<<"Enter an operation: ";
        cin>>o;
    }
}