// Function : text_client_getbuf
// Namespace: 
// Entry    : 0055aec0
// Prototype: long text_client_getbuf(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0055aec0 - 0055afdc


long text_client_getbuf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 param_10,undefined8 param_11,int *param_12,
                       char *param_13,undefined8 param_14)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  char *pcVar5;
  long lVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar7;
  int local_30;
  int local_2c;
  char local_28 [8];
  
  if (*(long *)(param_9 + 0x30) == 0) {
    if (*(long *)(param_9 + 0x50) == 0) {
      return 0;
    }
    lVar3 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                *(long *)(param_9 + 0x50));
    if (lVar3 == 0) {
      uVar4 = **(undefined8 **)(param_9 + 0x50);
      pcVar5 = "text: couldn\'t find struct %s";
      uVar7 = extraout_XMM0_Qa_00;
    }
    else {
      plVar2 = (long *)(param_9 + 0x38);
      lVar6 = *(long *)(param_9 + 0x48);
      bVar1 = gpointer_check(plVar2,0);
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                 ,"text: stale or empty pointer",extraout_RDX,param_12,param_13,param_14);
        return 0;
      }
      if (*(int *)(lVar6 + 8) == 2) {
        lVar6 = *plVar2;
      }
      else {
        lVar6 = *plVar2 + 0x18;
      }
      param_12 = &local_30;
      param_13 = local_28;
      uVar4 = template_find_field(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,lVar3,*(long *)(param_9 + 0x58),&local_2c,param_12
                                  ,param_13,param_14);
      uVar7 = extraout_XMM0_Qa_02;
      if ((int)uVar4 == 0) {
        uVar4 = **(undefined8 **)(param_9 + 0x58);
        pcVar5 = "text: no field named %s";
      }
      else {
        if (local_30 == 2) {
          return *(long *)(lVar6 + local_2c);
        }
        uVar4 = **(undefined8 **)(param_9 + 0x58);
        pcVar5 = "text: field %s not of type text";
      }
    }
  }
  else {
    plVar2 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long *)(param_9 + 0x30),text_define_class);
    if (plVar2 != (long *)0x0) {
      return plVar2[6];
    }
    uVar4 = **(undefined8 **)(param_9 + 0x30);
    pcVar5 = "text: couldn\'t find text buffer \'%s\'";
    uVar7 = extraout_XMM0_Qa;
  }
  pd_error(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar5,uVar4,
           param_12,param_13,param_14);
  return 0;
}


