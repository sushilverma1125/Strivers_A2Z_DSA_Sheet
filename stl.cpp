#include <bits/stdc++.h>
using namespace std;

// --------------------------------------------------------------Pairs--------------------------------------------------------------
void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // OUPTPUT: 1, 3

    pair<int, pair<int, int>> p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl; // OUTPUT: 1, 4, 3

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl; // OUTPUT: 5
}

// --------------------------------------------------------------Vectors--------------------------------------------------------------
void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); // {100, 100, 100, 100, 100}
    vector<int> v2(5); // {0, 0, 0, 0, 0}
    vector<int> v3(v1); // copy the elements of v1 to v3

    cout << *(v1.begin()); // returns the first element of the vector 
    cout << *(v1.end()); // returns 0, because it's pointing to the n + 1 index  
    cout << *(v1.end() - 1); // returns the last element of the vector   

    cout << v[0] << " " << v.at(0); // returns the first element
    cout << v.back() << " "; // returns the last element

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1); // {10, 12, 23} deletes the second element

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} (start, end)

    // Insert function
    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin(), 300);       // {300, 100, 100};
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);                       // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2);

    v.clear(); // erases the entire vector

    cout << v.empty();

    /*
    size(): Returns the number of elements in the vector.

    push_back(value): Adds value to the end of the vector.

    emplace_back(args...): Constructs an element in place at the end of the vector using args....

    pop_back(): Removes the last element from the vector.

    at(index): Returns a reference to the element at index, with bounds checking.

    operator: Returns a reference to the element at index, without bounds checking.

    begin() and end(): Return iterators to the beginning and just past the end of the vector, respectively.

        #include <iostream>
        #include <vector>

        using namespace std;

        int main() {
            vector<int> vec = {1, 2, 3, 4, 5}; // 'vector<int>' instead of 'std::vector<int>'

            // Iterate over the vector using iterators
            cout << "Vector elements:";
            for (auto it = vec.begin(); it != vec.end(); ++it) {
                cout << " " << *it; // Dereference iterator 'it' to access element
            }
            cout << endl;

            return 0;
        }

    insert(position, value): Inserts value at the position specified by the iterator position.

    erase(position): Removes the element at the position specified by the iterator position.

    clear(): Removes all elements from the vector.

    swap(other): Swaps the contents (including sizes and capacities) of this vector with other.

    empty(): Returns true if the vector is empty (size is 0), otherwise false.
    */
}

// --------------------------------------------------------------List--------------------------------------------------------------
void explainList()
{
    list<int> ls;

    ls.push_back(2);     // ls: {2}
    ls.emplace_back(4);  // ls: {2, 4}
    ls.push_front(5);    // ls: {5, 2, 4}
    ls.emplace_front(1); // ls: {1, 5, 2, 4}

    // Using iterators
    cout << "List elements: ";
    for (auto it = ls.begin(); it != ls.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Other functions
    ls.clear();               // Clears the list, ls: {}
    ls.insert(ls.begin(), 3); // Inserts 3 at the beginning, ls: {3}
    ls.insert(ls.end(), 7);   // Inserts 7 at the end, ls: {3, 7}
    ls.size();                // Returns the size of the list (2 in this case)
    ls.swap(ls);              // Swaps the content of ls with itself (no change)

    // Using reverse iterators
    cout << "List elements (reversed): ";
    for (auto it = ls.rbegin(); it != ls.rend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    /*
    std::list<int> ls;: Defines a list ls of integers.
    .push_back(2): Adds 2 to the back of the list (ls: {2}).
    .emplace_back(4): Constructs 4 in-place at the back of the list (ls: {2, 4}).
    .push_front(5): Adds 5 to the front of the list (ls: {5, 2, 4}).
    .emplace_front(1): Constructs 1 in-place at the front of the list (ls: {1, 5, 2, 4}).
    .begin(), .end(), .rbegin(), .rend(): Standard iterator functions for begin, end, reverse begin, and reverse end respectively.
    .clear(): Clears the list (ls: {}).
    .insert(): Inserts elements at a specific position in the list.
    .size(): Returns the size (number of elements) in the list.
    */
}

// --------------------------------------------------------------Deque--------------------------------------------------------------
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1, 2}
    dq.push_front(4);    // {4, 1, 2}
    dq.emplace_front(3); // {3, 4, 1, 2}
    dq.pop_back();       // {3, 4, 1}
    dq.pop_front();      // {4, 1}
    dq.back();           // Returns a reference to the last element
    dq.front();          // Returns a reference to the first element
    // Other functions are similar to vector:
    // begin(), end(), rbegin(), rend(), clear(), insert(), size(), swap()

    /*
    push_back(value): Adds value to the end of the deque.
    push_front(value): Adds value to the front of the deque.
    pop_back(): Removes the last element from the deque.
    pop_front(): Removes the first element from the deque.
    back(): Returns a reference to the last element in the deque.
    front(): Returns a reference to the first element in the deque.
    clear(): Removes all elements from the deque.
    insert(position, value): Inserts value at the position specified by the iterator position.
    size(): Returns the number of elements in the deque.
    swap(other): Swaps the contents (including sizes and capacities) of this deque with other.

    emplace_back(args...): Constructs an element in place at the end of the deque using args....
    emplace_front(args...): Constructs an element in place at the front of the deque using args....
    begin() and end(): Return iterators to the beginning and just past the end of the deque, respectively.
    rbegin() and rend(): Return reverse iterators to the reverse beginning and reverse end of the deque, respectively.

    */
}

