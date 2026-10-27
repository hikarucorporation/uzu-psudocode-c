// Function : template_getsymbol
// Namespace: 
// Entry    : 00520ad0
// Prototype: long template_getsymbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00520ad0 - 00520b91


long template_getsymbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,undefined8 *param_10,long param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined1 unaff_BL;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar8;
  
  uVar8 = param_12;
  puVar6 = param_10;
  plVar2 = (long *)__tls_get_addr();
  lVar1 = *plVar2;
  if (param_9 == 0) {
    uVar8 = bug(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                "template_find_field",puVar6,extraout_RDX,uVar8,param_13,param_14,unaff_BL);
  }
  else {
    uVar8 = extraout_XMM0_Qa;
    if (0 < (int)*(uint *)(param_9 + 0x18)) {
      plVar2 = (long *)(*(long *)(param_9 + 0x20) + 8);
      lVar3 = 0;
      do {
        if ((undefined8 *)*plVar2 == param_10) {
          if ((int)plVar2[-1] == 1) {
            return *(long *)(param_11 + (int)lVar3);
          }
          if ((int)param_12 == 0) {
            return lVar1 + 0x168;
          }
          uVar5 = **(undefined8 **)(param_9 + 0x10);
          uVar4 = *param_10;
          pcVar7 = "%s.%s: not a symbol";
          goto LAB_00520b57;
        }
        plVar2 = plVar2 + 3;
        lVar3 = lVar3 + 8;
      } while ((ulong)*(uint *)(param_9 + 0x18) * 8 != lVar3);
    }
  }
  if ((int)param_12 != 0) {
    uVar5 = **(undefined8 **)(param_9 + 0x10);
    uVar4 = *param_10;
    pcVar7 = "%s.%s: no such field";
LAB_00520b57:
    pd_error(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar7,uVar5,uVar4,
             param_13,param_14);
  }
  return lVar1 + 0x168;
}


