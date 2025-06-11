#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int linhas = n - 2;
        int colunas = m - 2;

        int blocos_linha = (linhas + 2) / 3;
        int blocos_coluna = (colunas + 2) / 3;

        int sonares = blocos_linha * blocos_coluna;

        cout << sonares << endl;
    }

    return 0;
}
