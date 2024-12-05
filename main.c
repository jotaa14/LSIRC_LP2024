#include "functions.h"
int main() {
    
    Management *management;
    management = NULL;
    if(management==NULL){
        management = malloc(1 * sizeof(Management));
        management->product_counter=0;
    }
    
    Menu(management);
    
    free(management);
    
    return (EXIT_SUCCESS);
}