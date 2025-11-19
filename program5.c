#include <stdio.h>

int main() {
    printf("Name: Daksh Vegad\n");
    printf("ID No:25CE137\n");
    // Given data
    long long total_population = 1441981744;
    float percent_women = 48.4;
    float literacy_rate_men = 80.95;
    float literacy_rate_women = 62.84;

    long long total_women = (long long)((percent_women / 100) * total_population);
    long long total_men = total_population - total_women;

    long long literate_women = (long long)((literacy_rate_women / 100) * total_women);
    long long illiterate_women = total_women - literate_women;

    long long literate_men = (long long)((literacy_rate_men / 100) * total_men);
    long long illiterate_men = total_men - literate_men;

    printf("----- Literacy Analysis for Bharat (2024) -----\n");
    printf("Total Population         : %lld\n", total_population);
    printf("Total Men                : %lld\n", total_men);
    printf("Total Women              : %lld\n", total_women);
    printf("-----------------------------------------------\n");
    printf("Literate Men             : %lld\n", literate_men);
    printf("Illiterate Men           : %lld\n", illiterate_men);
    printf("Literate Women           : %lld\n", literate_women);
    printf("Illiterate Women         : %lld\n", illiterate_women);
    printf("-----------------------------------------------\n");

    return 0;
}
