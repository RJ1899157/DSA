#include<unordered_set>
#include <bits/stdc++.h>
using namespace std;

void LIST(){

    vector <int> v; //dynamic array NO need to declare size of array

    v.push_back(10); //add element at the end of vector
    v.emplace_back(20); //add element at the end of vector (faster than push_back)

    vector <int> v1(5, 10); //vector of size 5 with all elements as 10

    vector <int> v2(v1); //copy constructor

    vector <int> v3(v1.begin(), v1.end()); //copy constructor using iterators

    vector <int> v4(5); //vector of size 5 with default values (0 for int)

    v.size(); //returns the number of elements in the vector

    v[0]; //access element at index 0 (no bounds checking)

    vector <int> :: iterator it =
    v.begin(); //returns an iterator to the first element of the vector
    it++; //moves the iterator to the next element
    v.end(); //returns an iterator to the element past the last element of the vector
    it--; //moves the iterator to the previous element

    v.back(); //returns the last element of the vector
    v.pop_back(); //remove the last element of the vector
    v.resize(10); //resize the vector to size 10 (if new size is greater than current size, new elements are initialized with default values)

    //use auto keyword to declare iterator 
    //use auto for declaring variables to avoid type declaration

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " "; //dereference the iterator to get the value
    }

    for (auto it : v) { //range-based for loop
        cout << it << " "; //it is a copy of the element in the vector
    }

    v.erase(v.begin()); //erase the first element of the vector
    v.erase(v.begin(), v.begin() + 2); //erase the first two elements of the vector. Last element of the range is not included.

    v.insert(v.begin(), 5); //insert 5 at the beginning of the vector
    v.insert(v.begin() + 1, 15); //insert 15 at index 1 of the vector
    v.insert(v.begin() + 2, 3, 20); //insert 3 elements of value 20 at index 2 of the vector
    v.insert(v.begin() + 5, v1.begin(), v1.end()); //insert elements of vector v1 at index 5 of the vector

    v.swap(v1); //swap the contents of vector v and v1
    v.clear(); //remove all elements from the vector
    v.empty(); //returns true if the vector is empty, false otherwise
    v.capacity(); //returns the capacity of the vector (the total number of elements it can hold
}

void LISTS(){
    list <int> l; //dynamic linked list NO need to declare size of list
    l.push_back(10); //add element at the end of list
    l.push_front(20); //add element at the beginning of list
    //rest same as vectors.
}

void DEQUE(){
    deque <int> d; //double ended queue NO need to declare size of deque
    d.push_back(10); //add element at the end of deque
    d.push_front(20); //add element at the beginning of deque
    d.pop_back(); //remove the last element of the deque
    d.pop_front(); //remove the first element of the deque
    d.back(); //returns the last element of the deque
    d.front(); //returns the first element of the deque
    //rest same as vectors.
}

void STACK(){
    stack <int> s; //LIFO data structure NO need to declare size of stack
    s.push(10); //add element at the top of the stack
    s.pop(); //remove the top element of the stack
    s.top(); //returns the top element of the stack
    s.empty(); //returns true if the stack is empty, false otherwise
    s.size(); //returns the number of elements in the stack
    //rest same as vectors.
}

void QUEUE(){
    queue <int> q; //FIFO data structure NO need to declare size of queue
    q.push(10); //add element at the end of the queue
    q.pop(); //remove the first element of the queue
    q.front(); //returns the first element of the queue
    q.back(); //returns the last element of the queue
    //rest same as vectors.
}

void PRIORITY_QUEUE(){
    priority_queue <int> pq; //max heap NO need to declare size of priority queue
    pq.push(10); //add element to the priority queue
    pq.pop(); //remove the top element of the priority queue
    pq.top(); //returns the top element of the priority queue

    priority_queue <int, vector <int>, greater <int>> min_pq; //min heap
    min_pq.push(10); //add element to the min priority queue
    min_pq.pop(); //remove the top element of the min priority queue
    min_pq.top(); //returns the top element of the min priority queue
}

