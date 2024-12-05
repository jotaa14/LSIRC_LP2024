#ifndef FUCNTIONSPRODUCTS_H
#define FUCNTIONSPRODUCTS_H

#ifdef __cplusplus
extern "C" {
#endif

//utilProduct.c
int GetProductPosition(Management management, int number);
int ChooseProduct(Management *management);
//createProduct.c
void CreateProduct(Management *management);
void AssociateMachineWithProduct (Management *management);
void ProcessMenu(Management *management);
void TotalTimeProduct(Management *management);
//editProduct.c
void EditProduct(Management *management);
void ProductEditStatus(Management *management, int id);
//deleteProduct.c
void DeleteProduct(Management *management);
void CleanDataProduct(Product *product);
void CleanDataProcess(Process *process);
//outputProduct.c
char* PrintProductCategory(Category category);
void PrintProductsProcess(Product *product, int i);
void ListProductsProcesses(Management *management);
void PrintProducts(Product *product);
void ListProducts(Management *management);
void ListProductsByCategories(Management *management);
//menuProduct.c
void ProductMenu(Management *management);
void ProductListMenu(Management *management);
int ProductCategoryMenu();


#ifdef __cplusplus
}
#endif

#endif /* FUCNTIONSPRODUCTS_H */

