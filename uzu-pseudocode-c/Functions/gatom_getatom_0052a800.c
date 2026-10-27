// Function : gatom_getatom
// Namespace: 
// Entry    : 0052a800
// Prototype: undefined gatom_getatom(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0052a800 - 0052a89f


void gatom_getatom(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  uint uVar1;
  int iVar2;
  double in_RAX;
  int *piVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_RDX;
  char *in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  iVar2 = binbuf_getnatom(*(undefined4 **)(param_9 + 0x10));
  piVar3 = (int *)binbuf_getvec(*(long *)(param_9 + 0x10));
  uVar1 = *(uint *)(param_9 + 0x30);
  uVar5 = (ulong)uVar1;
  if (uVar1 == 2) {
    if ((iVar2 != 1) || (*piVar3 != 2)) {
      binbuf_clear(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,*(int **)(param_9 + 0x10));
      piVar3 = *(int **)(param_9 + 0x10);
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      binbuf_addv(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,piVar3,0x6552a4,*plVar4 + 0x168,uVar5,in_R8,in_R9,in_RAX);
    }
  }
  else if ((uVar1 == 1) && ((iVar2 != 1 || (*piVar3 != 1)))) {
    binbuf_clear(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,*(int **)(param_9 + 0x10));
    binbuf_addv(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(int **)(param_9 + 0x10),
                0x651ee3,extraout_RDX,uVar5,in_R8,in_R9,in_RAX);
  }
  binbuf_getvec(*(long *)(param_9 + 0x10));
  return;
}


