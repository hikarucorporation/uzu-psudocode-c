// Function : tabread_tilde_new
// Namespace: 
// Entry    : 0058d560
// Prototype: long * tabread_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0058d560 - 0058d679


long * tabread_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined4 *param_11,long param_12,
                        char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 local_40 [2];
  long local_38;
  
  uVar8 = (uint)param_10;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  tabread_tilde_class,param_10,param_11,param_12,param_13,param_14);
  if (uVar8 == 0) {
    local_40[0] = 2;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = *plVar3 + 0x168;
    param_11 = local_40;
    uVar8 = 1;
    local_38 = param_12;
  }
  pvVar4 = getbytes((long)(int)uVar8 * 0x30);
  plVar2[7] = (long)pvVar4;
  *(uint *)(plVar2 + 6) = uVar8;
  uVar9 = extraout_XMM0_Qa;
  if (0 < (int)uVar8) {
    *(long **)((long)pvVar4 + 0x28) = plVar2;
    *(undefined4 *)((long)pvVar4 + 0x20) = 0x7fffffff;
    uVar9 = gpointer_init((undefined8 *)((long)pvVar4 + 8));
    if (1 < (int)plVar2[6]) {
      lVar7 = 1;
      lVar6 = 0x38;
      do {
        lVar1 = plVar2[7];
        *(long **)(lVar1 + 0x20 + lVar6) = plVar2;
        *(undefined4 *)(lVar1 + 0x18 + lVar6) = 0x7fffffff;
        uVar9 = gpointer_init((undefined8 *)(lVar1 + lVar6));
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x30;
      } while (lVar7 < (int)plVar2[6]);
    }
  }
  arrayvec_set(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)(plVar2 + 6),
               (char *)(ulong)uVar8,(ulong)param_11,param_12,param_13,param_14);
  puVar5 = gensym("signal");
  outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar2,(long)puVar5,extraout_RDX,param_12,param_13,param_14);
  *(undefined4 *)(plVar2 + 8) = 0;
  return plVar2;
}


