// Function : inlet_list
// Namespace: 
// Entry    : 0053a050
// Prototype: undefined inlet_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, uint * param_12, uint * param_13, uint * param_14, double param_15)
// Body     : 0053a050 - 0053a2d8


void inlet_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
               undefined8 param_10,uint param_11,uint *param_12,uint *param_13,uint *param_14,
               double param_15)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_RDX;
  float fVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  double in_stack_ffffffffffffffb8;
  uint local_38 [2];
  float local_30;
  
  lVar6 = *(long *)(param_9 + 0x20);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *plVar4;
  if ((((lVar6 == lVar2 + 0xc0) || (lVar6 == lVar2 + 0x78)) || (lVar6 == lVar2 + 0x90)) ||
     (lVar6 == lVar2 + 0x60)) {
    pd_typedmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18),*(undefined8 **)(param_9 + 0x28),param_11,
                 (int *)param_12,param_13,param_14);
    return;
  }
  if (lVar6 == 0) {
    pd_list(*(long **)(param_9 + 0x18),param_10,param_11,param_12);
    return;
  }
  if (param_11 == 1) {
    uVar1 = *param_12;
    uVar7 = (ulong)uVar1;
    if (uVar1 == 2) {
      lVar6 = atom_getsymbol((int *)param_12);
      inlet_symbol(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,lVar6,extraout_RDX,uVar7,(char *)param_13,param_14,param_15);
      return;
    }
    if (uVar1 == 1) {
      fVar10 = (float)atom_getfloat((int *)param_12);
      puVar3 = *(undefined8 **)(param_9 + 0x20);
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar6 = *plVar4;
      puVar5 = (undefined8 *)(lVar6 + 0x78);
      if (puVar3 == puVar5) {
        pd_vmess((double)fVar10,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long *)(param_9 + 0x18),*(undefined8 *)(param_9 + 0x28),0x651ee3,uVar7,param_13,
                 param_14,param_15);
        return;
      }
      uVar7 = (ulong)(uint)fVar10;
      if (puVar3 == (undefined8 *)(lVar6 + 0xf0)) {
        *(float *)(param_9 + 0x28) = fVar10;
        return;
      }
      if (puVar3 == (undefined8 *)0x0) {
        pd_float(*(long **)(param_9 + 0x18));
        return;
      }
      if (puVar3 == (undefined8 *)(lVar6 + 0xc0)) {
        local_38[0] = 1;
        local_30 = fVar10;
        inlet_list(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,puVar5,1,
                   local_38,param_13,param_14,in_stack_ffffffffffffffb8);
        return;
      }
      lVar6 = *(long *)(param_9 + 0x10);
      uVar9 = *puVar3;
      uVar8 = *puVar5;
      goto LAB_0053a1d9;
    }
  }
  else if (param_11 == 0) {
    inlet_bang(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  if (lVar6 == lVar2 + 0xf0) {
    plVar4 = *(long **)(param_9 + 0x18);
    puVar5 = gensym("fwd");
    lVar6 = zgetfn(plVar4,(long)puVar5);
    if (lVar6 != 0) {
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      inlet_fwd(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                *plVar4 + 0xc0,param_11,param_12,param_13,param_14);
      return;
    }
  }
  class_getname((undefined8 *)**(undefined8 **)(param_9 + 0x18));
  post(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"class %s");
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar6 = *(long *)(param_9 + 0x10);
  uVar9 = **(undefined8 **)(param_9 + 0x20);
  uVar8 = *(undefined8 *)(*plVar4 + 0xc0);
  uVar7 = extraout_XMM0_Qa_01;
LAB_0053a1d9:
  pd_error(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar6,
           "inlet: expected \'%s\' but got \'%s\'",uVar9,uVar8,(char *)param_13,param_14);
  return;
}