// --------------------------------------------------------------Stack(LIFO)--------------------------------------------------------------
void explainStack()
{
    stack<int> st;
    st.push(1);         // Pushes 1 onto the stack: {1}
    st.push(2);         // Pushes 2 onto the stack: {2, 1}
    st.push(3);         // Pushes 3 onto the stack: {3, 2, 1}
    st.push(3);         // Pushes another 3 onto the stack: {3, 3, 2, 1}
    st.emplace(5);      // Constructs 5 in place and pushes it onto the stack: {5, 3, 3, 2, 1}
    cout << st.top();   // Prints the top element (5 in this case)
    st.pop();           // Removes the top element: {3, 3, 2, 1}
    cout << st.top();   // Prints the new top element (3)
    cout << st.size();  // Prints the number of elements in the stack (4)
    cout << st.empty(); // Prints whether the stack is empty (0 for false, 1 for true)
    stack<int> st1, st2;
    st1.swap(st2); // Swaps the contents of st1 and st2

    /*
    push(value): Adds value to the top of the stack.

    emplace(args...): Constructs an element in place at the top of the stack using args....

    top(): Returns a reference to the top element of the stack (the most recently added element).

    pop(): Removes the top element from the stack.

    size(): Returns the number of elements in the stack.

    empty(): Returns whether the stack is empty (true if empty, false otherwise).

    swap(other): Swaps the contents (including sizes) of this stack with other.
    */
}

// --------------------------------------------------------------Queue(FIFO)--------------------------------------------------------------
void explainQueue()
{
    queue<int> q;
    q.push(1);         // Enqueues 1: {1}
    q.push(2);         // Enqueues 2: {1, 2}
    q.emplace(4);      // Constructs 4 in place and enqueues it: {1, 2, 4}
    q.back() += 5;     // Accesses the back element (4) and adds 5 to it, making it 9
    cout << q.back();  // Prints the back element (9)
    q.front();         // Accesses the front element (1)
    q.pop();           // Dequeues the front element (1), leaving {2, 4}
    cout << q.front(); // Prints the new front element (2)
    // size(), swap(), empty() are similar to std::stack

    /*
    push(value): Enqueues value to the back of the queue.

    emplace(args...): Constructs an element in place at the back of the queue using args....

    back(): Returns a reference to the back element of the queue (the last element added).

    front(): Returns a reference to the front element of the queue (the first element added).

    pop(): Removes the front element from the queue.

    size(): Returns the number of elements in the queue.

    empty(): Returns whether the queue is empty (true if empty, false otherwise).

    swap(other): Swaps the contents (including sizes) of this queue with other.
    */
}

