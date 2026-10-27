// Function : canvas_saveto
// Namespace: 
// Entry    : 0051cfc0
// Prototype: undefined canvas_saveto(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, ulong param_12, char * param_13, undefined8 param_14)
// Body     : 0051cfc0 - 0051d3c7


void canvas_saveto(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,int *param_10,undefined8 param_11,ulong param_12,char *param_13,
                  undefined8 param_14)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  long *plVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar9;
  ulong uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  long local_a8;
  long local_a0;
  uint local_94;
  long local_90;
  
  if ((*(long *)(param_9 + 0x48) == 0) || (*(long *)(param_9 + 0xe0) != 0)) {
    piVar6 = param_10;
    puVar4 = gensym("#N");
    puVar5 = gensym("canvas");
    pcVar9 = (char *)(ulong)*(uint *)(param_9 + 0x68);
    uVar10 = (ulong)*(uint *)(param_9 + 0x6c);
    uVar11 = binbuf_addv(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_10,0x6551f6,puVar4,puVar5,pcVar9,uVar10,
                         (double)(ulong)(*(int *)(param_9 + 0x70) - *(uint *)(param_9 + 0x68)));
    canvas_savedeclarationsto
              (uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               extraout_RDX,(ulong)puVar5,pcVar9,uVar10);
    plVar8 = *(long **)(param_9 + 0x30);
  }
  else {
    piVar6 = binbuf_new();
    binbuf_addbinbuf(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     piVar6,*(uint **)(param_9 + 0x10),extraout_RDX_00,param_12,param_13,param_14);
    iVar1 = binbuf_getnatom(piVar6);
    lVar7 = binbuf_getvec((long)piVar6);
    lVar7 = atom_getsymbolarg(1,iVar1,lVar7);
    binbuf_free(piVar6);
    puVar4 = gensym("#N");
    puVar5 = gensym("canvas");
    uVar2 = *(uint *)(param_9 + 0x68);
    uVar3 = *(uint *)(param_9 + 0x6c);
    iVar1 = *(int *)(param_9 + 0x70);
    plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
    uVar11 = extraout_XMM0_Qa_01;
    if (lVar7 == *plVar8 + 0x168) {
      gensym("(subpatch)");
      uVar11 = extraout_XMM0_Qa_02;
    }
    pcVar9 = (char *)(ulong)uVar2;
    uVar10 = (ulong)uVar3;
    piVar6 = param_10;
    binbuf_addv(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,0x654cf0,
                puVar4,puVar5,pcVar9,uVar10,(double)(ulong)(iVar1 - uVar2));
    plVar8 = *(long **)(param_9 + 0x30);
  }
  for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    gobj_save(plVar8);
  }
  uVar11 = linetraverser_start(&local_a8,param_9);
  puVar4 = linetraverser_next(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              &local_a8);
  while (puVar4 != (undefined8 *)0x0) {
    uVar2 = canvas_getindex(param_9,local_a0);
    uVar3 = canvas_getindex(param_9,local_90);
    puVar4 = gensym("#X");
    puVar5 = gensym("connect");
    uVar10 = (ulong)local_94;
    pcVar9 = (char *)(ulong)uVar2;
    uVar11 = binbuf_addv(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,param_10,0x65469f,puVar4,puVar5,pcVar9,uVar10,(double)(ulong)uVar3);
    puVar4 = linetraverser_next(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                &local_a8);
  }
  if ((*(ushort *)(param_9 + 0xe8) & 0x100) == 0) {
    if ((((*(float *)(param_9 + 0x58) == 0.0) && (*(float *)(param_9 + 0x5c) == 0.0)) &&
        (DAT_005d9038 == *(float *)(param_9 + 0x60))) &&
       (((DAT_005d9038 == *(float *)(param_9 + 100) && (*(int *)(param_9 + 0x50) == 0)) &&
        (*(int *)(param_9 + 0x54) == 0)))) {
      return;
    }
  }
  else if ((~*(ushort *)(param_9 + 0xe8) & 0x180) == 0) {
    puVar4 = gensym("#X");
    puVar5 = gensym("coords");
    binbuf_addv((double)*(float *)(param_9 + 0x58),(double)*(float *)(param_9 + 0x5c),
                (double)*(float *)(param_9 + 0x60),(double)*(float *)(param_9 + 100),
                (double)*(int *)(param_9 + 0x50),(double)*(int *)(param_9 + 0x54),
                *(undefined8 *)
                 (&DAT_00654ee8 + (ulong)((*(ushort *)(param_9 + 0xe8) & 0x200) == 0) * 8),
                (double)*(int *)(param_9 + 0x78),piVar6,0x656028,puVar4,puVar5,pcVar9,uVar10,
                (double)*(int *)(param_9 + 0x7c));
    return;
  }
  puVar4 = gensym("#X");
  puVar5 = gensym("coords");
  binbuf_addv((double)*(float *)(param_9 + 0x58),(double)*(float *)(param_9 + 0x5c),
              (double)*(float *)(param_9 + 0x60),(double)*(float *)(param_9 + 100),
              (double)*(int *)(param_9 + 0x50),(double)*(int *)(param_9 + 0x54),
              (double)(*(ushort *)(param_9 + 0xe8) >> 8 & 1),param_8,piVar6,0x6551ff,puVar4,puVar5,
              pcVar9,uVar10,(double)piVar6);
  return;
}


