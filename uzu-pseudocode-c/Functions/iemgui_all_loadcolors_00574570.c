// Function : iemgui_all_loadcolors
// Namespace: 
// Entry    : 00574570
// Prototype: undefined iemgui_all_loadcolors(long param_1, int * param_2, int * param_3, int * param_4)
// Body     : 00574570 - 005745bf


void iemgui_all_loadcolors(long param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  
  if (param_2 != (int *)0x0) {
    uVar1 = colfromatomload(param_2);
    *(uint *)(param_1 + 0x450) = uVar1;
  }
  if (param_3 != (int *)0x0) {
    uVar1 = colfromatomload(param_3);
    *(uint *)(param_1 + 0x44c) = uVar1;
  }
  if (param_4 != (int *)0x0) {
    uVar1 = colfromatomload(param_4);
    *(uint *)(param_1 + 0x454) = uVar1;
  }
  return;
}


