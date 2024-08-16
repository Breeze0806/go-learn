class Solution {
public:
    int cmp_num(string a, string b){
        if(a.size() < b.size()) return -1;
        else if(a.size() == b.size()){
            if(a == b) return 0;
            else return a < b ? -1:1 ;
        }
        else return 1;
    }
    vector<string> change(string v){
        vector<string> vs;
        int a = 0, b = 0;
        while((b = v.find(".",a)) != string::npos){
            string::size_type i = a;
            for(; i < v.size(); ++i){
                if(v[i] > '0' || v[i] == '.') break;
            }
            if(i == v.size() || v[i] == '.') vs.push_back("0");
            else vs.push_back(v.substr(i, b- i));
            a = b + 1;
        }
        string::size_type i = a;
        for(; i < v.size(); ++i){
            if(v[i] > '0' || v[i] == '.') break;
        }
        if(i == v.size() || v[i] == '.') vs.push_back("0");
        else vs.push_back(v.substr(i,  v.size() - i));
        return vs;
    }
    int compareVersion(string version1, string version2) {
        vector<string> v1,v2;
        v1 = change(version1);
        v2 = change(version2);

        string::size_type i;
        for(i = 0; i < v1.size() && i <v2.size(); ++i){
            if(cmp_num(v1[i],v2[i]) != 0) return cmp_num(v1[i],v2[i]);
        }

        for(; i < v1.size(); ++i){
            if(cmp_num(v1[i],"0") != 0) return cmp_num(v1[i],"0");
        }

        for(; i < v2.size(); ++i){
            if(cmp_num("0",v2[i]) != 0) return cmp_num("0",v2[i]);
        }

        return 0;
    }
};