// --------------------------------------------------------------Priority Queue--------------------------------------------------------------
void explainPQ()
{
    // Max Heap
    priority_queue<int> pq;
    pq.push(5);       // Inserts 5: {5}
    pq.push(2);       // Inserts 2: {5, 2}
    pq.push(8);       // Inserts 8: {8, 5, 2}
    pq.emplace(10);   // Constructs 10 in place and inserts it: {10, 8, 5, 2}
    cout << pq.top(); // Prints the top element (10)
    pq.pop();         // Removes the top element: {8, 5, 2}
    cout << pq.top(); // Prints the new top element (8)

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);       // Inserts 5: {5}
    pq.push(2);       // Inserts 2: {2, 5}
    pq.push(8);       // Inserts 8: {2, 5, 8}
    pq.emplace(10);   // Constructs 10 in place and inserts it: {2, 5, 8, 10}
    cout << pq.top(); // Prints the top element (2)

    // size(), swap(), empty() functions are similar to std::stack and std::queue

    /*
    push(value): Inserts value into the priority queue.

    emplace(args...): Constructs an element in place in the priority queue using args....

    top(): Returns a reference to the top (highest or lowest, depending on the comparator) element in the priority queue.

    pop(): Removes the top element from the priority queue.

    size(): Returns the number of elements in the priority queue.

    empty(): Returns whether the priority queue is empty (true if empty, false otherwise).

    swap(other): Swaps the contents (including sizes) of this priority queue with other.
    */
}

// --------------------------------------------------------------Set--------------------------------------------------------------
void explainSet()
{
    set<int> st;
    st.insert(1);  // Inserts 1 into the set: {1}
    st.emplace(2); // Constructs 2 in place and inserts it: {1, 2}
    st.insert(2);  // Duplicate insertions are ignored: {1, 2}
    st.insert(4);  // Inserts 4: {1, 2, 4}
    st.insert(3);  // Inserts 3: {1, 2, 3, 4}

    // Functionality of insert is similar to vector, but ensures unique elements
    // begin(), end(), rbegin(), rend(), size(), empty(), and swap() are similar to containers above

    auto it = st.find(3);           // Finds element 3 in the set
    auto it_not_found = st.find(6); // Returns st.end() since 6 is not in the set

    st.erase(5); // Erases element 5 if present (takes logarithmic time)

    int cnt = st.count(1); // Counts occurrences of element 1 (either 0 or 1 for sets)

    auto it = st.find(3); // Finds element 3 in the set

    st.erase(it); // Erases the element pointed to by iterator `it` (takes constant time)

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2); // Finds element 2 in the set
    auto it2 = st.find(4); // Finds element 4 in the set
    st.erase(it1, it2);    // Erases elements in the range [it1, it2) - after erase: {1, 4}

    // lower_bound() and upper_bound() work similarly to vector
    auto lb = st.lower_bound(2); // Returns an iterator to the first element not less than 2
    auto ub = st.upper_bound(3); // Returns an iterator to the first element greater than 3

    // to print elements of set
    for (auto it = st.begin(); it != st.end(); ++it) {
        cout << *it << " ";
    }

    /*
    insert(value): Inserts value into the set if it does not already exist.

    emplace(args...): Constructs an element in place in the set using args... if it does not already exist.

    find(value): Returns an iterator to the element with value value if found, otherwise returns end().

    erase(value): Removes the element with value value from the set if it exists.

    count(value): Returns the number of elements with value value (either 0 or 1 for sets).

    begin() and end(): Return iterators to the beginning and just past the end of the set, respectively.

    rbegin() and rend(): Return reverse iterators to the reverse beginning and reverse end of the set, respectively.

    size(): Returns the number of elements in the set.

    empty(): Returns whether the set is empty (true if empty, false otherwise).

    swap(other): Swaps the contents (including sizes) of this set with other.
    */
}

// --------------------------------------------------------------MultiSet--------------------------------------------------------------
void explainMultiset() {
    multiset<int> ms;
    ms.insert(1);                   // Inserts 1 into the multiset: {1}
    ms.insert(1);                   // Inserts another 1: {1, 1}
    ms.insert(1);                   // Inserts another 1: {1, 1, 1}

    ms.erase(1);                    // Erases all occurrences of 1: {}

    int cnt = ms.count(1);          // Counts occurrences of 1 (will be 0)

    ms.erase(ms.find(1));           // Erases one occurrence of 1 if found

    // ms.erase(ms.find(1), ms.find(1) + 2);    Erases elements in the range [first, last) - only the first two occurrences of 1

    // Functions like insert(), erase(), find(), count(), begin(), end(), size(), empty(), and swap() are similar to std::set

    /*
    insert(value): Inserts value into the multiset.

    erase(value): Erases all occurrences of value from the multiset.

    erase(iterator): Erases the element pointed to by the iterator from the multiset.

    erase(first, last): Erases elements in the range [first, last) from the multiset.

    count(value): Returns the number of elements equal to value in the multiset.

    begin() and end(): Return iterators to the beginning and just past the end of the multiset, respectively.

    size(): Returns the number of elements in the multiset.

    empty(): Returns whether the multiset is empty (true if empty, false otherwise).

    swap(other): Swaps the contents (including sizes) of this multiset with other.
    */
}

