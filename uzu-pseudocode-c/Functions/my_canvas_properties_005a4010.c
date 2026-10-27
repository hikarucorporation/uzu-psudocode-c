// Function : my_canvas_properties
// Namespace: 
// Entry    : 005a4010
// Prototype: undefined8 my_canvas_properties(undefined8 param_1, char * param_2)
// Body     : 005a4010 - 005a406f


undefined8 my_canvas_properties(undefined8 param_1,char *param_2)

{
  undefined8 in_RAX;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM5_Db;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  iemgui_new_dialog(CONCAT44((int)((ulong)param_1 >> 0x20),
                             (float)(*(int *)(param_2 + 0x44) /
                                    *(int *)(*(long *)(param_2 + 0x30) + 0xec))),(ulong)DAT_005d9038
                    ,0,0,CONCAT44(in_XMM4_Db,(float)*(int *)(param_2 + 0x4c0)),
                    CONCAT44(in_XMM5_Db,(float)*(int *)(param_2 + 0x4c4)),in_XMM6_Qa,in_XMM7_Qa,
                    param_2,(long)param_2,&DAT_00654169,0,(char *)0xffffffff,&DAT_005e2ee7);
  return in_RAX;
}


