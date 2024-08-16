class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int dx = max(A,E);
        int dy = max(B,F);
        int ux = min(C,G);
        int uy = min(D,H);
        if(ux>dx&&uy>dy){
            return (C-A)*(D-B)+(G-E)*(H-F) - (ux - dx) * (uy - dy);
        }
        else return (C-A)*(D-B)+(G-E)*(H-F) ;
    }
};