void SETS(){
    set <int> s; //ordered set NO need to declare size of set no repetitive elements allowed and in sorted order.
    s.insert(10); //add element to the set
    s.erase(10); //remove element from the set
    s.find(10); //returns an iterator to the element if found, otherwise returns s.end()
    s.count(10); //returns 1 if the element is present in the set, otherwise returns 0
    s.size(); //returns the number of elements in the set
    s.erase(s.begin(), s.end()); //remove all elements from the set
    s.erase(s.find(10),s.find(20)); //remove elements from 10 to 20 (last element is not included)
    //rest same as vectors.
}

void MULTISET(){
    multiset <int> ms; //ordered multiset NO need to declare size of multiset repetitive elements allowed and in sorted order.
    ms.insert(10); //add element to the multiset
    ms.erase(10); //remove all occurrences of that element from the multiset
    ms.find(10); //returns an iterator to the element if found, otherwise returns ms.end()
    ms.count(10); //returns the number of occurrences of the element in the multiset
    ms.erase(ms.find(10)); //remove one occurrence of that element from the multiset
    ms.size(); //returns the number of elements in the multiset
    ms.erase(ms.begin(), ms.end()); //remove all elements from the multiset
    ms.erase(ms.find(10),ms.find(20)); //remove elements from 10 to 20 (last element is not included)
    //rest same as vectors.
}

void UNORDERED_SET(){
    unordered_set <int> us; //unordered set NO need to declare size of unordered set NO repetitive elements allowed and in UNsorted order.
    us.insert(10); //add element to the unordered set
    us.erase(10); //remove element from the unordered set
    us.find(10); //returns an iterator to the element if found, otherwise returns us.end()
    us.count(10); //returns 1 if the element is present in the unordered set, otherwise returns 0
    us.size(); //returns the number of elements in the unordered set
    us.erase(us.begin(), us.end()); //remove all elements from the unordered set
    us.erase(us.find(10),us.find(20)); //remove elements from 10 to 20 (last element is not included)
    //rest same as vectors.
}

void MAPS(){
    map <int, int> m; //ordered map NO need to declare size of map NO repetitive keys allowed and in sorted order.
    m.insert({1, 10}); //add key-value pair to the map
    m[2] = 20; //add key-value pair to the map
    
    for (auto it : m) {
        cout << it.first << " " << it.second << endl; //it is a pair of key and value
    }
    
    cout << m[1] << endl; //access value of key 1
   
    auto it = m.find(2); //returns an iterator to the element with key 2 if found, otherwise returns m.end()
    cout << it->second << endl; //access value of key 2 using iterator

    m.erase(1); //remove element with key 1 from the map
    m.find(2); //returns an iterator to the element with key 2 if found, otherwise returns m.end()
    //rest same as vectors.
}

void multimap(){
//same a map but allows multiple keys with same value
    multimap <int, int> mm; //ordered multimap NO need to declare size of multimap NO repetitive keys allowed and in sorted order.
    //only mpp[key] = value; is not allowed in multimap as it will overwrite the existing value of that key. We have to use insert function to add key-value pair to the multimap.
}

void UNORDERED_MAP(){
    //SAME AS SET AND UNORDERED SET
}

void extra(){
    sort(a,a+n); //sort the array in ascending order
    sort(a,a+n, greater <int>()); //sort the array in descending order

    sort(v.begin(), v.end()); //sort the vector in ascending order
    sort(v.begin(), v.end(), greater <int>()); //sort the vector in descending order
    
    reverse(v.begin(), v.end()); //reverse the vector

    sort(a,a+n,compare); //sort the array using custom comparator function
    
    bool compare(int a, int b) {
        return a < b; //sort in ascending order
    }

    int maxi=*max_element(v.begin(), v.end()); //returns the maximum element in the vector
    int mini=*min_element(v.begin(), v.end()); //returns the minimum element in the vector
    next_permutation(nums.begin(), nums.end()); //returns the next lexicographically greater permutation of the vector. If there is no next permutation, it returns the first permutation (sorted in ascending order).
    prev_permutation(nums.begin(), nums.end()); //returns the previous lexicographically smaller permutation
}