// Function : pointertobinbuf
// Namespace: 
// Entry    : 0051f360
// Prototype: undefined8 pointertobinbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f360 - 0051f46b


undefined8
pointertobinbuf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long *param_10,undefined8 *param_11,undefined8 param_12,char *param_13,
               undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  int local_40;
  int local_3c;
  char local_38 [8];
  
  plVar1 = (long *)param_10[2];
  if ((int)plVar1[1] == 1) {
    if (*param_10 == 0) goto LAB_0051f3e7;
    puVar2 = *(undefined8 **)(*param_10 + 0x10);
  }
  else {
    puVar2 = *(undefined8 **)(*plVar1 + 0x10);
  }
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (long)puVar2);
    if (lVar3 == 0) {
      pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               "%s: couldn\'t find template %s",param_12,*puVar2,param_13,param_14);
      return 0;
    }
    uVar4 = template_find_field(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,lVar3,(long)param_11,&local_3c,&local_40,local_38,param_14);
    if ((int)uVar4 == 0) {
      uVar4 = *puVar2;
      pcVar6 = (char *)*param_11;
      pcVar5 = "%s: %s.%s: no such field";
    }
    else {
      if (local_40 == 2) {
        if ((int)plVar1[1] == 2) {
          lVar3 = *param_10;
        }
        else {
          lVar3 = *param_10 + 0x18;
        }
        return *(undefined8 *)(lVar3 + (long)local_3c * 8);
      }
      uVar4 = *puVar2;
      pcVar6 = (char *)*param_11;
      pcVar5 = "%s: %s.%s: not a list";
    }
    pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             pcVar5,param_12,uVar4,pcVar6,param_14);
    return 0;
  }
LAB_0051f3e7:
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"%s: bad pointer"
           ,param_12,param_12,param_13,param_14);
  return 0;
}


