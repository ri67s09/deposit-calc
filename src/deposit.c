#include "deposit.h"

int cor_days(int days){
    if ((days >= 0) && (days <= 365)){
        return 1;
    }
    return 0;
}

int cor_sum(int sum){
    if (sum >= 10000){
        return 1;
    }
    return 0;
}

int sum_time_of_expiry(int days1, int sum){
    int a;

    if (sum <= 100000){
        if   ((days1 >= 0) && (days1 <= 30)){
            a = (sum * 10)/100;
            sum = sum - a;
            return sum;
        }
        if ((days1 >= 31) && (days1 <= 120)){
            a = (sum * 2)/100;
            sum = sum + a;
            return sum;
        }
        if ((days1 >= 121) && (days1 <= 240)){
            a = (sum * 6)/100;
            sum = sum + a;
            return sum;
        }
        if ((days1 >= 241) && (days1 <= 365)){
            a = (sum * 12)/100;
            sum = sum + a;
            return sum;
        }
    }
    else {
        if ((days1 >= 0) && (days1 <= 30)){
            a = (sum * 10)/100;
            sum = sum - a;
            return sum;
        }
        if ((days1 >= 31) && (days1 <= 120)){
            a = (sum * 3)/100;
            sum = sum + a;
            return sum;
        }
        if ((days1 >= 121) && (days1 <= 240)){
            a = (sum * 8)/100;
            sum = sum + a;
            return sum;
        }
        if ((days1 >= 241) && (days1 <= 365)){
            a = (sum * 15)/100;
            sum = sum + a;
            return sum;
        }

    }
    return 0;
}
