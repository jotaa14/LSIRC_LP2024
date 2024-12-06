#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structs.h"
#include "design.h"
#include "consts.h"

#include "fucntionsProduct.h"
#include "designProduct.h"
#include "constsProduct.h"
#include "macrosProduct.h"

#include "fucntionsOrder.h"
#include "designOrder.h"
#include "constsOrder.h"
#include "macrosOrder.h"

#include "functionsMachine.h"
#include "designMachine.h"
#include "constsMachine.h"
#include "macrosMachine.h"

#include "fucntionsCustomer.h"
#include "designCustomer.h"
#include "constsCustomer.h"
#include "macrosCustomer.h"

//menuMain.c
void Menu(Management *management);

//menuOutputs.c
void MenuOutput();
void ProductMenuOutput();
void ProductListMenuOutput();
void ProductCategoryMenuOutput();
void ProcessMenuOutput();
void ProductEditMenuOutput();
void ProductEditStatusMenuOutput();

void CustomerMenuOutput();
void CustomerEditMenuOutput();
void CustomerEditStatusMenuOutput();
void CustomerListMenuOutput();

void OrderMenuOutput();
void OrderPriorityMenuOutput();
void OrderStatusMenuOutput();
void OrderEditMenuOutput();
void OrderListMenuOuput();

void MachineMenuOutput();
void MachineEditMenuOutput();
void MachineTypeMenuOutput();
void MachineStatusMenuOutput();
//util.c
void ClearInputBuffer();
int GetInt(int minValue, int maxValue, char *msg);
void ReadString(char *str, unsigned int size, const char *msg);

#endif /* FUNCTIONS_H */

