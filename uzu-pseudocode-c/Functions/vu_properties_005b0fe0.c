// Function : vu_properties
// Namespace: 
// Entry    : 005b0fe0
// Prototype: undefined8 vu_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, char * param_4)
// Body     : 005b0fe0 - 005b104a


undefined8 vu_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined8 in_RAX;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  iemgui_new_dialog(CONCAT44((int)((ulong)param_1 >> 0x20),
                             (float)(*(int *)(param_4 + 0x44) /
                                    *(int *)(*(long *)(param_4 + 0x30) + 0xec))),(ulong)DAT_005d9078
                    ,CONCAT44((int)((ulong)param_3 >> 0x20),
                              (float)(*(int *)(param_4 + 0x40) /
                                     *(int *)(*(long *)(param_4 + 0x30) + 0xec))),
                    (ulong)DAT_00651f38,0,0,in_XMM6_Qa,in_XMM7_Qa,param_4,(long)param_4,
                    &DAT_0065597b,0,(char *)(ulong)*(uint *)(param_4 + 0x4a4),"no scale");
  return in_RAX;
}


