#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//Algorithems
//Containers
//FuntionS
//Iterator




//push and pop time complexity -O (log(n))
//top time complexity - O(1)


void explainVector()
{
    vector<int>v;

    v.push_back(1);
    v.emplace_back(2); // semiler to push_back

    vector< pair <int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back({1,2});



    vector<int>v(5,100);
    vector<int>v(5);


    vector<int>v1(5,20);
    vector<int>v2(v1);

    vector<int> :: iterator it = v.begin(); // v.begin=memory of 1st element
    it++;
    cout << *it << " ";


    it +=2;
    cout << *it << " ";


    vector<int> :: iterator it = v.end();
    vector<int> :: iterator it = v.rend();
    vector<int> :: iterator it = v.rbegin();



    cout << v[0] << " ";
    cout << v.back() << " ";



    for(vector<int>::iterator it=v.begin; it !=end() ; it++ )
    {
        cout << *(it) << " ";
    }



    for(auto it = v.begin(); it != v.end; it++)
    {
       cout << *(it) << " ";
    }



    for(auto it : v)
    {
        cout << it << " ";
    }


    //{10,20,12,23}
    v.erase(v.begin()+1); //{10,12,23}


    //{10,20,12,23,35}

     v.erase(v.begin()+2,v.begin()+4); //start is incluted ,end is not incluted {10,20,35}




     //insert funtion
     vector<int>v(2,100); //{100,100}
     v.insert(v.begin(),300); //{300,100,100}
     v.insert(v.begin()+1,2,10); //{300,10,10,100,100}



     vector<int> copy(2,50); // 50 50
     v.insert(v.begin(),copy.begin(),copy.end()); // 50,50,300,10,10,100,100


      //10,20
      cout << v.size();  //2
      v.pop_back();      //10

      // v1=10,20
      //v2=30,40
      v1.swap(v2);
      v.clear();
      cout << v.empty; // minimum of 1 elemest



}



void explainList()
{
    list<int>ls;

    ls.push_back(2);//2
    ls.emplace_back(4);//2,4

    ls.push_front(5);//5,2,4
    ls.emplace_front() //2,4

}




void explain_Deque()
{
    deque<int>dq;
    dq.push_back(1);//1
    dq.emplace_back(2);//1,2
    dq.push_front(4);//4,1,2
    dq.emplace_front(3);//3,4,1,2


    dq.pop_back()//3,4,1
    dq.pop_front()//4,1


    dq.back();
    dq.front();


}

//lifo-last in fast out
void explainStack()
{
    stack<int>st;
    st.push(1) //1
    st.push(2)//2,1
    st.push(3)//3,2,1
    st.push(3)//3,3,2,1
    st.emplace(5)//5,3,3,2,1


    cout << st.top();   //5 printed
    st.pop(); // 3,3,2,1
    cout << st.top();   //3 printed
    cout << st.size(); //4
    cout << st.empty();
    stack<int>st1,st2;
    st1.swap(st2);
}



//FIFO
void explainQueue()
{
    queue<int>q;
    q.push(1);//1
    q.push(2);//1,2
    q.emplace(4);//1,2,4


    q.back() +=5;//print 9
    cout<<q.front()//print 1
    q.pop(); // 2,9
    cout << q.front();//print 2


}


void explain_PQ()
{
    //MAX HEAp
    priority_queue<int>pq;
    pq.push(5);//5
    pq.push(2);//5,2
    pq.push(8);//8,5,2
    pq.emplace(10);//10,8,5,2


    cout << pq.top();//print 10
    pq.pop();//8,5,2
    cout << pq.top(); //print 8




    //MIN HEAP
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);//5
    pq.push(2);//2,5
    pq.push(8);//2,5,8
    pq.emplace(10);//2,5,8,10

    cout << pq.top();//print 2


}





//sorted and unique
void explainSet()
{
    set<int>st;
    st.insert(1);//1
    st.emplace(2);//1,2
    st.insert(2);//1,2
    st.insert(4);//1,2,4
    st.insert(3);//1,2,3,4




   // {1,2,3,4,5}
   auto it = st.find(3);

   // {1,2,3,4,5}
   auto it = st.find(6);//st.end()
   st.erase(5);//1,2,3,4


   int cnt = st.count(1);   //jodi 1 thake taile 1 otherwise 0

   //{1,2,3,4,5}
   auto it1 = st.find(2);
   auto it2 = st.find(4);
   st.erase(it1,it2);//1,4,5


   auto it =st.lower_bound(2);
   auto it =st.upper_bound(2);
}





void explainMultiSet()
{
    multiset<int>ms;
    ms.insert(1);//1
    ms.insert(1);//1,1
    ms.insert(1);//1,1,1



    ms.erase(1);//all 1 erased
    ms.erase(ms.find(1))//single one erage

    ms.erase(ms.find(1),ms.find(1)+2);


}






void explainUset()
{
    unorderd_set<int> st;

    //unique elements and (sorted or not sorted) anything.
    //all the operation allow but lower bound and upper bound operation are not allowed
    //time complexity O(1)

}


//key,value
//key is always unique and sorted order
void explainMap()
{
    map<int,int>mpp;
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;


    map[1]=2; //1,2
    map.emplace({3,1});
    map.insert({2,4});


    mpp[{2,3}] =10;

    for(auto it : mpp)
    {
        cout << it.first << " " <<it.second << end;

    }
    //[{1,2},{2,4},{3,1}]

    cout<<mpp[1]; //2
    cout <<mpp[5];//null

    auto it = mpp.find(3);
    cout << *(it).second;


    auto it =mpp.find(5);
    auto it =mpp.lower_bound(2);
    auto it =mpp.upper_bound(3);



}


void explainMultimpp()
{
    //same as map
}

void explainUnorderMap()
{

}


bool comp ( pair<int,int>p1, pair<int,int>p2)
{
   if(p1.second < p2.second) return true;
   if(p1.second > p2.second) return false;

   if(p1.first > p2.first) return true;
   return false;
}






void explainExtra()     //{1,5,3,2}
{
    sort(a,a+4);
    sort(v.begin(),v.end());


    sort(a+2,a+4);

    sort(a,a+n,greater<int>);


    pair<int,int> a[] = {{1,2},{2,1},{4,1}};

    //sort it according to second elements
    //if second element is same,then sort
    //it according to first element but in desending
    // {{4,1},{2,1},{1,2}};
     sort(a,a+n,comp);


     int num = 7;
     int cnt = _builtin_popcount();

     long long num =1657865786876;
      int cnt = _builtin_popcount();



      string s ="123";

     int maxi = max_element(a,a+n);

}




int main()
{


    return 0;
}
