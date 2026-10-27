// Function : bng_properties
// Namespace: 
// Entry    : 005a2b00
// Prototype: undefined8 bng_properties(undefined8 param_1, char * param_2)
// Body     : 005a2b00 - 005a2b5f


undefined8 bng_properties(undefined8 param_1,char *param_2)

{
  undefined8 in_RAX;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM5_Db;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  iemgui_new_dialog(CONCAT44((int)((ulong)param_1 >> 0x20),
                             (float)(*(int *)(param_2 + 0x44) /
                                    *(int *)(*(long *)(param_2 + 0x30) + 0xec))),(ulong)DAT_00651f38
                    ,0,0,CONCAT44(in_XMM4_Db,(float)*(int *)(param_2 + 0x494)),
                    CONCAT44(in_XMM5_Db,(float)*(int *)(param_2 + 0x498)),in_XMM6_Qa,in_XMM7_Qa,
                    param_2,(long)param_2,"bang",2,(char *)0xffffffff,&DAT_005e2ee7);
  return in_RAX;
}


