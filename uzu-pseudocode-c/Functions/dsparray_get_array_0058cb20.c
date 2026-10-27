// Function : dsparray_get_array
// Namespace: 
// Entry    : 0058cb20
// Prototype: undefined8 dsparray_get_array(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0058cb20 - 0058cc12


undefined8
dsparray_get_array(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,char *param_10,undefined8 *param_11,int *param_12,char *param_13,
                  undefined8 param_14)

{
  long *plVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  char *extraout_RDX;
  char *extraout_RDX_00;
  char *pcVar7;
  char *extraout_RDX_01;
  char *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  iVar6 = (int)param_12;
  plVar1 = param_9 + 1;
  bVar2 = gpointer_check(plVar1,0);
  if ((int)CONCAT71(extraout_var,bVar2) == 0) {
    if ((iVar6 != 0) || (param_9[3] != 0)) {
      pcVar8 = *(char **)PTR_garray_class_00715780;
      plVar4 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*param_9,(long)pcVar8);
      if (plVar4 == (long *)0x0) {
        lVar5 = param_9[5];
        pcVar7 = extraout_RDX;
        uVar3 = extraout_XMM0_Qa_00;
        if ((lVar5 != 0) && (pcVar7 = *(char **)*param_9, *pcVar7 != '\0')) {
          pcVar8 = "%s: no such array";
LAB_0058cbf3:
          uVar3 = pd_error(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5,
                           pcVar8,pcVar7,param_12,param_13,param_14);
          pcVar7 = extraout_RDX_01;
        }
      }
      else {
        uVar3 = garray_getfloatwords
                          (extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,(long)plVar4,(undefined4 *)param_10,param_11,param_12,param_13,
                           param_14);
        if ((int)uVar3 != 0) {
          lVar5 = garray_getarray(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8,(long)plVar4,param_10,extraout_RDX_00,param_12,
                                  param_13,param_14);
          gpointer_setarray(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,plVar1,lVar5,*param_11,param_12,param_13,param_14);
          goto LAB_0058cb63;
        }
        lVar5 = param_9[5];
        pcVar7 = extraout_RDX_00;
        pcVar8 = param_10;
        uVar3 = extraout_XMM0_Qa_01;
        if (lVar5 != 0) {
          pcVar7 = *(char **)*param_9;
          pcVar8 = "%s: bad template";
          goto LAB_0058cbf3;
        }
      }
      gpointer_unset(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                     pcVar8,pcVar7,param_12,param_13,param_14);
    }
    uVar3 = 0;
  }
  else {
    *param_11 = *(undefined8 *)(*(long *)param_9[3] + 8);
    *(undefined4 *)param_10 = **(undefined4 **)param_9[3];
LAB_0058cb63:
    uVar3 = 1;
  }
  return uVar3;
}


