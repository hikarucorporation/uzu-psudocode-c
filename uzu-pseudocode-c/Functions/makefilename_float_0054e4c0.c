// Function : makefilename_float
// Namespace: 
// Entry    : 0054e4c0
// Prototype: undefined makefilename_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054e4c0 - 0054e5a7


void makefilename_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long *plVar2;
  float fVar3;
  undefined8 extraout_XMM0_Qa;
  char local_7e8 [1008];
  char local_3f8 [1000];
  
  puVar1 = *(undefined8 **)(param_9 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "makefilename: invalid format string",param_11,param_12,param_13,param_14);
    return;
  }
  fVar3 = (float)param_1;
  switch(*(undefined4 *)(param_9 + 0x38)) {
  default:
    strcpy(local_7e8,(char *)*puVar1);
    break;
  case 1:
  case 4:
    sprintf(local_7e8,(char *)*puVar1,(ulong)(uint)(int)fVar3);
    goto joined_r0x0054e5a4;
  case 2:
    sprintf(local_7e8,(char *)*puVar1,(double)fVar3);
joined_r0x0054e5a4:
    if (local_7e8[0] == '\0') {
      return;
    }
    goto LAB_0054e56d;
  case 3:
    sprintf(local_3f8,"%g",(double)fVar3);
    sprintf(local_7e8,(char *)**(undefined8 **)(param_9 + 0x30),local_3f8);
  }
  if (local_7e8[0] != '\0') {
LAB_0054e56d:
    plVar2 = *(long **)(param_9 + 0x18);
    gensym(local_7e8);
    outlet_symbol(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2);
  }
  return;
}


