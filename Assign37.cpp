// 1. Write a c++ program, to demonstrate priority queue.
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     priority_queue<int> pq;
//     pq.push(40);
//     pq.push(100);
//     pq.push(22);
//     pq.push(30);
//     pq.push(30);
//     pq.push(45);
//     pq.push(57);
//     while (!pq.empty())
//     {
//          cout<<pq.top()<<" "; //It give higher priority to largest number among all
//          pq.pop();
//     }
//     return 0;
// }

// 2. Implement different operations on priority queue .i.e. adding element, removing element, 
// size of priority queue, and print it.
// #include <iostream>
// #include <queue>
// using namespace std;
// int main()
// {
//     priority_queue<int> p;
//     p.push(30);        //Adding Elements
//     p.push(50);        //Adding Elements
//     p.push(20);        //Adding Elements
//     p.push(10);        //Adding Elements
//     p.push(40);        //Adding Elements
//     cout<<"Size of Priority Queue:: "<<p.size();  //Size of Queue
//     p.pop();           //Remove elements
//     p.pop();           //Remove elements
//     p.pop();           //Remove elements
//     p.pop();           //Remove elements
//     p.pop();           //Remove elements
//     cout<<"\nSize of Priority Queue:: "<<p.size();  //Size of Queue
//     return 0;
// }

// 3. Find the total number of elements of the set container.
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(5);
//     s.insert(2);
//     s.insert(4);
//     s.insert(1);  //Repeated element will be removed from set
//     s.insert(3);
//     s.insert(5);
//     s.insert(2);
//     cout<<"Total no of element :: "<<s.size()<<endl;
//     for (auto i : s) 
//     {
//        cout << i << ' ';
//     }
//     return 0;
// }

// 4. Using inbuilt function and insert an element to the set container.
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(5);
//     s.insert(2);
//     s.insert(4);
//     s.insert(1); //Repeated element will be removed from set
//     s.insert(3);
//     s.insert(5);
//     s.insert(2);
//     return 0;
// }

// 5. Create a c++ program using multiset and returns an iterator to the theoretical element 
// that follows the last element in the multiset –> O(1)
// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     multiset<int> m;
//     m.insert(5);
//     m.insert(2);
//     m.insert(4);
//     m.insert(1);   //Repeated element will not removed from set
//     m.insert(3);
//     m.insert(5);
//     m.insert(2);
//     multiset<int> :: iterator x;
//     for ( x = m.end(); x != m.begin(); x--)
//     {
//         cout<<*x<<" ";
//         // break;
//     }
//     return 0;
// }

// 6. Create a c++ program using multiset and returns an iterator to the first element in the 
// multiset –> O(1)

// 7. Create a map, insert at least 5 pairs of keys and values and print it.
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<int,char> m;
//     m[1] = 'A'; 
//     m[2] = 'B'; 
//     m[3] = 'C'; 
//     m[4] = 'D'; 
//     m[5] = 'E'; 
//     map<int,char> :: iterator i = m.begin();
//     for ( ; i != m.end(); i++)
//     {
//         cout<<i->first<<" "<<i->second<<endl;
//     }
//     return 0;
// }

// 8. Create a map, where insert keys and values as string type and integer type respectively 
// and print it on the screen.
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<int , string> m;
//     m[1] = "I";
//     m[2] = "am";
//     m[3] = "a";
//     m[4] = "good";
//     m[5] = "boy.";
//     map<int,string>::iterator x = m.begin();
//     for (; x != m.end(); x++)
//     {
//         cout<<x->second<<" ";
//     }
//     return 0;
// }

// 9. Write a c++ program to demonstrate the implementation of multimap
// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     multimap<int,char> m;
//     m.insert({1,'V'});
//     m.insert({2,'i'});
//     m.insert({3,'s'});
//     m.insert({4,'h'});
//     m.insert({5,'u'});
//     m.insert({6,'u'});
//     multimap<int,char>::iterator x = m.begin();
//     m.erase(6);
//     while (x != m.end())
//     {
//         cout<<x->second;
//         x++;
//     }
//     return 0;
// }

// 10. Write a c++ program to demonstrate functionality of unordered_map.
// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main()
// {
//     unordered_map<int,int> m;
//     m.insert({1,1});
//     m.insert({2,2});
//     m.insert({3,3});
//     m.insert({4,4});
//     m.insert({5,5});
//     unordered_map<int,int>::iterator x = m.begin();
//     while (x != m.end())
//     {
//         cout<<x->first<<" "<<x->second<<endl;
//         x++;
//     }    
//     return 0;
// }