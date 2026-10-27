// Function : my_numbox_properties
// Namespace: 
// Entry    : 005a6220
// Prototype: undefined my_numbox_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9)
// Body     : 005a6220 - 005a62cf


void my_numbox_properties
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               char *param_9)

{
  undefined4 uVar1;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_6 >> 0x20);
  uVar3 = (undefined4)((ulong)param_5 >> 0x20);
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)((ulong)param_1 >> 0x20);
  if ((*(uint *)(param_9 + 0x440) & 0x8000000) != 0) {
    *(uint *)(param_9 + 0x440) = *(uint *)(param_9 + 0x440) & 0xf7ffffff;
    sys_queuegui((long)param_9,*(long *)(param_9 + 0x30),0x5a68b0);
    uVar1 = extraout_XMM0_Db;
  }
  iemgui_new_dialog(CONCAT44(uVar1,(float)*(int *)(param_9 + 0x4e4)),(ulong)DAT_005d9038,
                    CONCAT44(uVar2,(float)(*(int *)(param_9 + 0x40) /
                                          *(int *)(*(long *)(param_9 + 0x30) + 0xec))),
                    (ulong)DAT_00651f38,CONCAT44(uVar3,(float)*(double *)(param_9 + 0x4a8)),
                    CONCAT44(uVar4,(float)*(double *)(param_9 + 0x4b0)),param_7,param_8,param_9,
                    (long)param_9,&DAT_0065597e,0,(char *)(ulong)*(uint *)(param_9 + 0x4c0),"linear"
                   );
  return;
}


