#ifndef FUNCTIONSMACHINE_H
#define FUNCTIONSMACHINE_H

#ifdef __cplusplus
extern "C" {
#endif

//utilMachine.c
int GetMachinePosition(Management management, int number);
int ChooseMachine(Management *management);
//createMachine.c
void CreateMachine (Management *management);
//editMachine.c
void EditMachine (Management *management);
//deleteMachine.c
void DeleteMachine(Management *management);
//outputMachine.c
char* PrintMachineType(MachineType machinetype);
char* PrintMachineStatus(MachineStatus machinestatus);
void PrintMachines(Machine *machine);
void ListMachines(Management *management);
//menuMachine.c
void MachineMenu();
int MachineTypeMenu();
int MachineStatusMenu();


#ifdef __cplusplus
}
#endif

#endif /* FUNCTIONSMACHINE_H */

