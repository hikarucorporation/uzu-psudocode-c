// Function : tabread4_tilde_new
// Namespace: 
// Entry    : 0058d940
// Prototype: long * tabread4_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined4 * param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0058d940 - 0058da64


long * tabread4_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,
                         undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7
                         ,undefined8 param_8,undefined8 param_9,undefined8 param_10,
                         undefined4 *param_11,long param_12,char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar6;
  long lVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db_00;
  undefined4 local_40 [2];
  long local_38;
  
  uVar9 = (uint)param_10;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  tabread4_tilde_class,param_10,param_11,param_12,param_13,param_14);
  if (uVar9 == 0) {
    local_40[0] = 2;
    plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
    param_12 = *plVar3 + 0x168;
    param_11 = local_40;
    uVar9 = 1;
    local_38 = param_12;
  }
  pvVar4 = getbytes((long)(int)uVar9 * 0x30);
  uVar10 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  plVar2[7] = (long)pvVar4;
  *(uint *)(plVar2 + 6) = uVar9;
  if (0 < (int)uVar9) {
    *(long **)((long)pvVar4 + 0x28) = plVar2;
    *(undefined4 *)((long)pvVar4 + 0x20) = 0x7fffffff;
    uVar10 = gpointer_init((undefined8 *)((long)pvVar4 + 8));
    if (1 < (int)plVar2[6]) {
      lVar7 = 1;
      lVar6 = 0x38;
      do {
        lVar1 = plVar2[7];
        *(long **)(lVar1 + 0x20 + lVar6) = plVar2;
        *(undefined4 *)(lVar1 + 0x18 + lVar6) = 0x7fffffff;
        uVar10 = gpointer_init((undefined8 *)(lVar1 + lVar6));
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x30;
      } while (lVar7 < (int)plVar2[6]);
    }
  }
  pcVar8 = (char *)(ulong)uVar9;
  arrayvec_set(uVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)(plVar2 + 6),
               pcVar8,(ulong)param_11,param_12,param_13,param_14);
  signalinlet_new(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,pcVar8,
                  extraout_RDX,param_12,param_13,param_14);
  puVar5 = gensym("signal");
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar2,(long)puVar5,extraout_RDX_00,param_12,param_13,
             param_14);
  *(undefined4 *)(plVar2 + 8) = 0;
  return plVar2;
}


