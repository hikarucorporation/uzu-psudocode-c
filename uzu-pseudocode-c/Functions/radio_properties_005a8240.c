// Function : radio_properties
// Namespace: 
// Entry    : 005a8240
// Prototype: undefined8 radio_properties(undefined8 param_1, char * param_2)
// Body     : 005a8240 - 005a82c9


undefined8 radio_properties(undefined8 param_1,char *param_2)

{
  undefined8 in_RAX;
  char *pcVar1;
  char *pcVar2;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  if (*(int *)(param_2 + 0x4ac) == 0) {
    pcVar2 = (char *)0xffffffff;
  }
  else {
    pcVar2 = (char *)(ulong)*(uint *)(param_2 + 0x498);
  }
  pcVar1 = "vradio";
  if (*(int *)(param_2 + 0x4a8) == 0) {
    pcVar1 = "hradio";
  }
  iemgui_new_dialog(CONCAT44((int)((ulong)param_1 >> 0x20),
                             (float)(*(int *)(param_2 + 0x44) /
                                    *(int *)(*(long *)(param_2 + 0x30) + 0xec))),(ulong)DAT_00651f38
                    ,0,0,0,0,in_XMM6_Qa,in_XMM7_Qa,param_2,(long)param_2,pcVar1,0,pcVar2,"new-only")
  ;
  return in_RAX;
}


