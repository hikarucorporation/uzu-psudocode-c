// Function : iemgui_properties
// Namespace: 
// Entry    : 005755a0
// Prototype: undefined iemgui_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005755a0 - 005756e5


void iemgui_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  size_t sVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_3f8 [1000];
  
  *param_10 = *(long *)(param_9 + 0x458);
  param_10[1] = *(long *)(param_9 + 0x460);
  param_10[2] = *(long *)(param_9 + 0x468);
  uVar5 = iemgui_init_sym2dollararg
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x470),*(int *)(param_9 + 0x488) + 1,
                     *(long *)(param_9 + 0x458),param_13,param_14);
  uVar5 = iemgui_init_sym2dollararg
                    (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)(param_9 + 0x478),*(int *)(param_9 + 0x488) + 2,
                     *(long *)(param_9 + 0x460),param_13,param_14);
  iemgui_init_sym2dollararg
            (uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             (long *)(param_9 + 0x480),*(int *)(param_9 + 0x48c),*(long *)(param_9 + 0x468),param_13
             ,param_14);
  puVar3 = *(undefined8 **)(param_9 + 0x470);
  *param_10 = (long)puVar3;
  puVar4 = *(undefined8 **)(param_9 + 0x478);
  param_10[1] = (long)puVar4;
  param_10[2] = *(long *)(param_9 + 0x480);
  if (puVar3 != (undefined8 *)0x0) {
    pcVar2 = (char *)*puVar3;
    sVar1 = strlen(pcVar2);
    pcVar2 = (char *)pdgui_strnescape((long)auStack_3f8,1000,(long)pcVar2,sVar1);
    puVar3 = gensym(pcVar2);
    *param_10 = (long)puVar3;
    puVar4 = (undefined8 *)param_10[1];
  }
  if (puVar4 != (undefined8 *)0x0) {
    pcVar2 = (char *)*puVar4;
    sVar1 = strlen(pcVar2);
    pcVar2 = (char *)pdgui_strnescape((long)auStack_3f8,1000,(long)pcVar2,sVar1);
    puVar3 = gensym(pcVar2);
    param_10[1] = (long)puVar3;
  }
  if ((undefined8 *)param_10[2] != (undefined8 *)0x0) {
    pcVar2 = *(char **)param_10[2];
    sVar1 = strlen(pcVar2);
    pcVar2 = (char *)pdgui_strnescape((long)auStack_3f8,1000,(long)pcVar2,sVar1);
    puVar3 = gensym(pcVar2);
    param_10[2] = (long)puVar3;
  }
  return;
}


