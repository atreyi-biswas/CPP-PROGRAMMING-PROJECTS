#include<iostream>
#include<cmath>
#include<windows.h>
#include<vector>
#include<string>


using namespace std;

void show_calculator(){

    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"---                            CGPA                             ---"<<endl;
    cout<<"---                         CALCULATOR                          ---"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-                     **CGPA OUT OF 10.0 ONLY**                   -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-                 C              |               T                -"<<endl;
    cout<<"-               CUSTOM           |           OUT OF 100           -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

}

void display_calculator(double ans){

    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"---                            "<<ans<<" CGPA                            ---"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"---                                                             ---"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-                     **CGPA OUT OF 10.0 ONLY**                   -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"-                 C              |               T                -"<<endl;
    cout<<"-               CUSTOM           |           OUT OF 100           -"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main(){
    char C;
    char T;
    char c;

    show_calculator();

    cin>>c;

    if(c=='C'){
        int n; // total credits
        int s; // number of subjects
        vector<float> a; // each credit
        cout<<"Enter total credits: ";
        cin>>n;
        float ans;
        cout<<"Enter number of subjects: ";
        cin>>s;
        cout<<"Enter each subject credits: ";
       

        for(int i=0; i<s; i++){
            int q;
            cin>>q;
            a.push_back(q);
        }

        float sum=0;
        for(int i=0; i<s; i++){
            sum+=a[i];
        }
        float avg = (sum/(n*s));

        ans = avg;

        cout<<"You got "<<ans<<"CGPA!";
        display_calculator(ans);

    }

    else if(c=='T'){
        int s; // number of subjects
        vector<float> a; // each credit
        float ans;

        cout<<"Enter number of subjects: ";
        cin>>s;
        cout<<"Enter each subject marks: ";
       

        for(int i=0; i<s; i++){
            int q;
            cin>>q;
            a.push_back(q);
        }

        float sum=0;
        for(int i=0; i<s; i++){
            sum+=a[i];
        }
        float avg = (sum/s);

        ans = avg;

        cout<<"You got "<<ans<<"CGPA!";
        display_calculator(ans);

    }

    
}
