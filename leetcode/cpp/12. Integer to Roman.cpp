class Solution {
public:
    string intToRoman(int num) {
        const int M = 30;
        map<int, string> Romm;
        int Romn[M] ={1,2,3,4,5,6,7,8,9,
              10,20,30,40,50,60,70,80,90,
              100,200,300,400,500,600,700,800,900,
              1000,2000,3000};
        char Roms[M][5]={"I","II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                "X", "XX", "XXX", "XL","L", "LX", "LXX", "LXXX", "XC",
                "C", "CC", "CCC", "CD","D", "DC", "DCC", "DCCC", "CM",
                "M", "MM", "MMM" };
        int i, s = 1000;
        string st ="";
        for(i = 0; i<M ;++i)
        {
            string t = Roms[i];
            Romm[Romn[i]] =t ;
         }
         int t = num;
         while(s){
             int m = t / s;
             if(m >0){
                st = st + Romm[m*s];
             }
             t %= s;
             s/= 10;
         }
         return st;
    }
};