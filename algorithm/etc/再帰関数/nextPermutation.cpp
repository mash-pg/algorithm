#include "/home/mash/projects/algorithm/include/template.hpp"


void permute(string s,int l,int r,vs& npermutation){
    if(l == r){
        cout << s << endl;
        npermutation.pb(s);
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        permute(s, l + 1, r, npermutation);
        swap(s[l], s[i]);

    }
    
}


int main(){
    string s;
    cin >> s;
    
    int left = 0;//固定するもの
    int right = s.size() - 1;//一番右
    vector<string> npermutation;
    permute(s,left,right,npermutation);
    cout << "------------------------" << endl;
    for (int i = 0; i < npermutation.size(); i++)
    {
        cout << npermutation[i] << " ";
    }

    return 0;
}