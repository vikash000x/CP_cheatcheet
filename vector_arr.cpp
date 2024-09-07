
fin(i, 0, k){
int x = a[0];
int y = *a.rbegin();  ===> last element mtlb maximum
a.erase(a.begin());  ==> first elem ko hatao
a.pop_back();   ==> last ko hatao
a.emplace_back(x + y); }
ao(a, n-k); cout<<endl;
