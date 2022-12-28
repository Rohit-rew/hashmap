#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    unordered_map<string,int> mapObject;

    // insert method one
    pair<string,int> pair1 = make_pair("hello" , 177);
    mapObject.insert(pair1);

    // insert method two
    pair<string,int> pair2("value" , 23);
    mapObject.insert(pair2);

    // insert method three
    mapObject["items"] = 77;

    cout << mapObject.at("hello") <<endl;
    cout << mapObject.size() <<endl;

}