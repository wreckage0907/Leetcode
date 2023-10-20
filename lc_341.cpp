#pragma GCC optimize('O3')
class NestedIterator{
public:
    deque<int> n;
    void flatten(const std::vector<NestedInteger>& nestedList) {
        for (const NestedInteger& ni : nestedList) {
            if (ni.isInteger()) {
                n.push_back(ni.getInteger());
            } else {
                flatten(ni.getList());
            }
        }
    }
    NestedIterator(vector<NestedInteger> &nestedList) {
        flatten(nestedList);       
    }
    
    int next() {
        int val = n.front();
        n.pop_front();
        return val;
    }
    
    bool hasNext() {
        return !n.empty();
    }
};