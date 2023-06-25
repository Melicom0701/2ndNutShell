#include <iostream>
#include "my_functions.h"

int main() {
    int graph[NMAX][NMAX];
    int path[NMAX];
    int n,m;
    int deg[NMAX];
    //more input options pleaseee
    khung();
    functions(n,m,graph,deg,path);
    return 0;
}
