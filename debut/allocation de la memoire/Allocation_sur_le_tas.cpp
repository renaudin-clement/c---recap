struct A
{
    unsigned short int v1, v2;
};

int main()
{
    char c = 0;
    unsigned short int *tab = new  unsigned short int[6]{0x00, 0x01, 0xc712, 0x03, 0x14, 0x3b05};
    A a1;
    a1.v1 = 0x00b5;
    a1.v2 = 0x0073;

    A *a2 = new A();
    a2->v1 = 0;
    a2->v2 = 2;
    
    A *a3 = new A[3];
    a3[1].v1 = 0x7fff;
    a3[1].v2 = 0x0020;
    // Sur la diapo suivante : etat de la memoire jusqu’ici
    delete[] tab;
    delete a2;
    delete[] a3;
}