// --------------------------------------------------------------Unordered Set--------------------------------------------------------------
void explainUSet() {
    unordered_set<int> st;
    // lower_bound and upper_bound function
    // does not works, rest all functions are same
    // as above, it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens
}

// --------------------------------------------------------------Map--------------------------------------------------------------
void explainMap() {
    // Define a map with key and value both integers
    map<int, int> mpp;

    // Example of different map declarations
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    // Inserting elements into the map using different methods
    mpp[1] = 2;                 // Inserts {1, 2} into the map
    mpp.emplace(3, 1);          // Emplaces {3, 1} into the map
    mpp.insert({2, 4});         // Inserts {2, 4} into the map
    // mpp[{2, 3}] = 10;            Inserts {{2, 3}, 10} into the map

    // Iterating through the map to print all key-value pairs
    for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }

    // Accessing elements in the map using subscript operator []
    cout << mpp[1];             // Prints the value associated with key 1
    cout << mpp[5];             // If key 5 doesn't exist, it will be inserted with a default value (0 for int)

    auto it = mpp.find(3); 
    // cout << *(it).second;

    auto it = mpp.find(5); 
    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound (3);
    // erase, swap, size, empty, are same as above

    /*
    insert(pair): Inserts a key-value pair into the map.

    emplace(args): Constructs a key-value pair in-place into the map.

    operator[]: Accesses or inserts elements using subscript notation.

    at(key): Accesses the element with specified key, throwing an exception if not found.

    find(key): Returns an iterator to the element with specified key, or end() if not found.

    erase(key): Removes the element with specified key.

    begin() and end(): Return iterators to the beginning and just past the end of the map, respectively.

    size(): Returns the number of elements in the map.

    empty(): Returns whether the map is empty (true if empty, false otherwise).

    clear(): Removes all elements from the map.

    swap(other): Swaps the contents (including sizes) of this map with other.
    */
}

// --------------------------------------------------------------Unordered Map--------------------------------------------------------------
void explainUnorderedMap() {
    // Declare an unordered_map with key and value both integers
    unordered_map<int, string> ump;

    // Insert elements into the unordered_map using insert() or emplace()
    ump.insert({1, "One"});
    ump.emplace(2, "Two");
    ump.insert({3, "Three"});
    ump[4] = "Four";  // Using subscript operator []

    // Iterate through the unordered_map to print all key-value pairs
    for (auto it = ump.begin(); it != ump.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    // Access elements using subscript operator []
    cout << "Value at key 2: " << ump[2] << endl;

    // Erase elements using erase()
    ump.erase(3);

    // Check if key exists using find() and erase it if found
    auto found = ump.find(4);
    if (found != ump.end()) {
        ump.erase(found);
    }

    // Size and empty functions
    cout << "Size of unordered_map: " << ump.size() << endl;
    cout << "Is unordered_map empty? " << (ump.empty() ? "Yes" : "No") << endl;

    // Swap contents with another unordered_map
    unordered_map<int, string> ump2;
    ump2.swap(ump);

    /*
    insert(pair): Inserts a key-value pair into the unordered_map.

    emplace(args): Constructs a key-value pair in-place into the unordered_map.

    operator[]: Accesses or inserts elements using subscript notation.

    at(key): Accesses the element with specified key, throwing an exception if not found.

    find(key): Returns an iterator to the element with specified key, or end() if not found.

    erase(key): Removes the element with specified key.

    begin() and end(): Return iterators to the beginning and just past the end of the unordered_map, respectively.

    size(): Returns the number of elements in the unordered_map.

    empty(): Returns whether the unordered_map is empty (true if empty, false otherwise).

    clear(): Removes all elements from the unordered_map.

    swap(other): Swaps the contents (including sizes) of this unordered_map with other.
    */
}


int main()
{
    explainPair();
    explainVector();
    return 0;
}
