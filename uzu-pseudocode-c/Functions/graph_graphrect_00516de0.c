// Function : graph_graphrect
// Namespace: 
// Entry    : 00516de0
// Prototype: undefined graph_graphrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 00516de0 - 00516f4d


void graph_graphrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,long param_10,int *param_11,int *param_12,int *param_13,
                    int *param_14)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *extraout_RDX;
  int *extraout_RDX_00;
  int *piVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  
  uVar17 = (undefined4)((ulong)param_4 >> 0x20);
  uVar13 = (undefined4)((ulong)param_2 >> 0x20);
  uVar6 = *(ushort *)(param_10 + 0xe8) & 0x101;
  uVar7 = (ulong)uVar6;
  piVar8 = param_13;
  piVar9 = param_14;
  if (uVar6 == 0x100) {
    fVar12 = *(float *)(param_10 + 0x58);
    if ((*(ushort *)(param_10 + 0xe8) & 0x80) == 0) {
      uVar15 = 0;
      fVar16 = (float)(*(int *)(param_10 + 0x70) - *(int *)(param_10 + 0x68));
      fVar14 = *(float *)(param_10 + 0x60) - fVar12;
      fVar12 = ((float)(int)*(short *)(param_9 + 0x28) * fVar14) / fVar16 + fVar12;
      fVar11 = glist_xtopixels(CONCAT44(uVar13,fVar12),CONCAT44(uVar13,fVar12),(ulong)(uint)fVar14,
                               CONCAT44(uVar17,fVar16),param_5,param_6,param_7,param_8,param_10,
                               0x100,param_11,param_12,(char *)param_13,param_14);
      param_4 = CONCAT44(uVar17,fVar16);
      param_3 = CONCAT44(uVar15,fVar14);
      param_2 = CONCAT44(uVar13,fVar12);
      iVar10 = (int)fVar11;
      piVar5 = extraout_RDX;
    }
    else {
      fVar12 = glist_xtopixels((ulong)(uint)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_10,0x100,param_11,param_12,(char *)param_13,param_14);
      fVar12 = (float)(((int)*(short *)(param_9 + 0x28) - *(int *)(param_10 + 0x78)) *
                      *(int *)(param_10 + 0xec)) + fVar12;
      param_2 = CONCAT44(uVar13,fVar12);
      iVar10 = (int)fVar12;
      piVar5 = extraout_RDX_00;
    }
  }
  else {
    iVar10 = (int)*(short *)(param_9 + 0x28) * *(int *)(param_10 + 0xec);
    piVar5 = param_11;
  }
  if ((*(ushort *)(param_10 + 0xe8) & 0x101) == 0x100) {
    fVar12 = *(float *)(param_10 + 0x5c);
    if ((*(ushort *)(param_10 + 0xe8) & 0x80) == 0) {
      fVar14 = (float)(*(int *)(param_10 + 0x74) - *(int *)(param_10 + 0x6c));
      fVar11 = *(float *)(param_10 + 100) - fVar12;
      fVar12 = ((float)(int)*(short *)(param_9 + 0x2a) * fVar11) / fVar14 + fVar12;
      fVar12 = glist_ytopixels((ulong)(uint)fVar12,(ulong)(uint)fVar12,(ulong)(uint)fVar11,
                               (ulong)(uint)fVar14,param_5,param_6,param_7,param_8,param_10,uVar7,
                               piVar5,0x100,(char *)piVar8,piVar9);
      iVar4 = (int)fVar12;
    }
    else {
      fVar12 = glist_ytopixels((ulong)(uint)fVar12,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_10,uVar7,piVar5,0x100,(char *)piVar8,piVar9);
      iVar4 = (int)((float)(((int)*(short *)(param_9 + 0x2a) - *(int *)(param_10 + 0x7c)) *
                           *(int *)(param_10 + 0xec)) + fVar12);
    }
  }
  else {
    iVar4 = (int)*(short *)(param_9 + 0x2a) * *(int *)(param_10 + 0xec);
  }
  iVar1 = *(int *)(param_9 + 0xec);
  iVar2 = *(int *)(param_9 + 0x50);
  iVar3 = *(int *)(param_9 + 0x54);
  *param_11 = iVar10;
  *param_12 = iVar4;
  *param_13 = iVar2 * iVar1 + iVar10;
  *param_14 = iVar1 * iVar3 + iVar4;
  return;
}


