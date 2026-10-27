// Function : canvas_coords
// Namespace: 
// Entry    : 00501c50
// Prototype: undefined canvas_coords(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, long param_12, char * param_13, ulong param_14)
// Body     : 00501c50 - 00501d77


void canvas_coords(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                  undefined8 param_10,int param_11,long param_12,char *param_13,ulong param_14)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = param_9;
  do {
    plVar2 = plVar1;
    uVar3 = (ulong)(*(ushort *)(plVar2 + 0x1d) & 0x101);
    if ((*(ushort *)(plVar2 + 0x1d) & 0x101) != 0x100) break;
    uVar3 = 0;
    plVar1 = (long *)plVar2[9];
  } while ((long *)plVar2[9] != (long *)0x0);
  *(undefined4 *)((long)param_9 + 0xec) = *(undefined4 *)((long)plVar2 + 0xec);
  uVar4 = atom_getfloatarg(0,param_11,param_12);
  *(undefined4 *)(param_9 + 0xb) = uVar4;
  uVar4 = atom_getfloatarg(1,param_11,param_12);
  *(undefined4 *)((long)param_9 + 0x5c) = uVar4;
  uVar4 = atom_getfloatarg(2,param_11,param_12);
  *(undefined4 *)(param_9 + 0xc) = uVar4;
  uVar4 = atom_getfloatarg(3,param_11,param_12);
  *(undefined4 *)((long)param_9 + 100) = uVar4;
  fVar5 = (float)atom_getfloatarg(4,param_11,param_12);
  *(int *)(param_9 + 10) = (int)fVar5;
  fVar5 = (float)atom_getfloatarg(5,param_11,param_12);
  *(int *)((long)param_9 + 0x54) = (int)fVar5;
  if (param_11 >= 8) {
    fVar5 = (float)atom_getfloatarg(7,param_11,param_12);
    *(int *)(param_9 + 0xf) = (int)fVar5;
    fVar5 = (float)atom_getfloatarg(8,param_11,param_12);
    *(int *)((long)param_9 + 0x7c) = (int)fVar5;
  }
  fVar5 = (float)atom_getfloatarg(6,param_11,param_12);
  canvas_setgraph(CONCAT44(extraout_XMM0_Db,fVar5),param_2,param_3,param_4,param_5,param_6,param_7,
                  param_8,param_9,(long *)(ulong)(uint)(int)fVar5,(uint)(param_11 < 8),uVar3,
                  param_13,param_14);
  return;
}


