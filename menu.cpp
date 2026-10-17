

#include <iostream>
using namespace std;
int main() {
    string menu[2]={"Soto","Rawon"};
    int porsi[2];
    int harga[2]={15000,20000};
    int i;
    int total;
    for (i=0;i<2;i++)
        {
            cout<<"\nSELAMAT DATANG DIWARUNG SETO :\n\n";
            cout<<"menu makanan : ";
            cout<<menu[i]<<endl;
            cout<<"harga : ";
            cout<<harga[i]<<endl;
            cout<<"masukan porsi menu anda : ";
            cin>>porsi[i];
        total=porsi[i]*harga[i];
            cout<<"totalnya adalah : ";
            cout<<total<<endl;
            
        }
    return 0;
}
