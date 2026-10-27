// Function : slider_properties
// Namespace: 
// Entry    : 005abac0
// Prototype: undefined8 slider_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, char * param_4)
// Body     : 005abac0 - 005abb67


undefined8 slider_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 in_RAX;
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  puVar1 = &DAT_0065596b;
  if (*(int *)(param_4 + 0x4bc) == 0) {
    puVar1 = &DAT_0065596f;
    uVar2 = DAT_005d9078;
    uVar3 = DAT_00651f38;
  }
  else {
    uVar2 = DAT_00651f38;
    uVar3 = DAT_005d9078;
  }
  iemgui_new_dialog((ulong)(uint)(float)(*(int *)(param_4 + 0x44) /
                                        *(int *)(*(long *)(param_4 + 0x30) + 0xec)),(ulong)uVar2,
                    CONCAT44((int)((ulong)param_3 >> 0x20),
                             (float)(*(int *)(param_4 + 0x40) /
                                    *(int *)(*(long *)(param_4 + 0x30) + 0xec))),(ulong)uVar3,
                    CONCAT44((int)((ulong)*(double *)(param_4 + 0x4a0) >> 0x20),
                             (float)*(double *)(param_4 + 0x4a0)),
                    CONCAT44((int)((ulong)*(double *)(param_4 + 0x4a8) >> 0x20),
                             (float)*(double *)(param_4 + 0x4a8)),in_XMM6_Qa,in_XMM7_Qa,param_4,
                    (long)param_4,puVar1,0,(char *)(ulong)*(uint *)(param_4 + 0x498),"linear");
  return in_RAX;
}


