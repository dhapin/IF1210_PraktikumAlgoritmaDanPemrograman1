#include <stdio.h>
#include <float.h>
#include <math.h>

double gradien(double x1, double y1, double x2, double y2) {
    if (x2 == x1) {
        return DBL_MAX;
    }
    return (y2-y1)/(x2-x1);
}

double carikonstanta(double g12, double x1, double y1) {
    if (g12 == DBL_MAX) {
        // konstan x (garis vertikal), y = any, x = c
        return x1;
    }
    return y1 - (g12*x1);
}

double caripotongx(double g1, double c1, double g2, double c2) {
    if (g1 == DBL_MAX) {
        return c1;
    }
    if (g2 == DBL_MAX) {
        return c2;
    }
    return (c2-c1)/(g1-g2);
}

double caripotongy(double g1, double c1, double g2, double c2) {
    if (g1 == DBL_MAX) {
        return c2;
    }
    if (g2 == DBL_MAX) {
        return c1;
    }
    return ((g2*c1)-(g1*c2))/(g2-g1);
}

double jarak(double x1, double y1, double x2, double y2) {
    double a = x2-x1;
    double b = y2-y1;
    return sqrt((a*a)+(b*b));
}

int main() {
    double xa, ya, xb, yb, xc, yc, xd, yd, xe, ye;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &xa, &ya, &xb, &yb, &xc, &yc, &xd, &yd, &xe, &ye);

    double gab = gradien(xa, ya, xb, yb);
    double gcd = gradien(xc, yc, xd, yd);

    double gac = gradien(xa, ya, xc, yc);
    double gbd = gradien(xb, yb, xd, yd);

    double gad = gradien(xa, ya, xd, yd);
    double gbc = gradien(xb, yb, xc, yc);

    double hasil = DBL_MAX;
    if (gab != gcd) { // gboleh paralel
        double cab = carikonstanta(gab, xa, ya);
        double ccd = carikonstanta(gcd, xc, yc);

        // printf("%lf\n", gab);
        // printf("%lf\n", cab);
        // printf("%lf\n", gcd);
        // printf("%lf\n", ccd);
        // return 0;

        double x = caripotongx(gab, cab, gcd, ccd);
        double y = caripotongy(gab, cab, gcd, ccd);
        // printf("%lf\n", x);
        // printf("%lf\n", y);

        double jaraksekarang = jarak(x, y, xe, ye);
        if (jaraksekarang < hasil) {
            hasil = jaraksekarang;
        }
    }

    if (gac != gbd) { // gboleh paralel
        double cac = carikonstanta(gac, xa, ya);
        double cbd = carikonstanta(gbd, xb, yb);

        double x = caripotongx(gac, cac, gbd, cbd);
        double y = caripotongy(gac, cac, gbd, cbd);

        double jaraksekarang = jarak(x, y, xe, ye);
        if (jaraksekarang < hasil) {
            hasil = jaraksekarang;
        }
    }

    if (gad != gbc) { // gboleh paralel
        double cad = carikonstanta(gad, xa, ya);
        double cbc = carikonstanta(gbc, xb, yb);

        // printf("%lf\n", gad);
        // printf("%lf\n", cad);
        // printf("%lf\n", gbc);
        // printf("%lf\n", cbc);
        // return 0;

        double x = caripotongx(gad, cad, gbc, cbc);
        double y = caripotongy(gad, cad, gbc, cbc);

        // printf("%lf\n", x);
        // printf("%lf\n", y);

        double jaraksekarang = jarak(x, y, xe, ye);
        if (jaraksekarang < hasil) {
            hasil = jaraksekarang;
        }
    }

    printf("%.2lf\n", hasil);

    return 0;
}
