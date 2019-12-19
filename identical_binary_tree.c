#include<bits/stdc++.h>
using namespace std;

bool is_identical(node* a, node* b){
    if(!a && !b)
        return true;
    if(!a && b)
        return false;
    if(a && !b)
        return false;

    if(is_identical(a->left, b->left) && is_identical(a->right, b->right))
        return true;
    return false;
}
