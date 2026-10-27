// Function : arrayvec_set
// Namespace: 
// Entry    : 0058c980
// Prototype: undefined arrayvec_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, char * param_10, ulong param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0058c980 - 0058cb15


void arrayvec_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int *param_9,char *param_10,ulong param_11,long param_12,char *param_13,
                 undefined8 param_14)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  char local_3c [4];
  undefined8 local_38;
  
  if ((int)param_10 == 0) {
    if (0 < *param_9) {
      lVar5 = *(long *)(param_9 + 2);
      lVar6 = 8;
      lVar7 = 0;
      do {
        gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5 + lVar6
                       ,param_10,param_11,param_12,param_13,param_14);
        plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar5 = *(long *)(param_9 + 2);
        *(long *)(lVar5 + -8 + lVar6) = *plVar3 + 0x168;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x30;
        param_11 = extraout_RDX_00;
        param_1 = extraout_XMM0_Qa_02;
      } while (lVar7 < *param_9);
    }
  }
  else {
    if ((0 < (int)param_10) && (0 < *param_9)) {
      uVar8 = (ulong)param_10 & 0xffffffff;
      lVar5 = *(long *)(param_9 + 2);
      puVar4 = (undefined8 *)(param_11 + 8);
      lVar6 = 0;
      uVar9 = 1;
      do {
        param_1 = gpointer_unset(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 lVar5 + lVar6 + 8,param_10,param_11,param_12,param_13,param_14);
        lVar5 = *(long *)(param_9 + 2);
        if (*(int *)(puVar4 + -1) == 2) {
          *(undefined4 *)(lVar5 + 0x20 + lVar6) = 0x7fffffff;
          *(undefined8 *)(lVar5 + lVar6) = *puVar4;
        }
        else {
          param_10 = "expected symbolic array name, got number instead";
          pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   *(long *)(lVar5 + 0x28 + lVar6),
                   "expected symbolic array name, got number instead",extraout_RDX,param_12,param_13
                   ,param_14);
          plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar5 = *(long *)(param_9 + 2);
          *(long *)(lVar5 + lVar6) = *plVar3 + 0x168;
          param_1 = extraout_XMM0_Qa;
        }
        if (uVar8 <= uVar9) break;
        param_12 = (long)*param_9;
        lVar6 = lVar6 + 0x30;
        puVar4 = puVar4 + 2;
        param_11 = uVar9 + 1;
        bVar1 = (long)uVar9 < param_12;
        uVar9 = param_11;
      } while (bVar1);
    }
    iVar2 = pd_getdspstate();
    if ((iVar2 != 0) && (iVar2 = *param_9, 0 < iVar2)) {
      lVar6 = 0;
      lVar5 = 0;
      uVar10 = extraout_XMM0_Qa_00;
      do {
        if (*(char *)**(undefined8 **)(*(long *)(param_9 + 2) + lVar6) != '\0') {
          dsparray_get_array(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (long *)(*(long *)(param_9 + 2) + lVar6),local_3c,&local_38,1,param_13,
                             param_14);
          iVar2 = *param_9;
          uVar10 = extraout_XMM0_Qa_01;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + 0x30;
      } while (lVar5 < iVar2);
    }
  }
  return;
}


