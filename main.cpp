#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int cb[6]={100,50,20,10,5,2};
    int cm[6]={100,50,25,10,5,1};
    string sb[6]={"100.00","50.00","20.00","10.00","5.00","2.00"};
    string sm[6]={"1.00","0.50","0.25","0.10","0.05","0.01"};
    int bi[6], mo[6];
    int aux=0,aux2=0,b,c,d,i,x,y;

    float N;
    cin>>N;

    if(N>=0 && N<=1000000.00){

            int ent=floor(N);
            float dec=N-ent;
            int vdec=roundf(dec*100);

            d=ent/(cb[0]);
            bi[0]=d;
            c=ent%cb[0];
            if(c==1) {vdec=vdec+(100);}

            while(aux!=5)
                {
                    ent=c;
                    aux=aux+1;
                    d=ent/float(cb[aux]);
                    c=ent%cb[aux];
                    bi[aux]=d;
                }
        if(c==1) vdec=vdec+(100);

        cout<<"NOTAS:"<<endl;
            for(i=0;i<=5;i++) cout<<bi[i]<<" nota(s) de R$ "<<sb[i]<<endl;


            y=vdec/(cm[0]);
            mo[0]=y;
            x=vdec%(cm[0]);

            while(aux2!=5)
                {
                    vdec=x;
                    aux2=aux2+1;
                    y=vdec/cm[aux2];
                    x=vdec%cm[aux2];
                    mo[aux2]=y;
                }

                cout<<"MOEDAS:"<<endl;
                for(i=0;i<=5;i++) cout<<mo[i]<<" moeda(s) de R$ "<<sm[i]<<endl;

        return 0;
        }
}
