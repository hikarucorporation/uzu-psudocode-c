// Function : array_client_getbuf
// Namespace: 
// Entry    : 0054aee0
// Prototype: undefined8 array_client_getbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0054aee0 - 0054b059


undefined8
array_client_getbuf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long *param_10,undefined8 param_11,int *param_12,char *param_13,
                   undefined8 param_14)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined7 extraout_var;
  int *piVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long *plVar7;
  char *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar9;
  int local_38;
  int local_34;
  char local_30 [8];
  
  if (*(long *)(param_9 + 0x30) == 0) {
    if (*(long *)(param_9 + 0x50) != 0) {
      lVar5 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *(long *)(param_9 + 0x50));
      if (lVar5 == 0) {
        uVar4 = **(undefined8 **)(param_9 + 0x50);
        pcVar8 = "array: couldn\'t find struct %s";
        uVar9 = extraout_XMM0_Qa_01;
      }
      else {
        plVar2 = (long *)(param_9 + 0x38);
        plVar7 = *(long **)(param_9 + 0x48);
        bVar1 = gpointer_check(plVar2,0);
        piVar6 = &local_38;
        if ((int)CONCAT71(extraout_var,bVar1) == 0) {
          pd_error(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,"array: stale or empty pointer",extraout_RDX_00,param_12,param_13,
                   param_14);
          return 0;
        }
        if ((int)plVar7[1] == 2) {
          lVar3 = *plVar2;
        }
        else {
          lVar3 = *plVar2 + 0x18;
        }
        param_13 = local_30;
        uVar4 = template_find_field(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,lVar5,*(long *)(param_9 + 0x58),&local_34,
                                    &local_38,param_13,param_14);
        param_12 = piVar6;
        uVar9 = extraout_XMM0_Qa_03;
        if ((int)uVar4 == 0) {
          uVar4 = **(undefined8 **)(param_9 + 0x58);
          pcVar8 = "array: no field named %s";
        }
        else {
          if (local_38 == 3) {
            if ((int)plVar7[1] != 1) {
              do {
                plVar7 = *(long **)(*plVar7 + 0x30);
              } while ((int)plVar7[1] == 2);
            }
            *param_10 = *plVar7;
            return *(undefined8 *)(lVar3 + local_34);
          }
          uVar4 = **(undefined8 **)(param_9 + 0x58);
          pcVar8 = "array: field %s not of type array";
        }
      }
      pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar8,uVar4,
               param_12,param_13,param_14);
    }
  }
  else {
    lVar5 = *(long *)PTR_garray_class_00715780;
    plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long *)(param_9 + 0x30),lVar5);
    if (plVar2 != (long *)0x0) {
      lVar3 = garray_getglist((long)plVar2);
      *param_10 = lVar3;
      uVar4 = garray_getarray(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)plVar2,lVar5,extraout_RDX,param_12,param_13,param_14);
      return uVar4;
    }
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "array: couldn\'t find named array \'%s\'",**(undefined8 **)(param_9 + 0x30),param_12,
             param_13,param_14);
    *param_10 = 0;
  }
  return 0;
}


