// Function : tabwrite_tilde_perform
// Namespace: 
// Entry    : 0058cc20
// Prototype: long tabwrite_tilde_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long param_7)
// Body     : 0058cc20 - 0058cd84


long tabwrite_tilde_perform
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,long param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  long lVar9;
  undefined4 *puVar10;
  char *in_R8;
  undefined8 in_R9;
  uint *puVar11;
  ulong extraout_XMM0_Qa;
  ulong uVar12;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_stack_ffffffffffffffc8;
  int local_34;
  long local_30;
  
  plVar4 = *(long **)(param_7 + 8);
  puVar11 = *(uint **)(param_7 + 0x10);
  uVar1 = *(uint *)(param_7 + 0x18);
  iVar2 = (int)plVar4[4];
  uVar6 = dsparray_get_array(param_1,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
                             param_6,plVar4,(char *)&local_34,&local_30,0,in_R8,in_R9);
  if ((int)uVar6 != 0) {
    iVar5 = 0x7fffffff;
    if (iVar2 < local_34) {
      uVar3 = local_34 - iVar2;
      if ((int)uVar1 < local_34 - iVar2) {
        uVar3 = uVar1;
      }
      uVar8 = (ulong)uVar3;
      iVar5 = uVar3 + iVar2;
      uVar12 = extraout_XMM0_Qa;
      if (uVar3 != 0) {
        puVar10 = (undefined4 *)((long)iVar2 * 8 + local_30);
        uVar1 = uVar3;
        if ((uVar3 & 1) != 0) {
          uVar1 = *puVar11;
          uVar12 = (ulong)uVar1;
          in_XMM1 = (undefined1  [16])0x0;
          if (((uVar1 >> 0x1d ^ uVar1 >> 0x1e) & 1) != 0) {
            in_XMM1 = ZEXT416(uVar1);
          }
          puVar11 = puVar11 + 1;
          *puVar10 = in_XMM1._0_4_;
          puVar10 = puVar10 + 2;
          uVar1 = uVar3 - 1;
        }
        if (uVar3 != 1) {
          uVar8 = (ulong)uVar1;
          lVar9 = 0;
          do {
            uVar3 = puVar11[lVar9];
            in_XMM2 = (undefined1  [16])0x0;
            if (((uVar3 >> 0x1d ^ uVar3 >> 0x1e) & 1) != 0) {
              in_XMM2 = ZEXT416(uVar3);
            }
            puVar10[lVar9 * 2] = in_XMM2._0_4_;
            uVar3 = puVar11[lVar9 + 1];
            in_XMM1 = ZEXT416(uVar3);
            uVar12 = 0;
            if (((uVar3 >> 0x1d ^ uVar3 >> 0x1e) & 1) != 0) {
              uVar12 = (ulong)uVar3;
            }
            puVar10[lVar9 * 2 + 2] = (int)uVar12;
            lVar9 = lVar9 + 2;
          } while (uVar1 != (uint)lVar9);
        }
      }
      if (local_34 <= iVar5) {
        lVar9 = *(long *)PTR_garray_class_00715780;
        plVar7 = pd_findbyclass(uVar12,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
                                param_6,*plVar4,lVar9);
        if (plVar7 == (long *)0x0) {
          bug(extraout_XMM0_Qa_00,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
              param_6,"tabwrite_tilde_redraw",lVar9,extraout_RDX,uVar8,in_R8,in_R9,
              in_stack_ffffffffffffffc8);
        }
        else {
          garray_redraw(extraout_XMM0_Qa_00,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,
                        param_5,param_6,(long)plVar7,lVar9,extraout_RDX,uVar8,in_R8,in_R9,
                        in_stack_ffffffffffffffc8);
        }
        iVar5 = 0x7fffffff;
      }
    }
    *(int *)(plVar4 + 4) = iVar5;
  }
  return param_7 + 0x20;
}


