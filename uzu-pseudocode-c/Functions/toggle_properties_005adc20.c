// Function : toggle_properties
// Namespace: 
// Entry    : 005adc20
// Prototype: undefined8 toggle_properties(undefined8 param_1, char * param_2)
// Body     : 005adc20 - 005adc7a


undefined8 toggle_properties(undefined8 param_1,char *param_2)

{
  undefined8 in_RAX;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  iemgui_new_dialog(CONCAT44((int)((ulong)param_1 >> 0x20),
                             (float)(*(int *)(param_2 + 0x44) /
                                    *(int *)(*(long *)(param_2 + 0x30) + 0xec))),(ulong)DAT_00651f38
                    ,0,0,(ulong)*(uint *)(param_2 + 0x494),0,in_XMM6_Qa,in_XMM7_Qa,param_2,
                    (long)param_2,&DAT_00655967,1,(char *)0xffffffff,&DAT_005e2ee7);
  return in_RAX;
}


