// Function : canvas_setundo
// Namespace: 
// Entry    : 005054f0
// Prototype: undefined canvas_setundo(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 param_10, long param_11, undefined * param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005054f0 - 005055e8


void canvas_setundo(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   char *param_9,undefined8 param_10,long param_11,undefined *param_12,
                   undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined7 extraout_var;
  char *pcVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar8;
  
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar6 = **(long **)(*plVar5 + 0x48);
  bVar2 = true;
  uVar8 = extraout_XMM0_Qa;
  if (((*(code **)(lVar6 + 0x18) != (code *)0x0) && (lVar1 = *(long *)(lVar6 + 0x28), lVar1 != 0))
     && (lVar1 != param_11)) {
    bVar2 = false;
    (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x30),lVar1,0);
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar6 = **(long **)(*plVar5 + 0x48);
    uVar8 = extraout_XMM0_Qa_00;
  }
  *(char **)(lVar6 + 0x30) = param_9;
  *(undefined8 *)(lVar6 + 0x18) = param_10;
  *(long *)(lVar6 + 0x28) = param_11;
  *(undefined4 *)(lVar6 + 0x20) = 1;
  *(undefined **)(lVar6 + 0x38) = param_12;
  if (param_9 != (char *)0x0) {
    uVar4 = glist_isvisible((long)param_9);
    uVar8 = extraout_XMM0_Qa_01;
    if (uVar4 != 0) {
      bVar3 = glist_istoplevel((long)param_9);
      uVar8 = extraout_XMM0_Qa_02;
      if ((int)CONCAT71(extraout_var,bVar3) != 0) {
        pcVar7 = "^ss";
        goto LAB_005055da;
      }
    }
  }
  if (bVar2) {
    return;
  }
  pcVar7 = "rss";
  param_9 = "nobody";
  param_12 = &DAT_0065efc5;
LAB_005055da:
  pdgui_vmess(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654682,pcVar7,param_9,
              param_12,&DAT_0065efc5,param_14,param_15);
  return;
}


