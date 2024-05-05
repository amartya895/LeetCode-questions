class MyHashMap {
public:
    vector<int> mpp;
    MyHashMap() {
        mpp.resize(1000000+10 , -1);
    }
    
    void put(int key, int value) {
        mpp[key] = value;
    }
    
    int get(int key) {
        return mpp[key];
    }
    
    void remove(int key) {
        mpp[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */