

#include<iostream>
using namespace std;

int main()
{

int myage;
int votingage=18;

cout<<"enter your age: ";
cin>>myage;

if(myage>=votingage){

    cout<<"you are able to vote since your are above 18"<<'\n';
    
}
    else{ 
        cout<<"you arent able to vote since youre under 18";
        
}

int secondage;
cout<<"enter the second persons age for voting possibility:";

cin>>secondage;

if(secondage>=votingage){
    cout<<"second voter can vote"<<'\n';
    
}

else { cout<<"second voter cannot vote "<<'\n';
}

int numofvoters;

cout<<"enter number of voter : ";
cin>>numofvoters;

if (numofvoters>100) {
    cout<<"the president will be You since  xd "<<'\n';
}
else {
    cout<<"there wont be a president "<<'\n';
}
return 0;
}

