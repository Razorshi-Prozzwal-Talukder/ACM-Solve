#include<bits/stdc++.h>
using namespace std;
main() {
    char main_string[1000], reserve[1000], output_string[1000];
    int i, j;
    while(gets(main_string)) {
        int len1 = strlen(main_string);
        int pos = 0, k = 0;

        for(i=0; i<=len1; i++) {
            if(main_string[i]!= 32 && i<len1) {
                reserve[pos] = main_string[i];
                pos++;
            } else if(main_string[i]==32 || i==len1) {
                reserve[pos] = '\0';
                // cout<<reserve<<endl;
                int len2 = strlen(reserve);
                for(j=len2-1; j>=0; j--) {
                    output_string[k] = reserve[j];
                    k++;
                }
                pos =0;
                output_string[k] = 32;
                k++;
            }
        }
        output_string[k-1] = '\0';

        cout<<output_string<<endl;
    }
    return 0;
}
