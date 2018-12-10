#include<bits/stdc++.h>
using namespace std;
struct node{
    int b,h;
    node *left,*right;
};

node *createnode(int k){
    node *x = new node();
    x->b =k;
    x->h = rand();
    x->left=x->right = NULL;
    return x;

}
void split (node *t,node **l,node **r,int x){
    node *tL,*tR;
    if(t == NULL){
        *l=*r=NULL;
    }
    else if(t->b <x){
        split(t->right,&tL,&tR,x);
        t->right = tL;
        *l = t;
        *r = tR;
    }
    else{
        split(t->left,&tL,&tR,x);
        t->left = tR;
        *r = t;
        *l = tL;
    }

}
void print(node *t){
    if(t==NULL) return;
    print(t->left);
    cout<<t->b<<" ";
    print(t->right);
}
int main()
{
    node *t = createnode(3);
    cout<<"\nprinting tree ";
    print(t);
    node *l,*r;
    split(t,&l,&r,4);
      cout<<"\nprinting l ";
      print(l);
      cout<<"\nprinting r ";
      print(r);

    int bk,hk;

}
