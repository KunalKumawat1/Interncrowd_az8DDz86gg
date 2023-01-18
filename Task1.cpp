#include <bits/stdc++.h>
using namespace std;
int main() {
    cout<<"Enter the number of entries"<<endl;
    int n;
    cin>>n;
    cout<<"Note : 1) Please don't write same name for different person !!!"<<endl<<"2) Don't give any space between the 1st name and the last name"<<endl;
    map<string, string> map;
    for(int i=0;i<n;i++){
        cout<<"Enter your name : ";
        string name;
        cin>>name;
        cout<<"Enter your date of birth (dd/mm/yy) : ";
        string dob;
        cin>>dob;
        map[name] = dob;
    }

    int choice=5,num;
    while(choice!=0){
    cout<<"Select an option - "<<endl;
    cout<<"0 - Exit"<<endl;
    cout<<"1 - Print all values"<<endl;
    cout<<"2 - Update date of birth by name"<<endl;
    cout<<"3 - Find date of birth by name"<<endl;
    cout<<"4 - Print monthly date of birth"<<endl;
    cout<<"5 - Add more entries"<<endl;
    cin>>num;
    choice  = num;
    if(choice==1){
        for(const auto &[key, value]: map)
        {
            cout<<key<<" : "<<value<<endl;
        }    
    }else if(choice==2){
        string str,newdob;
        cout<<"Enter your name : ";
        cin>>str;
        cout<<"Enter your new date of birth (dd/mm/yy) : ";
        cin>>newdob;
        map[str] = newdob;
    }else if(choice==3){
        string str;
        cout<<"Enter your name : ";
        cin>>str;
        cout<<map[str]<<endl;
    }else if(choice==4){
        string month;
        cout<<"Enter month value : ";
        cin>>month;
        for(const auto &[key, value]: map)
        {
            string str = value;
            string check = "";
            check+=str[3];
            check+=str[4];
            if(check==month){
                cout<<key<<" : "<<value<<endl;
            }
        } 
    }else if(choice==5){
        cout<<"Enter the number of entries"<<endl;
        int number;
        cin>>number;
        for(int i=0;i<number;i++){
            cout<<"Enter your name : ";
            string addname;
            cin>>addname;
            cout<<"Enter your date of birth (dd/mm/yy) : ";
            string adddob;
            cin>>adddob;
            map[addname] = adddob;
        }
    }
    else if(choice==0){
        cout<<"Thank You !!!"<<endl;
    }
    else{
        cout<<"Wrong option selected"<<endl;
    }
    }
    
    return 0;
}
