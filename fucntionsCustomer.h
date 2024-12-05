#ifndef FUCNTIONSCUSTOMER_H
#define FUCNTIONSCUSTOMER_H

#ifdef __cplusplus
extern "C" {
#endif

//utilCustomer.c
int GetCustomerPosition(Management management, int num);
//createCustomer.c
void CreateCustomers(Management *management);
//editCustomer.c
void EditCustomer(Management *management);
void CustomerEditStatus(Management *management, int id);
//deleteCustomer.c
void DeleteCustomer(Management *management);
void CleanDataCustomer(Customer *customer);
//outputCustomer.c
void PrintCustomers(Customer *customer);
void ListCustomers(Management *management);
//menuCustomer.c
void CustomerMenu(Management *management);
void CustomerListMenu(Management *management);

#ifdef __cplusplus
}
#endif

#endif /* FUCNTIONSCUSTOMER_H */
