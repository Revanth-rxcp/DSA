#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector creation types
    vector<int> vec;
    vector<int> vec1={1,2,3};
    vector<int> vec2(3,1); // size is 3 and all the elements are 1
    vector<int> vec3(vec1); // vec3 has same elements as vec1
    
    // loops on vector for each loop
    // for(int val : vec3){
    //     cout << val << " "; // val repersents the elements in vector not the index value
    // }

    // properties
    vec.push_back(1); //  insert elements in last
    vec.push_back(6);
    vec.push_back(3);
    vec.push_back(9);
    vec.pop_back(); // delete last element
    vec.emplace_back(9); // insert element in last bu there is a slight difference between emplace_back and push_back()
    vec.push_back(96);

    // for(int val : vec){
    //     cout << val << " "; // val repersents the elements in vector not the index value
    // }
    

    // cout << "size = " << vec.size() << endl; // no.of elements
    // cout << "capacity = " << vec.capacity() << endl; // max no.of elements can be stored

    // cout << vec.at(2) << endl; // access at particular index using at
    // cout << vec[2] << endl; // we can use brackets also

    // cout << vec.front() << endl; // for first element
    // cout << vec.back() << endl; // for last element

    // vec.erase(vec.begin()); // used to earse element or range of elements vec.begin() is an iterator 
    // // we have to give iterator in bracket

    // vec.erase(vec.begin(),vec.begin()+2); // to earse range of elements right is include left is exclude

    // vec.insert(vec.begin()+1,2); // to insert element at particular position we have to pass the iterator not the index value

    // vec.clear(); // to clear or delete all elements and the size will be 0
    // cout << vec.empty() << endl; // if the vector is empty then it will return true(1) otherwise it will return false(0)

    // cout << *(vec.begin()) << endl; // vec.begin() and vec.end() are called iterators they can act as pointers 
    // // vec.begin() points to first element in vector
    // cout << *(vec.end()) << endl; // it points the n-1 next location garbage location so it returns value 0

    // cout << *(vec.rbegin()) << endl; // vector.rbegin() and vec.rend() are also called iterators // vec.rbegin() points to last element(n-1) in vector
    // cout << *(vec.rend()) << endl; // it points the first element before location garbage location so it returns value 0
    
    // vector<int>::iterator it;// iterator loops forward loop
    for(auto it=vec.begin();it!=vec.end();it++){ // we can remove the intilization and write auto keyword
        cout << *(it) << " ";
    }
    cout << endl;
    // vector<int>::reverse_iterator itt; // iterator loops backward loop
    for( auto itt=vec.rbegin();itt!=vec.rend();itt++){ // we can remove the intilization and write auto keyword
        cout << *(itt) << " ";
    }



    return 0;
}