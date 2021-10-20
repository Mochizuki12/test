#include<stdio.h>
int main(void)
{
    double a[5];
    double b[5];
    double c[5];
    double r[5];
    double x[5];
    double n, m, l;
    int i;

    while(1){
        printf("3×3の行列を入力 a1 a2 a3,b1 b2 b3,c1 c2 c3\n");
        scanf("%lf%lf%lf,%lf%lf%lf,%lf%lf%lf",&a[1],&a[2],&a[3],&b[1],&b[2],&b[3],&c[1],&c[2],&c[3]);
        printf("右辺の３行の列ベクトルを入力 r1,r2,r3\n");
        scanf("%lf,%lf,%lf",&r[1],&r[2],&r[3]);
        

        m = -b[1]/a[1];
        n = -c[1]/a[1];
          
        for(i=1;i<=3;i++){
            b[i] = b[i]+(a[i]*m);
        }
        for(i=1;i<=3;i++){
            c[i] = c[i]+(a[i]*n);
        }
        r[2] = r[2] + (r[1]*m);
        r[3] = r[3] + (r[1]*n);
        
        
        l = -c[2]/b[2];
        for(i=1;i<=3;i++){
            c[i] = c[i]+(b[i]*l);
        }
        r[3] = r[3] + (r[2]*l);


        x[3] = r[3]/c[3];
        x[2] = (r[2] - b[3]*x[3])/(b[2]);
        x[1] = (r[1] - a[3]*x[3] - a[2]*x[2])/(a[1]);


        printf("x1=%f,x2=%f,x3=%f\n",x[1],x[2],x[3]);


    }
    return 0;


}
