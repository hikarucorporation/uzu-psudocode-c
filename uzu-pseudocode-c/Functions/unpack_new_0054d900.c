// Function : unpack_new
// Namespace: 
// Entry    : 0054d900
// Prototype: long * unpack_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, ulong param_10, undefined4 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054d900 - 0054da3a


long * unpack_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,ulong param_10,undefined4 *param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  char cVar1;
  char *pcVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 uVar6;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  
  uVar9 = param_10 & 0xffffffff;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,unpack_class,
                  param_10,param_11,param_12,param_13,param_14);
  if ((int)param_10 == 0) {
    local_58[0] = 1;
    local_50 = 0;
    local_48 = 1;
    local_40 = 0;
    uVar9 = 2;
    param_11 = local_58;
  }
  iVar7 = (int)uVar9;
  plVar3[6] = (long)iVar7;
  pvVar4 = getbytes((long)iVar7 << 4);
  plVar3[7] = (long)pvVar4;
  if (0 < iVar7) {
    lVar11 = 0;
    uVar6 = extraout_XMM0_Qa;
    do {
      if (*(int *)((long)param_11 + lVar11) == 2) {
        pcVar2 = (char *)**(undefined8 **)((long)param_11 + lVar11 + 8);
        cVar1 = *pcVar2;
        if (cVar1 == 'f') goto LAB_0054d990;
        if (cVar1 == 'p') {
          *(undefined4 *)((long)pvVar4 + lVar11) = 3;
          plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar10 = *plVar5 + 0x60;
          uVar6 = extraout_RDX_01;
          uVar12 = extraout_XMM0_Qa_03;
        }
        else {
          if (cVar1 != 's') {
            pd_error(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                     "unpack: %s: bad type",pcVar2,param_12,param_13,param_14);
            goto LAB_0054d990;
          }
          *(undefined4 *)((long)pvVar4 + lVar11) = 2;
          plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar10 = *plVar5 + 0x90;
          uVar6 = extraout_RDX_00;
          uVar12 = extraout_XMM0_Qa_02;
        }
      }
      else {
LAB_0054d990:
        *(undefined4 *)((long)pvVar4 + lVar11) = 1;
        plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar10 = *plVar5 + 0x78;
        uVar6 = extraout_RDX;
        uVar12 = extraout_XMM0_Qa_00;
      }
      plVar5 = outlet_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)plVar3,lVar10,uVar6,param_12,param_13,param_14);
      *(long **)((long)pvVar4 + lVar11 + 8) = plVar5;
      lVar11 = lVar11 + 0x10;
      uVar8 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar8;
      uVar6 = extraout_XMM0_Qa_01;
    } while (uVar8 != 0);
  }
  return plVar3;
}


