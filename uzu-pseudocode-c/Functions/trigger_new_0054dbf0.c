// Function : trigger_new
// Namespace: 
// Entry    : 0054dbf0
// Prototype: long * trigger_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, undefined4 * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0054dbf0 - 0054dda9


long * trigger_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,ulong param_10,undefined4 *param_11,long param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar12;
  undefined4 local_58 [2];
  long local_50;
  undefined4 local_48;
  long local_40;
  
  uVar9 = param_10 & 0xffffffff;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,trigger_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 == 0) {
    local_58[0] = 2;
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = *plVar2 + 0xa8;
    local_48 = 2;
    uVar9 = 2;
    param_11 = local_58;
    local_50 = param_12;
    local_40 = param_12;
  }
  iVar7 = (int)uVar9;
  plVar1[6] = (long)iVar7;
  pvVar3 = getbytes((long)iVar7 << 4);
  plVar1[7] = (long)pvVar3;
  if (0 < iVar7) {
    lVar11 = 0;
    uVar6 = extraout_XMM0_Qa;
    do {
      if (*(int *)((long)param_11 + lVar11) == 1) {
switchD_0054dcfc_caseD_66:
        *(undefined4 *)((long)pvVar3 + lVar11) = 1;
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar10 = *plVar2 + 0x78;
        uVar6 = extraout_RDX;
        uVar12 = extraout_XMM0_Qa_00;
        goto LAB_0054dcb8;
      }
      if (*(int *)((long)param_11 + lVar11) != 2) {
        puVar5 = (undefined1 *)**(undefined8 **)((long)param_11 + lVar11 + 8);
switchD_0054dcfc_caseD_63:
        pd_error(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                 "trigger: %s: bad type",puVar5,param_12,param_13,param_14);
        goto switchD_0054dcfc_caseD_66;
      }
      puVar5 = (undefined1 *)**(undefined8 **)((long)param_11 + lVar11 + 8);
      switch(*puVar5) {
      case 0x61:
        *(undefined4 *)((long)pvVar3 + lVar11) = 5;
        goto LAB_0054dd78;
      case 0x62:
        *(undefined4 *)((long)pvVar3 + lVar11) = 0;
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar10 = *plVar2;
        lVar4 = 0xa8;
        uVar6 = extraout_RDX_00;
        uVar12 = extraout_XMM0_Qa_02;
        break;
      default:
        goto switchD_0054dcfc_caseD_63;
      case 0x66:
        goto switchD_0054dcfc_caseD_66;
      case 0x6c:
        *(undefined4 *)((long)pvVar3 + lVar11) = 4;
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar10 = *plVar2;
        lVar4 = 0xc0;
        uVar6 = extraout_RDX_01;
        uVar12 = extraout_XMM0_Qa_03;
        break;
      case 0x70:
        *(undefined4 *)((long)pvVar3 + lVar11) = 3;
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar10 = *plVar2 + 0x60;
        uVar6 = extraout_RDX_02;
        uVar12 = extraout_XMM0_Qa_04;
        goto LAB_0054dcb8;
      case 0x73:
        *(undefined4 *)((long)pvVar3 + lVar11) = 2;
LAB_0054dd78:
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar10 = *plVar2;
        lVar4 = 0x90;
        uVar6 = extraout_RDX_03;
        uVar12 = extraout_XMM0_Qa_05;
      }
      lVar10 = lVar10 + lVar4;
LAB_0054dcb8:
      plVar2 = outlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)plVar1,lVar10,uVar6,param_12,param_13,param_14);
      *(long **)((long)pvVar3 + lVar11 + 8) = plVar2;
      lVar11 = lVar11 + 0x10;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar8;
      uVar6 = extraout_XMM0_Qa_01;
    } while (uVar8 != 0);
  }
  return plVar1;
}


