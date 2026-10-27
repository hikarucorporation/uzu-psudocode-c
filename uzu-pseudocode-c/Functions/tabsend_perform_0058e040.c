// Function : tabsend_perform
// Namespace: 
// Entry    : 0058e040
// Prototype: long tabsend_perform(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, long param_7)
// Body     : 0058e040 - 0058e1ba


long tabsend_perform(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined4 *puVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined8 extraout_RDX;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  char *in_R8;
  undefined8 in_R9;
  int iVar11;
  ulong extraout_XMM0_Qa;
  ulong uVar12;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 in_stack_ffffffffffffffb8;
  undefined4 *local_40;
  uint local_34;
  
  lVar10 = *(long *)(param_7 + 8);
  plVar2 = *(long **)(param_7 + 0x10);
  puVar9 = *(uint **)(param_7 + 0x18);
  uVar8 = *(uint *)(param_7 + 0x20);
  lVar3 = plVar2[4];
  puVar7 = (undefined4 *)0x0;
  uVar5 = dsparray_get_array(param_1,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
                             param_6,plVar2,(char *)&local_34,&local_40,0,in_R8,in_R9);
  if ((int)uVar5 != 0) {
    if ((int)local_34 < (int)uVar8) {
      uVar8 = local_34;
    }
    uVar12 = extraout_XMM0_Qa;
    if (uVar8 != 0) {
      uVar4 = uVar8;
      if ((uVar8 & 1) != 0) {
        uVar4 = *puVar9;
        uVar12 = (ulong)uVar4;
        in_XMM1 = (undefined1  [16])0x0;
        if (((uVar4 >> 0x1d ^ uVar4 >> 0x1e) & 1) != 0) {
          in_XMM1 = ZEXT416(uVar4);
        }
        uVar4 = uVar8 - 1;
        puVar9 = puVar9 + 1;
        *local_40 = in_XMM1._0_4_;
        puVar7 = local_40;
        local_40 = local_40 + 2;
      }
      if (uVar8 != 1) {
        puVar7 = (undefined4 *)0x0;
        do {
          uVar8 = puVar9[(long)puVar7];
          in_XMM2 = (undefined1  [16])0x0;
          if (((uVar8 >> 0x1d ^ uVar8 >> 0x1e) & 1) != 0) {
            in_XMM2 = ZEXT416(uVar8);
          }
          puVar1 = local_40 + 2;
          *local_40 = in_XMM2._0_4_;
          uVar8 = puVar9[(long)puVar7 + 1];
          in_XMM1 = ZEXT416(uVar8);
          uVar12 = 0;
          if (((uVar8 >> 0x1d ^ uVar8 >> 0x1e) & 1) != 0) {
            uVar12 = (ulong)uVar8;
          }
          local_40 = local_40 + 4;
          *puVar1 = (int)uVar12;
          puVar7 = (undefined4 *)((long)puVar7 + 2);
        } while (uVar4 != (uint)puVar7);
      }
    }
    if ((int)lVar3 < *(int *)(lVar10 + 0x40)) {
      iVar11 = (int)lVar3 + 1;
    }
    else {
      lVar10 = *(long *)PTR_garray_class_00715780;
      plVar6 = pd_findbyclass(uVar12,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,
                              param_6,*plVar2,lVar10);
      if (plVar6 == (long *)0x0) {
        iVar11 = 0;
        bug(extraout_XMM0_Qa_00,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,param_5,param_6,
            "tabwrite_tilde_redraw",lVar10,extraout_RDX,puVar7,in_R8,in_R9,in_stack_ffffffffffffffb8
           );
      }
      else {
        garray_redraw(extraout_XMM0_Qa_00,in_XMM1._0_8_,in_XMM2._0_8_,param_2,param_3,param_4,
                      param_5,param_6,(long)plVar6,lVar10,extraout_RDX,puVar7,in_R8,in_R9,
                      in_stack_ffffffffffffffb8);
        iVar11 = 0;
      }
    }
    *(int *)(plVar2 + 4) = iVar11;
  }
  return param_7 + 0x28;
}


