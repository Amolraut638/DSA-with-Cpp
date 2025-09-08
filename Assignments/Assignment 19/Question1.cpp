#include<iostream>
#include<string.h>
using namespace std;
class Game
{
    private:
        int score[5];
    public:
        void setScore(int round, int score)
        {
            this->score[round-1]=score; //index 0 se start hota hai isliye round-1 kiya
        }
        int getScore(int round)
        {
            return score[round-1]; //round 1 hoga mtlb 0 index pe ki value milegi
        }
};

class GameResult : public Game
{
    private:
        int result[5];
    public:
        static const int WIN=2, LOOSE=0, DRAW=1;
        void setResult(int round,int result)
        {
            this->result[round-1]=result;
        }
        int getResul(int round)
        {
            return result[round-1];
        }
        void finalResult()
        {
            int scoreSum=0, resultSum=0;
            for(int i=0; i<=4; i++)
            {
                resultSum = resultSum + result[i];
                scoreSum = scoreSum + getScore(i+1); //i ki values 0 se start ho rhi hain to i+1
            }
            cout<<"\nTotal score:"<<scoreSum;
            cout<<"\nTotal result points:"<<resultSum;
        }
};

class Actor
{
    private:
        char name[30];
        int age;
    public:
        void setName(char n[])
        {
            strcpy(name,n);
        }
        void setAge(int a)
        {
            age=a;
        }
        char* getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
};

class TVActor : virtual public Actor //AllscreenActor class me diamont problem ho raha tha isliye idhar virtual keyword likhna pda
{
    private:
        int tvProjectCount;
    public:
        void setTvProjectCount(int n)
        {
            tvProjectCount=n;
        }
        int getTvProjectCount()
        {
            return tvProjectCount;
        }
        void setTvActor(char n[], int a, int pcount)
        {
            setName(n);
            setAge(a);
            setTvProjectCount(pcount);
        }
        void ShowActor()
        {
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<getTvProjectCount()<<endl;
        }
};

class MovieActor : virtual public Actor
{
    private:
        int MovieProjectCount;
    public:
        void setMovieProjectCount(int n)
        {
            MovieProjectCount=n;
        }
        int getMovieProjectCount()
        {
            return MovieProjectCount;
        }
        void setTvActor(char n[], int a, int pcount)
        {
            setName(n);
            setAge(a);
            setMovieProjectCount(pcount);
        }
        void ShowActor()
        {
            cout<<endl;
            cout<<getName()<<" "<<getAge()<<" "<<getMovieProjectCount()<<endl;
        }
};

class AllScreenActor : public TVActor ,public MovieActor
{
    public:
        void setActorData(char n[], int a, int tvProject, int movieProject)
        {
            setName(n);
            setAge(a);
            setTvProjectCount(tvProject);
            setMovieProjectCount(movieProject);
        }
        void showActorData()
        {
            cout<<endl;
            cout<<getName()<<" ";
            cout<<getAge()<<" ";
            cout<<getTvProjectCount()<<" ";
            cout<<getMovieProjectCount()<<" ";
        }
};