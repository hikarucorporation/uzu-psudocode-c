// Function : canvas_undo_objectstate
// Namespace: 
// Entry    : 0052e4a0
// Prototype: undefined8 canvas_undo_objectstate(long param_1, int * param_2, int param_3)
// Body     : 0052e4a0 - 0052e543


undefined8 canvas_undo_objectstate(long param_1,int *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long *plVar5;
  uint *in_R8;
  uint *in_R9;
  undefined4 *puVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  double in_XMM4_Qa;
  double in_XMM5_Qa;
  double in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  iVar2 = *param_2;
  plVar5 = *(long **)(param_1 + 0x30);
  if ((iVar2 != 0) && (plVar5 != (long *)0x0)) {
    do {
      iVar2 = iVar2 + -1;
      plVar5 = (long *)plVar5[1];
      if (plVar5 == (long *)0x0) break;
    } while (iVar2 != 0);
  }
  if (param_3 == 2) {
    puVar6 = *(undefined4 **)(param_2 + 6);
  }
  else {
    puVar6 = *(undefined4 **)(param_2 + 4);
    if (param_3 != 1) {
      if (param_3 == 0) {
        binbuf_free(puVar6);
        binbuf_free(*(void **)(param_2 + 6));
        freebytes(param_2);
        return 1;
      }
      return 1;
    }
  }
  if (plVar5 != (long *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 2);
    uVar3 = binbuf_getnatom(puVar6);
    piVar4 = (int *)binbuf_getvec((long)puVar6);
    pd_typedmess(extraout_XMM0_Qa,in_XMM1_Qa,in_XMM2_Qa,in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,
                 in_XMM7_Qa,plVar5,puVar1,uVar3,piVar4,in_R8,in_R9);
  }
  return 1;
}


