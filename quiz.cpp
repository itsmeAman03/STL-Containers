/*#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	set<int>s;
	s.insert(1);
	s.insert(5);
	s.insert(7);
	s.insert(2);
	s.insert(12);
	s.insert(10);
	auto it = s.lower_bound(15);
	cout<< *it <<endl;
	return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<pair<int, int> >q;
	q.push( {1, 5} );
	q.push( {4, 2} );
	q.push( {5, 3} );
	q.push({2, 4});
	q.push({3, 1});
	q.push({5, 2});
	cout<<q.top().first<<" "<<q.top().second<<endl;
	return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
int main()
{
	priority_queue<pi , vector<pi>, greater<pi> >q;
	q.push({1, 5});
	q.push({5, 3});
	q.push({3, 1});
	q.push({5, 2});
	q.push({1, 10});
	cout<<q.top().first<<" "<<q.top().second<<endl;
	return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
struct Compare
{
    bool operator()(pi const & a, pi const & b)
    {
         if(a.second < b.second)
         {
            return true;
         }
         else if(a.second > b.second)
         {
             return false;
         }
         else
         {
             if(a.first > b.first)
             {
                 return true;
             }
             return false;
         }
    }
};
int main()
{
	priority_queue<pi , vector<pi>, Compare>q;
	q.push({1, 5});
	q.push({5, 15});
	q.push({7, 15});
	q.push({10, 2});
	q.push({1, 10});
	cout<<q.top().first<<" "<<q.top().second<<endl;
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int>s;
	pair<set<int>::iterator, bool> ret;
	s.insert(1);
	s.insert(5);
	s.insert(10);
	s.insert(3);
	ret = s.insert(10);
	cout<<ret.second<<endl;
	return 0;
}