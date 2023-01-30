// Virtual Functions Example + Creation Rules

#include <iostream>
#include <cstring>
using namespace std;

class CWH {
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){cout<<"Bogus Code"<<endl;}
};

class CWH_video : public CWH{
    float video_length;
    public:
        CWH_video(string s, float r, float vl): CWH(s, r){
            video_length = vl;
        }
        void display(){
            cout<<"This is an amazing video of title "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Video Lenght : "<<video_length<<" minutes"<<endl;
        }
};

class CWH_text : public CWH{
    int words;
    public:
        CWH_text(string s, float r, int wc): CWH(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing video of title "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars"<<endl;
            cout<<"Words Count : "<<words<<endl;
        }
};


int main()
{
    string title = "Django Tutorial";
    int words = 455;
    float rating = 4.23, vlen = 8.34;

    CWH_video django_video(title, rating, vlen);
    // django_video.display();

    CWH_text django_text(title, rating, words);
    // django_text.display();

    // CWH * djVideo = &django_video;
    // CWH * djtext = &django_text;

    // djVideo->display();
    // djtext->display();

    CWH *ptr[2];
    
    ptr[0] = &django_video;
    ptr[1] = &django_text;

    ptr[0]->display();
    ptr[1]->display();


    return 0;
}