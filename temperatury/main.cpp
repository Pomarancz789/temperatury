#include <iostream>
using namespace std;

int main() {
    float tab [4][14] = {
        {1779,-4.9,2.2,3.8,9.5,15.4,16.4,17.9,19.5,14.7,9.3,4.1,1.4,0},
        {1780,-5.1,-4.3,4.4,5.9,14.2,17.2,19.4,17.9,13.1,9.4,2.8,-4.6,0},
        {1781,-4.0,-1.9,1.5,9.1,13.8,19.2,20.1,22.8,16.2,6.0,4.0,-3.6,0},
        {1782,-1.6,-6.2,0.9,7.3,14.1,17.8,20.3,18.3,13.4,6.4,0.3,-3.1,0}
  };
    
    float najnizsza=tab[0][1];
    int rok=0;
    
    for (int i=0; i<4; i++) {
        for (int j=1; j<14; j++) {
            if (tab[i][j]<najnizsza)
            {
                najnizsza=tab[i][j];
                rok=tab[i][0];
            }
        }
    }
    cout << "najnizsza srednia to: " << najnizsza <<", wystapila ona w roku " <<rok << endl;
    
    
    
    
    
    return 0;
}
