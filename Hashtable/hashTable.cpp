#include <bits/stdc++.h>

using namespace std;

int MyHash(const int& key, const int&table_size){
    return key%table_size;
}


template<typename T>
class HashTable{
public:
    HashTable(int size=31){
        hash_table_.reserve(size);
        hash_table_.resize(size);
    }
    ~HashTable(){}
    bool Contains(const T& obj){
        const list<T>& slot = hash_table_[Hash(obj)];
        auto it = slot.cbegin();
        for(;it != slot.cend() && *it != obj ; it++);
        return it != cend();
    }

    bool Insert(const T& obj){
        if(Contain(obj))
            return false;
        hash_table_[Hash(obj)].push_front(obj);
        return true;
    }

    bool Remove(const T& obj){
        list<T>& slot = hash_table_[Hash(obj)];
        auto it = find(slot.begin(),slot.end(),obj);
        if(it == slot.end()){
            return false;
        }
        slot.erase(it);
        return true;

    }

    
private:
    vector<list<T>> hash_table_;
    int Hash(const T& obj)const{
        return MyHash(obj,hash_table_.size());
    }
};









int main(){
    HashTable <int> a(10);
    a.Insert(7);
    
    
}